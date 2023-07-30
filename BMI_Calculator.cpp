#include<iostream>
using namespace std;

int main()
{
    cout << "enter weight(kg):";
    int weight; 
    cin >> weight;

    cout << "enter height(m):";
    float height;
    cin >> height;

    int BMI;

    BMI = weight / (height * height);

    cout << "BMI = " << BMI <<endl;

    
  cout << "   " << endl;

    
    cout << "BMI VALUES"<< endl;

    cout << "Underweight: less than 18.5"<<endl;

    cout << "Normal: between 18.5 and 24.9"<<endl;

    cout << "Overweight: between 25 and 29.9"<< endl;

    cout << "Obese: 30 or greater"<<endl;



   

}