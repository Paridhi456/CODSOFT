#include<iostream>
#include<math.h>
using namespace std;
double calculator(double a, double b, char c);

int main(){
double n1,n2,result;
char terminate;
char oper;
while(terminate!='c'){
cout<<"\n--Basic calculator--\n\n";
cout<<"Use '*' for multiplication\n";
cout<<"Use '/' for division\nUse '%' for remaider\nUse '^' for exponential power of a number\nType 'c' to terminate the calculator:- \n\n";
cout<<"Enter your expression\n";
cin>>n1;
cin>>oper;
cin>>n2;
        switch(oper){
            case '+':result = n1+n2;
            break;
            case '-':result=n1-n2;
            break;
            case '*':result=n1*n2;
            break;
            case '/':if (n2 != 0.0) {
                result = n1 / n2;
            } else {
                cout << "Error:Division by zero";
                return 0;
            }
            break;
            case '%': if(n2!=0.0){
                result = (int)n1%(int)n2;}
                else
                cout<<"Not defined";
            break;
            case '^':result=pow(n1,n2);
            break;
            default: cout<<oper<<"Invalid operator";
        }
cout<<result;
        cout<<"\n\nEnter 'c' to terminate or any letter if wish to restart: ";
        cin>>terminate;
        if(terminate=='c')
        break;}
return 0;}  
