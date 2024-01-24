
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip>;
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
   
   // 변수 선언
   double number ;
   int intpart ;
   double frackPart ;
   // 입력받기
   cout << "부동 소수점 입력 : ";
   cin >> number ;
   //처리
    intpart = static_cast<int>(number);
    frackPart=number-intpart;
    cout << fixed << showpoint << setprecision(2);
    cout << "원래 값: " << number << endl ;
    cout << "정수부분: "<< intpart << endl ;
    cout << "소수점 아래 부분: " << frackPart << endl;
    
    return 0;
}