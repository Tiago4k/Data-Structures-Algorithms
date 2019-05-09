#include <iostream>
#include <stack>
using namespace std;

void displayStack(stack<int> stck)
{
    stack <int> st = stck;
    
    while(!st.empty())
    {   
        cout<< st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack <int> stck;
    
    stck.push(2);
    stck.push(5);
    stck.push(10);
    stck.push(15);
    stck.push(20);
    stck.push(25);
    

    displayStack(stck);
    
    cout<<"Size of the stack is: " << stck.size()<<endl;
    cout<<"Top item in the stack is: "<<stck.top()<< endl;
}
