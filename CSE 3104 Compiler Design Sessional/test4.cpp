#include<bits/stdc++.h>
using namespace std;
struct symbol_info{
    string name;
    string type;
    struct symbol_info* next;
}*block[53];


int HashCreate(string name){
    int total = 0;
    for(int i=0;name[i]!='\0';i++) total += name[i];

    return total%53;
}
void InsertTable(string name, string type){
    int position = HashCreate(name);
    if(block[position]==NULL){
        block[position] = new symbol_info();
        block[position]->name = name;
        block[position]->type = type;
        block[position]->next = NULL;
    }
    else{
        symbol_info* newNode = new symbol_info();
        newNode->name = name;
        newNode->type = type;

        symbol_info* nextNode = block[position];
        block[position] = newNode;
        newNode->next = nextNode;
    }
}
void UpdateTable(string name,string type,string newtype){
    int position = HashCreate(name);
    symbol_info* temp = block[position];
    while(temp != NULL){
        if(temp->name == name && temp->type == type){
            temp->type = newtype;
            return;
        }
        temp = temp->next;
    }
}
bool searchTable(string name,string type){
    int position = HashCreate(name);
    symbol_info* temp = block[position];
    while(temp != NULL){
         if(temp->name == name && temp->type == type) return true;
         temp = temp->next;
    }
    return false;
}
void DeleteTable(string name, string type){
    int position = HashCreate(name);
    symbol_info* temp = block[position];
    if(temp == NULL) return;
    if( temp->next == NULL && temp->name == name && temp->type == type ){
        block[position] = NULL;
    }

    else if(temp->name == name && temp->type == type){
        block[position] = temp->next;
    }

    else{
        while(temp->next != NULL ){
            if (temp->next->name == name && temp->next->type == type ) break;
            temp = temp->next;
        }
        if( temp != NULL ){
            symbol_info* found = temp->next;
            temp->next = found->next;
            delete(found);
        }
    }
}
void displayTable(){
    for(int i=0;i<53;i++){
        cout << i  << ": ";
        symbol_info* temp = block[i];
        while(temp != NULL){
            cout <<"[ " << temp->name <<" | " << temp->type << " ]";
            temp = temp->next;
        }
        cout << "\n";
    }
}
int showMenu(){
    cout << "Choice Menu!\n";
    cout << "Enter 1 for insert(name,type)!\n";
    cout << "Enter 2 for update(name,old type,new type)!\n";
    cout << "Enter 3 for search(name,type)!\n";
    cout << "Enter 4 for delete(name,type)!\n";
    cout << "Enter 5 for display symbol table!\n";

    cout << "Enter your choice: ";
    int choice; cin >> choice;
    return choice;
}
int main(){
    int choice = showMenu();
    while(1){
        string name,type;
        if(choice == 1){
            cout << "Enter name & type for insert: ";
            cin >> name >> type;
            if(name[name.size()-1] == ',') name[name.size()-1] = '\0';
            if(type[type.size()-1] == ',') type[type.size()-1] = '\0';
            cout << "Name: " << name << " Type: " << type << " inserted successfully!\n";
            cout <<"At position : " << HashCreate(name) << endl;
            InsertTable(name,type);
        }
        else if(choice == 2){
            cout << "Enter name,old type,new type for update: ";
            string newtype;
            cin >> name >> type >> newtype;
            if(name[name.size()-1] == ',') name[name.size()-1] = '\0';
            if(type[type.size()-1] == ',') type[type.size()-1] = '\0';
            if(newtype[newtype.size()-1] == ',') newtype[newtype.size()-1] = '\0';
            cout <<"Type: " << type << " update to " << newtype << endl;
            UpdateTable(name,type,newtype);
        }
        else if(choice == 3){
            cout << "Enter name & type for search: ";
            cin >> name >> type;
            if(name[name.size()-1] == ',') name[name.size()-1] = '\0';
            if(type[type.size()-1] == ',') type[type.size()-1] = '\0';

            if(searchTable(name,type)) cout << "Found data!\n";
            else cout << "No data found!\n";
        }
        else if(choice == 4){
            cout << "Enter name & type for delete: ";
            cin >> name >> type;
            if(name[name.size()-1] == ',') name[name.size()-1] = '\0';
            if(type[type.size()-1] == ',') type[type.size()-1] = '\0';
            DeleteTable(name,type);
        }
        else if(choice == 5){
            cout << "Symbol Table!\n";
            displayTable();
        }
        else cout << "Wrong choice. Try again." << endl;
        choice = showMenu();
    }
}