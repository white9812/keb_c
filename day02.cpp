
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip> //fixed나 showpoint쓰려면 있어야함
#include <limits>
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
    //변수선언
    unsigned long duration,hours,minutes,seconds;
    //입력받기
    cout << "초 단위 시간을 양의 정수로 입력: ";
    cin >> duration ;
    //처리
    hours =duration/3600L;
    minutes=(duration-(hours*3600L))/60L;
    seconds=duration-(hours*3600L)-(minutes*60);
    //출력
    cout << "입력된 초 단위 시간: "<<duration<<endl;
    cout << "결과: ";
    cout << hours << "시";
    cout << minutes << "분";
    cout << seconds << "초";
    return 0;


}
