#include <iostream>
#include <ctime>

int main(){

    time_t present_time;

    present_time = time(NULL);


    std :: cout << present_time << "Second has passed since 00:00 GMT , 1 Jan , 1970\n";

    int hour, mint, sec, a = present_time;

    sec =  a % 60;
    mint = a / 60 % 60;
    hour = a / 3600 % 60;

    std :: cout << "Time : " << hour << " : "<< mint << " : "<< sec;
    
    return 0;
}