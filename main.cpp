#include <iostream>
#include <string>


int sin(){
    int foo [5] = { 16, 2, 77, 40, 12 };
    // 5 - 3cos2 => 1,3,4,5,6,7,7,8,4,5,5,4,||3,3,2,4,2,2,3,4,4,34,45,44,34,22,||45,44,12,23,
    // beresh s 10 po 20 chisla
    // esli chislo bolshe 4 to pokazaviesh na ekrane


    int n, result=0;
    for ( n=0 ; n<5 ; ++n )
    {
        result += foo[n];

        std::cout << result;
        std::cout << ",";
    }



}

int main() {

    sin();
    return 0;
}
