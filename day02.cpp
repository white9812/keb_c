
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip>;
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
   
   // 변수 선언
    unsigned int givenInt,firstDigit;
  //입력받기
    cout <<"양의 정수 입력: ";
    cin >>givenInt;
    firstDigit=givenInt %10 ;
    cout << "입력한 정수: "<<givenInt << endl;
    cout << "첫번째 자리수 추출 : "<< firstDigit << endl;


    return 0;
}