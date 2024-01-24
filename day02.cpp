
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip> //fixed나 showpoint쓰려면 있어야함
#include <limits>
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
    // 변수 선언
    unsigned int givenInt,firstDigit,day;
    //입력받기
    cout <<"양의 정수 입력: ";
    cin >>givenInt;
    //처리
    firstDigit=givenInt %10 ;
    //출력
    cout << "입력한 정수: "<<givenInt << endl;
    cout << "첫번째 자리수 추출 : "<< firstDigit << endl;
    day();
    return 0;
}
/*
*입력된 정의 모든 자릿수를 추출해서 출력하는 프로그램 확장하기
*ex) input :2345
* 출력 :
*   첫번째 자리수 추출:5
*   두번째 자리수 추출:4
*   세번째 자리수 추출:3
*   네번째 자리수 추출:2
*
*
*
*
*/

int day(){
    // 변수 선언
    unsigned int givenInt,firstDigit,secondDigit,thirdDigit,forthDigit;
    //입력받기
    cout <<"양의 정수 입력: ";
    cin >>givenInt;
    //처리
    firstDigit=givenInt %10 ;
    secondDigit=givenInt %100 ;
    thirdDigit=givenInt %1000 ;
    forthDigit=givenInt %10000 ;

    //출력
    cout << "입력한 정수: "<<givenInt << endl;
    cout << "첫번째 자리수 추출 : "<< firstDigit << endl;
    cout << "두번째 자리수 추출 : "<< secondDigit << endl;
    cout << "세번째 자리수 추출 : "<< thirdDigit << endl;
    cout << "네번째 자리수 추출 : "<< forthDigit << endl;

    return 0;
}