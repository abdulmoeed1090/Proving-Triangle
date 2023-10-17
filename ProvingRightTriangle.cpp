#include<iostream>
#include<cmath>
using namespace std;
// Declaring a function to check wether given parameters are of right triangle or not
bool CheckingTriangle(double hyp, double perp, double base)
{   
   // Making if-else statement
   if(pow(hyp,2)==pow(perp,2)+pow(base,2)){
     return true;
    
   }
   else{
   return false;
   }

}
int main()
{   //Declaring variables 
    double hyp,perp,base;
    cout<<"Enter the value of hypotenuse"<<endl;
    cin >>hyp;
    cout<<"Enter the value of base"<<endl;
    cin >> base;
    cout<<"Enter the value of perpendicular"<<endl;
    cin>>perp;
    //Calling the function
   if (CheckingTriangle( hyp,  perp, base)==true)
   {
    cout<<"It is a right triangle"<<endl;
   }
   else{
    cout<<"it is not a right triangle!!"<<endl;
   }
    return 0;
}