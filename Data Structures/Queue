#include <iostream>
#include <queue>
using namespace std;

void displayQueue(queue<int> qu)
{
    queue <int> q = qu;
    
    while(!q.empty())
    {   
        cout<< q.front() << " ";
        q.pop();
    }
    cout << endl;
}


int main()
{

    queue <int> qu;
    
    qu.push(2);
    qu.push(5);
    qu.push(10);
    qu.push(15);
    qu.push(20);
    qu.push(25);
    

    displayQueue(qu);
    
    cout<< qu.size()<<endl;
    cout<<"First item in the queue is: "<<qu.front()<< endl;
    cout<<"Last item in the queue is: "<<qu.back()<< endl;
    
    
    // DeQueue entire queue 
    while(!qu.empty())
    {
        int item = qu.front();
        cout<<"Item dequeued "<<item<<endl;
        qu.pop();
    }
   
    cout<< qu.size()<<endl;
    cout<<"First item in the queue is: "<<qu.front()<< endl;
    
    

}
