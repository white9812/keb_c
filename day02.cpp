
#include <iostream> // iostream의 객체 cin(파이썬의 input()),cout 쓰기위해서
#include <iomanip>;
using namespace std; // std::cout 에서 std::생략하려면 쓰는 것


int main(){
    int day;
    cout <<"Enter a nember between 0 and 6:";
    cin >> day;
    switch(day){
        case 0: cout << "Sunday" << endl;
                break;
        case 1: cout << "Monday" << endl;
                 break;
        case 2: cout << "Tuesday" << endl;
                 break;
        case 3: cout << "Wednesday" << endl;
                 break;
        case 4: cout << "Thursday" << endl;
                 break;
        case 5: cout << "Friday" << endl;
                 break;
        case 6: cout << "Saturday" << endl;
                 break;
        // break가 없으면 입력한 숫자부터 그 다음수들까지 모두 출력됨
        //case1부터 맞는 case인지 판단하고 맞는게 있으면 그다음 case도 처리하는것
        default : cout<<"There is no days" <<endl;
    }
    return 0;
}