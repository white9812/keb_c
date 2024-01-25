#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //선언과 초기화
    int startDay;
    int daysInMonth;
    int col =1;
    //한 달의 날짜 유효성 검사
    do{

        cout <<"한 달의 날짜 수를 입력하세요(28,29,30,31): ";
        cin >> daysInMonth;

    }while(daysInMonth <28 || daysInMonth >31);
    //요일 유효성 검사
    do
    {
        cout << "첫 날의 요일을 입력하세요 (0~6): ";
        cin >> startDay;
        /* code */
    } while (startDay<0 || startDay>6);
    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat"<<endl;
    cout << "--- --- --- --- --- --- ---"<<endl;
    //달력의 앞쪽 여백 출력
    for(int space=0;space < startDay ;space++){
        cout <<"  ";
        col++;
    }
    //달력 출력
    for(int day=1; day<=daysInMonth;day++){
        cout << setw(3)<<day<<" ";
        col++;
        if(col>7){
        cout <<endl;
        col=1;
        }
    }
    return 0;
}
//첫날의 요일에 MOn넣으니까 0으로 판단함 왜그런지 생각하기
