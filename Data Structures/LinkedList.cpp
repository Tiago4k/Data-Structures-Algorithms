    
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linkedList
{
    private:
    node *head, *tail;
    
    public:
    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    void deleteList()
    {
        node *current = head;
        node *temp = new node;
        while(current->next != NULL)
        {
            temp = current->next;
            delete current;
            current = temp;
        }
    }
    
    void displayList()
    {
        node *temp = new node;
        temp = head;
        
        while(temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
    
    void addAtFront(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        temp = head;
    }
    
    void addAt(int pos, int value)
    {
        node *previous = new node;
        node *current = new node;
        node *temp = new node;
        
        current = head;
        
        for(int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;
        }
        
        temp->data = value;
        previous->next = temp;
        temp->next = current;
    }
    
    void removeAtFront()
    {
        node *temp = new node;
        temp = head;
        head = head->next;
        delete temp;
    }
    
    void removeAtEnd(){
        
        node *current = new node;
        node *previous = new node;
        current = head;
        
        while(current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        
        tail = previous;
        previous->next = NULL;
        delete current;
    }
    
    void removeAt(int pos)
    {
        node *previous = new node;
        node *current = new node;
        
        current = head;
        
        for(int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;
        }
        
        previous->next = current->next;
        delete current;
    }
};

int main()
{
    linkedList obj1 = linkedList();
    linkedList obj = linkedList();
    
    obj1.insertNode(53);
    obj1.insertNode(32);
    obj1.insertNode(84);
    obj1.insertNode(21);
    
    obj.insertNode(5);
    obj.insertNode(3);
    obj.insertNode(8);
    obj.insertNode(1);
    
//    obj1.addAt(2, 11);
    
    obj1.displayList();
    
//    obj1.removeAtFront();
    
    cout<<endl;
    
    obj.displayList();
    
    cout<<endl;
    
    obj.deleteList();
    
    cout<<endl;
    
    obj.displayList();
} 
