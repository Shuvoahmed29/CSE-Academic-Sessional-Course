//Tree(insert,traversal).cpp
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
struct Node *insert_node(Node *ptr, int data)
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
    if(ptr != NULL)
    {
        cout << ptr->data << " ";
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

void in_order(Node *ptr)
{
    if(ptr != NULL)
    {
        in_order(ptr->left);
        cout << ptr->data << " ";
        in_order(ptr->right);
    }
}
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
    cout << "\nCurrent Traversal!!\n";

    cout << "Pre Order Traversal: ";
    pre_order(root);
    cout << endl;

    cout << "In Order Traversal: ";
    in_order(root);
    cout << endl;

    cout << "Post Order Traversal: ";
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
        cout << "\nEnter I for insert!!\n";
        cout << "Enter any for exit!!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if(ch == 'i' || ch == 'I')
        {
            cout << "\nEnter element: ";
            int data;
            cin >> data;
            root = insert_node(root,data);
        }
        else break;
    }
}
