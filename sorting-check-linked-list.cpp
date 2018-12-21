#include <iostream>
#include <cstdlib>

using namespace std;


struct Node
{
    int key;
    Node *next;
};

void headInsert(Node *&head, int k);
bool isSorted(Node *head)
{
    Node* temp = head;
    if (head!=NULL)
    {
    Node* next_node=temp->next;
    while(next_node!= NULL)
    {
            if (temp->key > next_node->key)
            {
                return false;
            }

        temp = temp->next;
        next_node = temp->next;
    }
    }

    return true;
}

int main()
{
    Node *head = NULL;

    int n;
    cin >> n;
    int inputK;
    for (int i=0 ; i< n ; i++)
    {
        cin >> inputK ;
        headInsert(head, inputK);
    }

    if(isSorted(head)){
        cout << "Yes";
    }else{
        cout << "No";
    }

}

void headInsert(Node *&head, int k)
{
    Node *newNode = new Node;
    newNode -> key = k;
    newNode -> next = head;
    head = newNode;
}
