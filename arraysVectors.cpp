#include <iostream>
#include <vector>

int *func()
{
    int *a = new int[5];
    return a;
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    int arr[5] = {1, 2, 3, 4, 5}; // array declarado normalmente
    int *arr1 = new int[5];

    int *b = func();

    std::cout << b[0];
    return 0;
}