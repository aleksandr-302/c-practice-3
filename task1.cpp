#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int day;
    int month;
    int year;
    cout<<"enter your birthday in format: day month year"<<endl;
    cin>>day>>month>>year;
    time_t bd_time, cur_time;
    tm birthday = {0};

    birthday.tm_mday = day;
    birthday.tm_mon = month - 1;
    birthday.tm_year = year - 1900;

    bd_time = mktime(&birthday);
    cur_time = time(0);

    int years;
    years= difftime(cur_time, bd_time);
    cout<<years/31536000<<" years ";

    int days;
    days= difftime(cur_time, bd_time);
    cout<<(days/3600/24)-((years/31536000)*365.25)<<" days ";
}
