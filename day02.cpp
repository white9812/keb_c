
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip> //fixed나 showpoint쓰려면 있어야함
#include <limits>
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



   // 변수 선언
   double number ;
   int intpart ;
   double frackPart ;
   // 입력받기
   cout << "부동 소수점 입력 : ";
   cin >> number ;
   //처리
    //intpart = static_cast<int>(number);
    intpart = number;
    frackPart=number-intpart;
    cout << fixed << showpoint << setprecision(2);
    cout << "원래 값: " << number << endl ;
    cout << "정수부분: "<< intpart << endl ;
    cout << "소수점 아래 부분: " << frackPart << endl;
    cout << "max value of int type: "<< numeric_limits<int>::max()<<endl;

    return 0;
}