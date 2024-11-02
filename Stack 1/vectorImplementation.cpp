#include <iostream>
#include <vector>
using namespace std;

class stack
{
public:
    vector<int> v; // no overflow
    // stack()
    // {
    // }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty!" << endl;
            return;
        }
        v.pop_back();
    }
    int top()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        // return v.top();
        return v[v.size() - 1];
    }
    int size()
    {
        return v.size();
    }
    void display()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
};
int main()
{
    stack st;
    st.pop();
    st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.display();
}