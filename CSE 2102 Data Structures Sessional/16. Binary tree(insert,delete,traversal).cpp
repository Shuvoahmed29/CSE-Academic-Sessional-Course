//16. Binary tree(insert,delete,traversal).cpp
#include<bits/stdc++.h>
using namespace std;
using namespace::chrono;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
//Create node.............
struct Node* create_node(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Insert node............
struct Node *insert_node(Node *ptr,int data)
{
    if(ptr == NULL)
    {
        ptr = create_node(data);
    }
    else if(ptr->data >= data)
    {
        ptr->left = insert_node(ptr->left,data);
    }
    else
    {
        ptr->right = insert_node(ptr->right,data);
    }
    return ptr;
}
//Pre order traversal.........
void pre_order(Node *ptr)
{
    if(ptr != NULL)
    {
        cout << ptr->data << " ";
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}
//Inorder traversal.........
void in_order(Node *ptr)
{
    if(ptr != NULL)
    {
        in_order(ptr->left);
        cout << ptr->data << " ";
        in_order(ptr->right);
    }
}
//Post order traversal.........
void post_order(Node *ptr)
{
    if(ptr != NULL)
    {
        post_order(ptr->left);
        post_order(ptr->right);
        cout << ptr->data << " ";
    }
}

void display(Node *root)
{
    cout << "Current list!!\n";
    cout << "Preorder Traversal: ";
    pre_order(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    in_order(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    post_order(root);
    cout << endl;
}

int main()
{
    Node *root = NULL;
    while(1)
    {
        auto start = high_resolution_clock::now();
        system("cls");
        display(root);
        cout << "\nEnter I for insert element!!\n";
        cout << "Enter any for exit!!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            cout << "\nEnter element for insert: ";
            int data;
            cin >> data;
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);
            cout << "Time duration: "<<duration.count()/1000000 << " miliseconds\n";
            _sleep(1000);
            root = insert_node(root,data);
        }
        else
        {
            break;
        }
    }
}
