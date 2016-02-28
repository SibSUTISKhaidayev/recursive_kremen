#include <iostream>
#include <cmath>

using namespace std;

namespace my_space {
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

    double cos(int x = 0, int n = 0){

        double summ = 1;

        if(n > pow(10, -3))//is a problem
            summ += cos(x, n-1);

        summ += pow(-1, n) * ( pow(x, 2 * n) / factorial(2 * n) );

        return summ;
    }
}



int main()
{
    int x = 90;
    double summ = 0;

    summ = my_space::cos(x, 3);
    double cos_std = cos(x);

    cout << "m_cos: " << summ << "\nstd_cos: " << cos_std << endl;

    return 0;
}

