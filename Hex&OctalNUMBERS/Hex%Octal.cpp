#include<iostream>
#include<string>
int main()
{
    int number = 30; //thirty
    int hex = 0x30;//fourty eight
    int octal = 030;//twenty four
    std::cout << number << std::endl;
    std::cout << std::hex<<number << std::endl;
    std::cout << std::oct << number << std::endl;
    return 0;
}