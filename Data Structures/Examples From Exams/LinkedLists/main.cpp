#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedListOfInt(int N)
{
// Declare a linked list of integers
LinkedList<int> iList;

// Add N random integers into the list
for (int n = 0; n < N; n++) {
    int rand_num = rand() % 1000;
    /* (2) */
    iList.addAtEnd(rand_num);
    cout << *iList.getAtEnd() << "\t";
    }
cout << endl;

// Print the numbers in the list, from the last to the first,
// without making changes to the list.
// Option 1:
for (int n = N - 1; n >= 0; n--)
    cout << *iList.getAt(n) << "\t";
    cout << endl;

// Option 2:
/* (3) */
iList.setAtEnd();
for(int i = 0; i < iList.size; i++)
{
    int* previous = iList.getPrevious();
    cout << *previous << "\t" ;
}

/* (4) */
//The complexity of Option 1 is O(n).
//The complexity of Option 2 is O(n).
}


void LinkedListOfChar(int N)
{
// Declare a linked list of characters
LinkedList<char> cList;

// Add N random characters into the list
for (int n = 0; n < N; n++) {
    char rand_char = 'a'+ rand() % 26;
    /* (2) */
    cList.addAtEnd(rand_char);
    cout<<*cList.getAtEnd() << "\t";
    }
cout << endl;

// Search for the first occurrence of character c in the list
// without making changes to the list
char c = 'm';
// Option 1:
for (int n = 0; n < N; n++)
    if (*cList.getAt(n) == c) {
        cout << c << " is first found at " << n << endl;
        break;
    }
cout << endl;
// Option 2:
/* (3) */
cList.setAtStart();
for(int i = 0; i < cList.size; i++)
{
    char* next = cList.getNext();
    if(*next == c)
    {
        cout << c << " is first found at " << i << endl;
        break;
    }
}

/* (4) */
//The complexity of Option 1 is O(n).
//The complexity of Option 2 is O(n).
}


int main()
{
    //LinkedListOfInt(5);
    LinkedListOfChar(26);
}
