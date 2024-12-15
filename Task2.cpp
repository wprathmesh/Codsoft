// Simple Calculator

#include<iostream>
using namespace std;

void calculator(){
    cout<<"Welcome to the basic calculator!"<<endl;
    cout<<"Select the opearation:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;

    int choice;
    while(true){
        cout<<"Enter the number corressponding to your choice (1/2/3/4)"<<endl;
        cin>>choice;
        if(choice>=1 && choice <=4){
            break;
        }
        else{
            cout<<"Invalid choice. Please select 1,2,3 or 4"<<endl;
        }
    }

    double num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    switch(choice){
        case 1:
        cout<<"The result of addition is: "<<(num1 + num2)<<endl;
        break;
        case 2:
        cout<<"The result of subtraction is: "<<(num1-num2)<<endl;
        break;
        case 3:
        cout<<"The result of multiplication is: "<<(num1 * num2)<<endl;
        break;
        case 4:
        if(num2 !=0){
            cout<<"The result of division is: "<<(num1/num2)<<endl;
        }
        else{
            cout<<"Division by zero is not allowed."<<endl;
        }
        break;
    }
}
int main(){
    calculator();
    return 0;
}