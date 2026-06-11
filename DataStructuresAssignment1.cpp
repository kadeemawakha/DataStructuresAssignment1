#include <iostream>
using namespace std;

enum Faction
{
    RED,
    BLUE,
    GREEN
};

struct User
{
    char username[11];
    int level;
    enum faction;
};

struct Node
{
    User data;
    Node* next;
};

struct Queue
{
    Node* head;
    Node* tail;
};

void initializeQueue(Queue* q);
int isEmpty(Queue* q);
int enqueue(Queue* q, User user);
int dequeue(Queue* q, User* removedUser);
User generateRandomUser();
int enqueueRandomUsers(Queue* q, int numUsers);
void printUser(User user);

int main()
{

}

// Initializes the queue by setting head and tail to nullptr
void initializeQueue(Queue* q)
{
    q->head = nullptr;
    q->tail = nullptr;
}

// Checks if the queue is empty by verifying if head is nullptr
int isEmpty(Queue* q)
{
    return q->head == nullptr;
}




