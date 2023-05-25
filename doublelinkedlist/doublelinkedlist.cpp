#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

class DoubleLinkedlist {
private:
    Node* START;
public:
    DoubleLinkedlist();
    void addNode();
    bool search(int rollNo, Node** previous, Node** current);
    bool deleteNode(int rollNo);
    bool listEmpty();
    void traverse();
    void retraverse();
    void hapus();
    void searchData();
};

DoubleLinkedlist::DoubleLinkedlist() {
    START = NULL;
}

void DoubleLinkedlist::addNode() {
    int nim;
    string nm;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;
    cout << "\nEnter the name of thee student: ";
    cin >> nm;
    Node* newNode = new Node(); //step 1
    newNode->noMhs = nim; //step 2
    newNode->name = nm; //step2

    /*insert a node in the beginning of a doubl - Linked List*/
    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs) {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        newNode->next = START;                                      //step  3
        if (START != NULL)
            START->prev = newNode;                                   //step  4
        newNode->prev = NULL;                                     //step    5
        START = newNode;                                         //step   6
        return;
    }

    /*Inserting a Node Between Two Nodes in the List*/
    Node* current = START;                                       // step 1.a
    Node* previous = NULL;                                       // step 1.b
    while (current->next != NULL && current->next->noMhs < nim)  //step 1.c
    {
        previous = current;             // step 1.d
        current = current->; //step 1.e
    }

    if (current->next != NULL && nim == current->next->noMhs) {
        cout << "\nDuplicate roll numbers not allowed" << endl;
        return;
    }

}
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
