// Write C++ program with functions a) To print original string followed by reversed string using stack b) To check whether given string is palindrome or not
#include<iostream>
#include<string>
using namespace std;
class Stack {
    public :
    static const int size = 100;
    int STACK[size];

    static int top;
    Stack()
    {
        top = -1;
    }
    void push(char ele)
    {
        if(top == size-1){
            cout<<"Stack overflow !";
        }
        else{
            top++;
            STACK[top]  = ele;
            cout<<"pushed :"<<ele;
        }
    }
    void pop(){
        if(size == -1){
            cout<<"no more element's in stack to delete! ";
        }
        else{
            int temp;
            temp = STACK[top];
            top--;
            cout <<"popped :"<<temp;
        }
    }
};
int main()
{
    Stack st;
    string str;
    int reverse[st.size];
    cout<<"Enter a string :";
    cin>>str;
    for(int i=0;i<=st.top;i++)
    {
        st.push(str[i]);
    }
    cout<<st.top;
//     int rev_ptr = -1;
//     for(int i = st.top;i>=0;i--){
//         rev_ptr++;
//         reverse[rev_ptr] = str[i];
//     }
// cout<<str;
return 0;
}