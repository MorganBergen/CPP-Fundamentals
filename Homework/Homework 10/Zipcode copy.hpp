/*
 Name: Morgan Bergen
 WSUID: B493R546
 HW: 10
 
 Assignment Description: Implement a class to represent a zip code.

 Assignment Details:
 
 From 1965 – 2013, the US Postal Service used a bar code on every envelope representing the zip code (The ZIP code was introduced in 1963) using a format called POSTNET. A bar code is still used, but POSTNET was retired completely in 2013. We will be doing the same with 5-digit zip codes. POSTNET consists of long and short lines or bars, as seen below:
 
 In the program, the zip code will be placed into a class. See the included Zipcode.hpp to see how the class should be defined & implemented. For the bar code representation, a string will be used where the character ‘1’ represents a long bar and the character ‘0’ represents the short bar.
 A POSTNET code consists of 32 bars/digits. The first and last bars are always 1. Stripping these leaves 30 digits, which can be split into groups of 5.
                    10110010001001010110011000101001
                   01100 10001 00101 01100 11000 10100
 Now, we look at the first five groups of 5. There will always be two 1’s. Depending on its location within the group, each 1 represents a number. When the numbers that the 1’s represent are added together, you get that digit of the zip code. The table below translates the underlined group, which represents the number 6.
 
 POSTNET Digits 0 1 1 0 0
 Value          7 4 2 1 0
 
 We see that the 1’s correspond to the values of 4 and 2, respectively. Adding them up gives us 6, which is the first digit of the zip code (and also the fourth since the same group appears again, due to the zip code having two 6’s).
 In order to represent the number 0, the 1’s will add up to a value of 11. This is done because of the requirement that every group of five must have two 1’s in it.
 
 The sixth group is known as the “check digit.” This is included so that sorting machines can catch reading errors. The check digit is calculated by summing the 5 digits of the zip code and adding the check digit such that the total sum is a multiple of 10. In the example above:

 6 + 7 + 2 + 6 + 0 = 21
 10 - (21 % 10) = 9
 
 The check digit for the zip code 67260 is 9, meaning all six digits sum to 30. If the sum of the 5 digits is already a multiple of 10, the check digit is 0.

 */

#include<bits/stdc++.h>
#include <cstdalign>

using namespace std;
class Zipcode
{
public:
    Zipcode()=default;
    Zipcode(string s);
    array<int,5>get_digits();
    string get_string();
    string get_POSTNET();
    void set_zipcode(string zip);
    void print_barcode(std::ostream& sout=std::cout);
private:
    std::string m_zip="00601";
};
Zipcode::Zipcode(string s)
{
    this->m_zip=s;
}
string Zipcode::get_string()
{
    string s=this->m_zip;
    string res="";
    for(int i=1;i<s.size()-1;i++)
    {
        res.push_back(s[i]);
        if(i%5==0)
            res.push_back(' ');
    }
    return res;
}
string Zipcode::get_POSTNET()
{
    return this->m_zip;
}
array<int,5> Zipcode::get_digits()
{
    array<int,5>digits;
    array<int,5>post_dig={7,4,2,1,0};
    string code=get_string();
    int j=0;
    for(int i=0;i<5;i++)
    {
        int cnt=0,d=0;
        while(code[j]!=' '||j<code.size())
        {
            if(code[j]=='1')
            {
                d+=post_dig[cnt];
                if(d==11)
                    d=0;
            }

            if(code[j]==' ')
                break;
            cnt++;
            j++;

        }
        j++;
        digits[i]=d;
    }
    return digits;
}
void Zipcode::set_zipcode(string s)
{
    this->m_zip=s;
}
void Zipcode::print_barcode(std::ostream&sout/*=std::cout*/)
{
    array<int,5>arr=get_digits();
    for(int i=0;i<5;i++)
        sout<<arr[i]<<" ";
}
int main()
{
    Zipcode z("10110010001001010110011000101001");
    string s=z.get_string();
    cout<<s<<endl;
    z.print_barcode();
}
