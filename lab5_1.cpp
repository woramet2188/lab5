#include<iostream>
using namespace std;
int i=1,num,x=-1,y=0;
int main(){
    while(i!=0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num%2==0){
            x++;
        }
        else{
            y++;
        }
        i=num;
    }
    cout << "#Even numbers = "<<x;
    cout << "\n#Odd numbers = "<<y;
    return 0;
}
