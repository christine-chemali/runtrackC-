//
// Created by chris on 14/05/2025.
//Considering the C++ program
/*
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum;
    sum = 0;
    for (i=0; i<4; i++) {
        cout << "Enter an integer: ";
        cin >> n;
        sum += n;
    }
    cout << "sum : " << sum << endl;
    return 0;
}
*/
//write this same program using while
/*
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum;
    sum = 0;
    while (i<4) {
        cout << "Enter an integer: ";
        cin >> n;
        sum += n;
        i++;
    }
    cout << "sum : " << sum << endl;
    return 0;
}
*/
//write this same program using do ... while
#include <iostream>
using namespace std;
int main()
{
    int i=0, n, sum = 0;
   do {
        cout << "Enter an integer: ";
        cin >> n;
        sum +=n;
        i++;
    } while (i < 4);
    cout << "sum : " << sum << endl;
    return 0;
}
