using namespace std;
#include<iostream>

int main(){
    
    float waterTemprature = 80.555567;
    int roundedTemp = (int) waterTemprature; // C-style cast, it truncates the decimal part
    char convertToChar = (char) waterTemprature;
    

    cout << roundedTemp << endl;
    cout << convertToChar << endl; // output will be 'P' because 80 in ASCII is 'P'

    float bookPrice = 20.54;
    int quantity = 3;

    int totalCost = bookPrice * quantity; 

    float totalCostConvert = (float) totalCost;

    cout<< totalCost << endl; // output of this is 61
    cout<< totalCostConvert << endl; // output of this is 61.000000

}