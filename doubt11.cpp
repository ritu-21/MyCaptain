// Hello code is not working .Giving error .Please help to run this code successfuly .
// Debug this code and make a pull request with new file containing correct code .
//correct code
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number\n";//could give this to make the program more user friendly
    cin >> n;
    if ((n>1)&&(n<9)) // this prog can also be done using switch construct
    {
        if (n == 1){
            cout << "one";
        }
        else if (n == 2){
            cout << "two";
        }
        else if (n == 3){
            cout << "three";
        }
        else if (n == 4){
            cout << "four";
        }
        else if (n == 5){
            cout << "five";
        }
        else if (n == 6){
            cout << "six"; 
        }
        else if (n == 7){
            cout << "seven";
        }
        else if (n == 8){
            cout << "eight";
        }
        else if (n == 9){
            cout << "nine";
        }

    }
    else {
        cout << "Greater than 9";
    }
}
