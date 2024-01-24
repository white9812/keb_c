
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip> //fixed나 showpoint쓰려면 있어야함
#include <limits>
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
    //변수선언
    int num1,num2,num3;
    int sum;
    double average;
    double dev1,dev2,dev3;
    //입력받기
    cout << "첫번째 숫자 입력: ";
    cin >> num1 ;
    cin >> num2 ;
    cout << "세번째 숫자 입력: ";
    cin >> num3 ;
    //처리
    sum=num1+num2+num3;
    average=static_cast<double>(sum)/3;
    dev1=num1-average;
    dev2=num2-average;
    dev3=num3-average;

    //출력
    cout << fixed << setprecision(2);
    cout << "세 숫자의 합"<<sum<<endl;
    cout << "평균 : "<<setw(9)<<average<<endl;
    cout << "첫번째 숫자의 편차: "<<setw(9)<<dev1<<endl;
    cout << "두번째 숫자의 편차: "<<setw(9)<<dev2<<endl;
    cout << "세번째 숫자의 편차: "<<setw(9)<<dev3<<endl;
    cout <<"끝!!!!!!!!"<<endl;
    
    return 0;


}