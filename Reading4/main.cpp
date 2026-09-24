#include <iostream>
using namespace std;


class UnorderedList {
    public:
        Node *head;

        UnorderedList() {
            head = NULL;
        }
};
int main() {

    return 0;
}

UnorderedList mylist;


Void add(int item) {
    Node *temp = new Node(item);
    temp -> setNext(head)
    head = temp;
}

int size() {
    Node *current = head;
    int count = 0;
    while (curren5 != NULL) {
        current++;
        current = current->getNext();    
    }
    return count;
}

bool size() {
    Node *current = head;
    while (current != NULL) {
        if (current->getData() == item) {
            return true;
        } else {
            current = current->getNext()
        }
    }
    return false;
}