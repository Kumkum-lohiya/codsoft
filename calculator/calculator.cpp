#include<iostream>
using namespace std;

void functionOne()
{
    char Calculator[5][4] = {
        {'C', '%', 'X', '/'}, 
        {'7', '8', '9', '*'}, 
        {'4', '5', '6', '-'}, 
        {'1', '2', '3', '+'}, 
        {' ', '0', '.', '='} 
    };
    cout<<"Calculator"<<endl;
    cout<<"       |       |       |       \n";
    cout<<" "<<Calculator[0][0]<<"     | "<<Calculator[0][1]<<"     | "<<Calculator[0][2]<<"     |  "<<Calculator[0][3]<<"   \n";
    cout<<"_______|_______|_______|_______\n";
    cout<<"       |       |       |       \n";
    cout<<" "<<Calculator[1][0]<<"     | "<<Calculator[1][1]<<"     | "<<Calculator[1][2]<<"     |  "<<Calculator[1][3]<<"   \n";
    cout<<"_______|_______|_______|_______\n";
    cout<<"       |       |       |       \n";
    cout<<" "<<Calculator[2][0]<<"     | "<<Calculator[2][1]<<"     | "<<Calculator[2][2]<<"     |  "<<Calculator[2][3]<<"   \n";
    cout<<"_______|_______|_______|_______\n";
    cout<<"       |       |       |       \n";
    cout<<" "<<Calculator[3][0]<<"     | "<<Calculator[3][1]<<"     | "<<Calculator[3][2]<<"     |  "<<Calculator[3][3]<<"   \n";
    cout<<"_______|_______|_______|_______\n";
    cout<<"       |       |       |       \n";
    cout<<" "<<Calculator[4][0]<<"     | "<<Calculator[4][1]<<"     | "<<Calculator[4][2]<<"     |  "<<Calculator[4][3]<<"   \n";
    cout<<"       |       |       |       \n";
}
double functionTwo(){
    double num1,num2;
    char op;
    cin>>num1>>op>>num2;

    switch (op)
    {
                case '+': return num1 + num2;
                case '-': return num1 - num2;
                case '*': return num1 * num2;
                case '/': return (num2 != 0) ? num1 / num2 : 0;
                default: return 0;
            }
   
}
int main() {
  
    
    functionOne();
   
   cout<<functionTwo();

    return 0;

    
}
