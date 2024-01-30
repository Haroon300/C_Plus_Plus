//                                           task 01

#include <iostream>
#include <cmath>

int main() {
    
    int bmi;
    double weight, height;
    
    std :: cout << "Enter Your Weight : \n";
    std :: cin >> weight;
    std :: cout << "Enter Your Height in foot : \n";
    std :: cin >> height;
    
    
    bmi = weight / pow( height, 2);
    
    
    if (bmi < 18.5 )
    {
        std :: cout << "You are UnderWieght";
    }else if( bmi <=18.5 || bmi < 25 )
    {
        std :: cout << "You are Normal";
    }
    else if( bmi <= 25 || bmi < 30 )
    {
        std :: cout << "You are OverWeigth";
    }else if( bmi <=30 )
    {
        std :: cout << "You are Obese";
    }
    
    return 0;
}



//                              taxk 02


#include <iostream>
#include <cmath>

int main() {
    
    int pay, status;
    
    std :: cout << "Enter Your pay\n";
    std :: cin >> pay;
    std :: cout << "Enter Your Status :\n";
    std :: cout << "1 for Single\n 2 for Married Filing Jointly\n 3 for Married filing Separately\n 4 Head of Househole\n";
    std :: cin >> status;
    
    if (status == 1)
    {
        if(pay >= 0 || pay <= 8350)
        {
         std :: cout <<" Tax on Your pay: " <<  pay * 0.10 << "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*10/100;
         
        }else if(pay >= 8351 || pay <= 33950)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 15 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*15/100;
        }else if(pay >= 33951 || pay <= 82250)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 25 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*25/100;
        }else if(pay >= 82251 || pay <= 171550)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 28 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*28/100;
        }else if(pay >= 171551 || pay <= 372950)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 33 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay * 33 / 100;
        }else if(pay >= 372951)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 35 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*35/100;
        }
        
    }else if (status == 2)
    {
        if(pay >= 0 || pay <= 16700)
        {
         std :: cout <<" Tax on Your pay: " <<  pay * 10 / 100 << "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*10/100;
         
        }else if(pay >= 16701 || pay <= 67900)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 15 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*15/100;
        }else if(pay >= 67901 || pay <= 137050)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 25 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*25/100;
        }else if(pay >= 137051 || pay <=208850 )
        {
            std :: cout <<" Your pay after tax: " <<  pay * 28 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*28/100;
        }else if(pay >= 208851 || pay <= 372950)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 33 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay * 33 / 100;
        }else if(pay >= 372951)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 35 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*35/100;
        }
    }else if (status == 3)
    {
        if(pay >= 0 || pay <= 8350)
        {
         std :: cout <<" Tax on Your pay: " <<  pay * 10 / 100 << "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*10/100;
        
        }else if(pay >= 8351 || pay <= 33950)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 15 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*15/100;
        }else if(pay >= 33951 || pay <= 68525)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 25 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*25/100;
        }else if(pay >= 68526 || pay <= 104425 )
        {
            std :: cout <<" Your pay after tax: " <<  pay * 28 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*28/100;
        }else if(pay >= 104426 || pay <= 186475)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 33 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay * 33 / 100;
        }else if(pay >= 186476)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 35 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*35/100;
        }
    }else if (status == 4)
    {
        if(pay >= 0 || pay <= 11950)
        {
         std :: cout <<" Tax on Your pay: " <<  pay * 10 / 100 << "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*10/100;
         
        }else if(pay >= 11951 || pay <= 45500)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 15 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*15/100;
        }else if(pay >= 45501 || pay <= 117450)
        {
         std :: cout <<" Your pay after tax: " <<  pay * 25 / 100<< "\n";
         std :: cout << "You Pay after pay is : " << pay - pay*25/100;
        }else if(pay >= 117451 || pay <= 190200 )
        {
            std :: cout <<" Your pay after tax: " <<  pay * 28 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*28/100;
        }else if(pay >= 190201 || pay <= 372950)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 33 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay * 33 / 100;
        }else if(pay >= 372951)
        {
            std :: cout <<" Your pay after tax: " <<  pay * 35 / 100<< "\n";
            std :: cout << "You Pay after pay is : " << pay - pay*35/100;
        }
    }else
    {
        std :: cout << "Invalid Status Number";
    }
    
    
    return 0;
}

//                       task 03


#include <iostream>

int main() {
    
    int num, num1, rev;
    
    std :: cout << "Enter Number : \n";
    std :: cin >> num;
    
    num1 = (num % 10) * 1000;
    rev += num1;
    
    num1 = (num % 100) * 10;
    rev += num1;
    
    num1 = (num % 10000) * 1000;
    rev += num1;
    
    
    
    if (num == rev)
    {
        std :: cout << "Number is Palindrome ";
    }else{
        std :: cout << "Number is not Palindrome ";
    }
    return 0;
}