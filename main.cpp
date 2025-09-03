#include <iostream>
using namespace std;

int main() {
    double weight=130;
    double height=61;
    cout <<"Transfer pounds and inches to kilograms and meters"<<endl;
    double weightKg=static_cast<double>(130*0.453592); 
    double heightM=static_cast<double>(61*0.0254);
    double BMI=weightKg/(heightM*heightM);
    cout<<"The BMI for this person is : "<<BMI<< "."<< endl;
 


}
