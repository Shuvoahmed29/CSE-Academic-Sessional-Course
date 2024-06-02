//15.Link list(insert,delete,exit).cpp
#include<bits/stdc++.h>
using namespace std;
int cunt = 0;
struct Node
{
    int data;
    Node *link;
};

//Insert first............
struct Node* insert_first(Node *head,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = head->link;
    head->link = newNode;
    return head;
}

//Insert last.................
struct Node* insert_last(Node *head,int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    Node *ptr = head;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newNode;
    newNode->link = NULL;
    return head;
}

//Insert custom.............
struct Node *insert_custom(Node *head,int data,int index)
{
    Node *newNode = new Node();
    newNode->data = data;
    Node *ptr = head;
    for(int i = 0; i<index-1; i++)
    {
        ptr = ptr->link;
    }
    newNode->link = ptr->link;
    ptr->link = newNode;
    return head;
}

//Delete first..........
struct Node *delete_first(Node *head)
{
    Node *ptr = head;
    ptr ->link = ptr->link->link;
    return head;
}

//Delete last............
struct Node *delete_last(Node *head)
{
    Node *ptr = head;
    while(ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NULL;
    return head;
}

//Delete custom...........
struct Node *delete_custom(Node *head,int index)
{
    Node *ptr = head;
    for(int i = 0; i<index-1; i++)
    {
        ptr= ptr->link;
    }
    ptr->link = ptr->link->link;
    return head;
}

//print link list...........
void display(Node *head)
{
    if(cunt <=0)
    {
        cout << "Link list is empty!!\n";
        cunt = 0;
    }
    else
    {
        cout << "Link list: ";
        Node *ptr = head->link;
        while(ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
}
int main()
{
    Node *head = new Node();
    while(1)
    {
        system("cls");
        display(head);
        cout << "\nEnter I for insert element!!\n";
        cout << "Enter D for delete element!!\n";
        cout << "Enter any for exit!!\n";
        cout << "\nEnter your choice: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            int data;
            if(cunt == 0)
            {
                cout << "\nEnter element for insert: ";
                cin >> data;
                insert_first(head,data);
                cunt++;
            }
            else
            {
                system("cls");
                display(head);
                cout << "\nEnter F for insert first!!\n";
                cout << "Enter L for insert last!!\n";
                cout << "Enter N for insert n'th position!!\n";
                cout << "\nEnter your choice: ";
                char c;
                cin >> c;
                if(c == 'f' || c == 'F')
                {
                    cout << "\nEnter element for insert first: ";
                    cin >> data;
                    insert_first(head,data);
                    cunt++;
                }
                else if(c == 'l' || c == 'L')
                {
                    cout << "\nEnter element for insert last: ";
                    cin >> data;
                    insert_last(head,data);
                    cunt++;
                }
                else if(c == 'n' || c == 'N')
                {
                    cout << "Enter position/index for insert: ";
                    int index;
                    cin >> index;
                    cout << "\nEnter element for insert " <<index<<"'th position: ";
                    cin >> data;
                    insert_custom(head,data,index);
                    cunt++;
                }
                else
                {
                    cout << "\nInvalid input!! TRY AGAIN\n";
                    _sleep(1000);
                }
            }
        }
        else if(ch == 'd' || ch == 'D')
        {
            system("cls");
            display(head);
            if(cunt > 0)
            {
                cout << "\nEnter F for delete first!!\n";
                cout << "Enter L for delete last!!\n";
                cout << "Enter N for delete n'th position!!\n";
                cout << "\nEnter your choice: ";
                char c;
                cin >> c;
                if(c == 'f' || c == 'F')
                {
                    delete_first(head);
                    cunt--;
                }
                else if(c == 'l' || c == 'L')
                {
                    delete_last(head);
                    cunt--;
                }
                else if(c == 'n' || c == 'N')
                {
                    cout << "Enter position/index for delete: ";
                    int index;
                    cin >> index;
                    delete_custom(head,index);
                    cunt--;
                }
                else
                {
                    cout << "\nInvalid input!! TRY AGAIN\n";
                    _sleep(1000);
                }
            }
            else
            {
                cout << "There is no more element for delete!!\n";
                _sleep(1000);
            }
        }
        else break;
    }
}
