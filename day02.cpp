
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip>;
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
    int num1,num2;
    int larger;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    larger = num1>=num2 ? num1:num2;
    cout << "더 큰 숫자= " << larger << endl ;


    return 0;
}