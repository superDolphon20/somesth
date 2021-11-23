#include <iostream> 

using namespace std;

int main() {

    int result = 0;
    int i = 0;

    while(i < 5){
        result += 2;
        i = ++i + 1;
    }

    cout << result;
}