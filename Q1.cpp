#include <iostream>

using namespace std;

int main(void)
{
    cout << "Enter three numbers: ";
    int num, num2, num3;
    cin >> num;
    cin >> num2;
    cin >> num3;

    if(num > num2 && num > num3){
        cout << num << " is the largest number.";
    }
    else if(num2 > num && num2 > num3){
        cout << num2 << " is the largest number.";
    }
    else {
        cout << num3 << " is the largest number.";
    }
    return 0;
}