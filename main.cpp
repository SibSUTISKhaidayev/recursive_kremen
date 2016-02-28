#include <iostream>

using namespace std;

template<typename T>
T factorial(T n = 0){
    T fact = 1;

    if( n == 0 )
        return 1;

    if (n > 1) {
        fact *= n * factorial(n-1);//recursive property
    }

    return fact;
}

int main()
{




    cout << "Hello World!" << factorial(5) << endl;
    return 0;
}

