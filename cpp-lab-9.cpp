#include <iostream>

using namespace std;

class Num
{

};

template <typename T>
float Function(T* massive, int n, string type)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (type != "float" && type != "double")
            sum += (int)massive[i];
        else
            sum += massive[i];
    }
    return sum;
}

int main()
{
    int massiv1[] = {1, 2, 3};
    char massiv2[] = "sdfsdf";
    Num* massiv3[] = { new Num() };
    float massiv4[] = { 1.2, 3.4 };
    cout << Function(massiv4, 2, "float");
    
    delete massiv3[0];
}