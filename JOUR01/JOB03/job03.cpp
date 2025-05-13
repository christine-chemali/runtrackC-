//
#include <iostream>
int main() {
    int n;
    std::cout<<"Enter number of times you want to display Hello World (0 to quit): ";
    std::cin>>n;
    while (n!=0) {
        for (int i=1; i<=n; i++) {
            std::cout<<"Hello World!"<<std::endl;
        }
        std::cout<<"Enter the number of time you want to display 'Hello World' (0 to quit): ";
        std::cin>>n;
    }
    std::cout<<"That's all folks!"<<std::endl;
    return 0;
}
//cin is the short of character input or console input
//std::cin represent the entry flux used with the extract >>
//to read the different type values like int float char...from the standard entry (the keyboard)
// Created by chris on 13/05/2025.
//
