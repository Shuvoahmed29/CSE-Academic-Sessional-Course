#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

struct Node *create_node(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

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
}

void pre_order(Node *ptr)
{
    if(ptr!=NULL)
    {
        cout << ptr->data << " ";
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

void in_order(Node *ptr)
{
    if(ptr!=NULL)
    {

        in_order(ptr->left);
        cout << ptr->data << " ";
        in_order(ptr->right);
    }
}

void post_order(Node *ptr)
{
    if(ptr!=NULL)
    {

        post_order(ptr->left);
        post_order(ptr->right);
        cout << ptr->data << " ";
    }
}

void display(Node *root)
{
    cout<< "\nCurrent traversal!!\n";

    cout << "PreOrder: ";
    pre_order(root);
    cout << endl;

    cout << "InOrder: ";
    in_order(root);
    cout << endl;

    cout << "PostOrder: ";
    post_order(root);
    cout << endl;
}

int main()
{
    Node *root = NULL;
    while(1)
    {
        system("cls");
        display(root);
        cout << "\nI for insert\n";
        cout << "Exit\n";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            cout << "Element: ";
            int data;
            cin >> data;
            root = insert_node(root,data);
        }
        else break;
    }
}
