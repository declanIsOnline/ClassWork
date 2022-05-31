// Linked Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Node {
    std::string name;
    Node* nextPosition;
};

int main()
{
    Node* headNode = new Node;
    Node* midNode = new Node;
    Node* tailNode = new Node;

    headNode->name = "Head node";
    headNode->nextPosition = midNode;

    midNode->name = "Mid node";
    midNode->nextPosition = tailNode;

    tailNode->name = "Tail node";
    tailNode->nextPosition = NULL;

    Node* tempNode = headNode;
    int node_pos = 1;

    while (tempNode != NULL) {
        std::cout << "The value of node " << node_pos << " is " << tempNode->name << std::endl;

        tempNode = tempNode->nextPosition;
        node_pos++;
    }
 
    std::cout << "\n\n\n";
    return 0;
}
