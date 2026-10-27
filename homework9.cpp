#include<iostream>

using std::cout;
using std::endl;

int main(){
    int x = 0;
    int y = 1;
    cout<<" x + y = 1,"<< x + y <<endl;
    // if-then-else statement
    if(x>y){
        //true
        cout<<"x is greater than y"<<endl;
    }else{
        //false
        //x=y or x<y
        cout<<"x is not greater than or equal to y"<<endl;
    }
if(x>y){
    x=x+1;
    {else{
        x=x-1;
    }
    cout<<"x:" << x << "y:" << y << endl;
    return 0;
}