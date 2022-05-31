// Linked Lists Ex1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


struct Node {
    int value;
    Node* next;
    //Node* prev;
};

void printReversed(Node* head) {
    if (head == NULL) {
        return;
    }

    printReversed(head->next);

    std::cout << "Value = " << head->value << "\n";
}

void cleanUp(Node* start) {
    if (start == NULL) {
        delete(start);
        return;
    }

    cleanUp(start->next);
    
}

int main()
{
    int node_num = 0;
    std::cout << "Enter the number of nodes: ";
    std::cin >> node_num;

    Node* head = new Node;
    head->next = NULL;

    std::cout << "\n\n";

    std::cout << "Enter a value for position 1: ";
    std:: cin >> head->value;
    
    Node* prev = head;

    for (int i = 1; i < node_num; i++) {
        Node* temp = new Node;
        std::cout << "Enter a value for position " << i + 1 << ": ";
        std::cin >> temp->value;
        temp->next = NULL;

        prev->next = temp;
        prev = temp;
    }

    std::cout << "\n\n";

    Node* trav = head;
    int position = 1;

    while (trav != NULL) {
        std::cout << "The value of node " << position << " is " << trav->value << std::endl;

        trav = trav->next;
        position++;
    }


    std::cout << "\n\nReversed:\n";
    printReversed(head);

    int new_tail;
    std::cout << "\n\nEnter a new node to be the tail: ";
    std::cin >> new_tail;
    position = 1;

    trav = head;

    while (trav != NULL) {
        if (position == new_tail) {
            cleanUp(trav);
            trav->next = NULL;
        }
        std::cout << "The value of node " << position << " is " << trav->value << std::endl;

        trav = trav->next;
        position++;
    }

   



    std::cout << "\n\n\n";
    return 0;
}