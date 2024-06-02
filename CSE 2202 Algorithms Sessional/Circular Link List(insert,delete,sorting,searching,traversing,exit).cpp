// Circular Link List(insert,delete,sorting,searching,traversing,exit).cpp
#include <bits/stdc++.h>
using namespace std;
int cunt = 0;
struct Node
{
    int data;
    Node *link;
};
// Insert First.......
Node *insertFirst(Node *head, int data)
{
    Node *newNode = new Node{data, head};
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        newNode->link = head;
        return head;
    }
    Node *cpt = head;
    while (cpt->link != head)
    {
        cpt = cpt->link;
    }
    cpt->link = newNode;
    head = newNode;
    cunt++;
    return head;
}
// Insert Last ...........
Node *insertLast(Node *head, int data)
{
    Node *newNode = new Node{data, head};
    newNode->data = data;
    Node *cpt = head;
    while (cpt->link != head)
    {
        cpt = cpt->link;
    }
    cpt->link = newNode;
    newNode = head;
    cunt++;
    return head;
}
// Custom Insert............
Node *insertCustom(Node *head, int data, int index)
{
    Node *newNode = new Node{data, NULL};
    if (head == NULL)
    {
        head = newNode;
        newNode->link = head;
        return head;
    }
    Node *ptr = head;
    for (int i = 1; i < index - 1 && ptr->link != head; i++)
    {
        ptr = ptr->link;
    }
    newNode->link = ptr->link;
    ptr->link = newNode;
    if (index == 1)
    {
        head = newNode;
    }
    cunt++;
    return head;
}
// Delete first.....
Node *deleteFirst(Node *head)
{
    if (head->link == head)
    {
        head = NULL;
    }
    else
    {
        Node *ptr = head;
        while (ptr->link != head)
        {
            ptr = ptr->link;
        }
        head = head->link;
        ptr->link = head;
    }
    if (cunt > 0)
        cunt--;
    else
        cunt = 0;
    return head;
}
// Delete last.....
Node *deleteLast(Node *head)
{
    Node *cpt = head;
    if (head->link == head)
    {
        head = NULL;
    }
    else
    {
        while (cpt->link->link != head)
        {
            cpt = cpt->link;
        }
        cpt->link = head;
    }
    if (cunt > 0)
        cunt--;
    else
        cunt = 0;
    return head;
}
// Delete custom........
Node *deleteCustom(Node *head, int index)
{
    Node *cpt = head;
    if (head->link == head)
    {
        head = NULL;
    }
    else if (index == 1)
    {
        Node *cpt = head;
        while (cpt->link != head)
        {
            cpt = cpt->link;
        }
        head = head->link;
        cpt->link = head;
    }
    else
    {
        for (int i = 1; i < index - 1 && cpt->link != head; i++)
        {
            cpt = cpt->link;
        }
        cpt->link = cpt->link->link;
    }
    if (cunt > 0)
        cunt--;
    else
        cunt = 0;
    return head;
}

// Print all element.....
void display(Node *head)
{
    if (head == NULL)
    {
        cout << "Circular Linked List: empty\n";
        return;
    }
    cout << "Circular Linked List: ";
    Node *cpt = head;
    do
    {
        cout << cpt->data << " ";
        cpt = cpt->link;
    } while (cpt != head);
    cout << endl;
}
// Sort all element
void SORT(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *ptr = head;
    do
    {
        Node *cpt = ptr->link;
        while (cpt != head)
        {
            if (ptr->data > cpt->data)
            {
                swap(ptr->data, cpt->data);
            }
            cpt = cpt->link;
        }
        ptr = ptr->link;
    } while (ptr != head);
    display(head);
    cout << "\nThe link list is sorted!!\n";
    _sleep(2000);
}
// Search one element
void search(Node *head, int element)
{
    if (head == NULL)
    {
        return;
    }
    Node *ptr = head;
    int p = 0;
    do
    {
        if (ptr->data == element)
        {
            cout << "\nThe element " << element << " is found!!\n";
            p++;
            _sleep(2000);
            break;
        }
        ptr = ptr->link;
    } while (ptr != head);

    if (p == 0)
    {
        cout << "\nThe element " << element << " is NOT found!!\n";
        _sleep(2000);
    }
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        system("cls");
        display(head);
        cout << "\nEnter I for insert!!\n";
        cout << "Enter D for delete!!\n";
        cout << "Enter S for sorting!!\n";
        cout << "Enter F for searching!!\n";
        cout << "Enter E for exit!!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'i' || ch == 'I')
        {
            if (cunt == 0)
            {
                cout << "Enter element for insert: ";
                int element;
                cin >> element;
                head = insertFirst(head, element);
                cunt++;
            }
            else
            {
                system("cls");
                display(head);
                cout << "\nEnter F for insert first!\n";
                cout << "Enter L for insert last!\n";
                cout << "Enter N for insert n'th position!\n";
                cout << "Enter your choice: ";
                char c;
                cin >> c;
                if (c == 'f' || c == 'F')
                {
                    cout << "Enter element for insert first: ";
                    int element;
                    cin >> element;
                    head = insertFirst(head, element);
                }
                else if (c == 'l' || c == 'L')
                {
                    cout << "Enter element for insert last: ";
                    int element;
                    cin >> element;
                    head = insertLast(head, element);
                }
                else if (c == 'n' || c == 'N')
                {
                    cout << "Enter index number: ";
                    int idx;
                    cin >> idx;
                    cout << "Enter element for insert " << idx << " position: ";
                    int element;
                    cin >> element;
                    head = insertCustom(head, element, idx);
                }
                else
                    cout << "Invalid input Try again!\n";
            }
        }
        else if (ch == 'd' || ch == 'D')
        {
            system("cls");
            display(head);
            if (cunt <= 0)
            {
                cout << "SORRY!! there is no element for delete!\n";
                cunt = 0;
                _sleep(1200);
                continue;
            }
            cout << "\nEnter F for delete first!!\n";
            cout << "Enter L for delete last!!\n";
            cout << "Enter N for delete n'th position!!\n";
            cout << "Enter your choice: ";
            char ch;
            cin >> ch;
            if (ch == 'f' || ch == 'F')
            {
                head = deleteFirst(head);
            }
            else if (ch == 'l' || ch == 'L')
            {
                head = deleteLast(head);
            }
            else if (ch == 'n' || ch == 'N')
            {
                cout << "Enter index for delete: ";
                int idx;
                cin >> idx;
                head = deleteCustom(head, idx);
            }
            else
                cout << "Invalid input Try again!\n";
        }
        else if (ch == 's' || ch == 'S')
        {
            SORT(head);
        }
        else if (ch == 'f' || ch == 'F')
        {
            cout << "Which element you want to search: ";
            int element;
            cin >> element;
            search(head, element);
        }
        else if (ch == 'e' || ch == 'E')
        {
            cout << "\nCode is exited!!\n";
            _sleep(1000);
            break;
        }
        else
        {
            cout << "\nInvalid input Try again!!\n";
            _sleep(1000);
        }
    }
}
