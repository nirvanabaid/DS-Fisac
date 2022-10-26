#include <iostream>
#include <queue>
using namespace std;
 
class Stack {
    queue<int> q1, q2;
 
public:
    void push(int x)
    {
        q2.push(x);
         while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
    void pop()
    {
        if (q1.empty())
        {
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        else{
            cout<<top()<<endl;
            q1.pop();
        }
    }
 
    
 
    int size() { return q1.size(); }
};
 
int main()
{
    Stack s;
    int c,a;
    do
    {
        cout<<"Enter 1 to push, 2 to pop, 3 to peek , 4 to check size of the stack and -1 to exit- ";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"Enter the element- ";
            cin>>a;
            s.push(a);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << s.top() << endl;
            break;
        case 4:
            cout << "current size: " << s.size() << endl;
            break;
        case -1:
            break;
        
        default:
            cout<<"INVALID CHOICE. TRY AGAIN.";
            break;
        }
    } while (c!=-1);
    
}