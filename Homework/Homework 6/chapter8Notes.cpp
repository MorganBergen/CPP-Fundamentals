#include <iostream>
#include <array>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <string>

//Simple C++ program to encrypt and decrypt a string

#include <iostream>

int main()
{
    int i, x;
    char str[100];

    std::cout << "Please enter a string:\t";
    std::cin >> str;

    std::cout << "\nPlease choose following options:\n";
    std::cout << "1 = Encrypt the string.\n";
    std::cout << "2 = Decrypt the string.\n";
    std::cin >> x;

   //using switch case statements
   switch(x)
   {
       //first case for encrypting a string
       case 1:
           for(i = 0; (i < 100 && str[i] != '\0'); i++)
           str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

           std::cout << "\nEncrypted string: " << str << std::endl;
           break;

      //second case for decrypting a string
       case 2:
           for(i = 0; (i < 100 && str[i] != '\0'); i++)
           str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

           std::cout << "\nDecrypted string: " << str << std::endl;
           break;

       default:
           std::cout << "\nInvalid Input !!!\n";
   }
    return 0;
}






















/*
 String Notes
 char a[80];
 std::cout << "Enter some input:\n";
 std::cin.getline(a, 80);
 std::cout << a << " End of output\n";
 
 char short_string[5];
 std::cout << "Enter some input:\n";
 std::cin.getline(short_string, 5);
 std::cout << short_string << " End of Output\n";
 
 std::string phrase;
 std::string adjective = "fried";
 std::string noun = "ants";
 std::string wish = "Bon appetit!";
 
 phrase = "I love " + adjective + " " + noun + "!";
 std::cout << phrase << std::endl;
 std::cout << wish << std::endl;
 
 std::string first_name;
 std::string last_name;
 std::string record_name;
 std::string motto = "Your records are our records.";
 
 new_line();
 
 record_name = last_name + ", " + first_name;
 std::cout << "Your name in our records is: ";
 std::cout << record_name << std::endl;
 
 
 
 DECRYPT NAME
 
 int main(){
         
     
     std::string name;
     char ch = 'y';
     
     do{
         std::cout << "Enter name: " << std::endl;
         std::getline(std::cin, name);
         
         std::cout << "initials " << name[0] << " " << name[name.find (" ") + 1] << std::endl;
         std::cout << "Do you want to continue (y or n)" << std::endl;
         std::cin >> ch;
         std::cin.ignore(1, '\n');
     } while (ch == 'y' || ch == 'Y');
     
     return 0;

 }
 
 
 */

