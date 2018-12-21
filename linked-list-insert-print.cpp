#include <iostream>
#include <cstdlib>
using namespace std;


struct Node
{
    int key;
    int value;
    Node *next;
};

void headInsert(Node *&head, int k, int v){
    Node *p = new Node;
p->key = k;
p->value = v;
p->next = head;
head = p;

}
void printList(Node *head){
    Node *cur = head;
    while(cur != NULL)

    {
        std::cout << "Key:" << cur->key << ",value:" << cur->value << std::endl;
        cur = cur->next;
    }
}

int main()
{
    Node *head = NULL;

    int n;
    cin >> n;
    int inputK, inputV;
    for (int i=0 ; i< n ; i++)
    {
        cin >> inputK >> inputV;
        headInsert(head, inputK, inputV);
    }
    printList(head);
}
