#include <iostream>
#include <string>
int main()
{
    /*std::string greeting= " what the hell?";
    greeting.replace(greeting.find("hell"), 4 , "****");
    std::cout << greeting<<std::endl;*/
    ////////////////////////////////////////////////////////////////
    std::string greeting = "what is up?";
    //std::cout << greeting.substr(5, 2) << std::endl;
    //std::cout << greeting.find_first_of("asfsd") << std::endl;
    /*std::cout << greeting.find_first_of("!") << std::endl;//nops == -1 , it unsigned long x = -1
    if(greeting.find_first_of("!") == -1)std::cout <<"NOT FOUND!"<<std::endl;*/
    //if(greeting == ("what is up?"))std::cout <<"Equals"<<std::endl;
    if(greeting.compare("what is up?") == 0)std::cout << "Equals"<<std::endl;
    return 0;
}