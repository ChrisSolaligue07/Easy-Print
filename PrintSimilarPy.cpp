#include <iostream>

void print(){
    std::cout<< "\n";
}

template<typename T, typename ...Args>
void print(T data, Args... args)
{
    std::cout << data << " ";
    print(args...);
}

int main()
{
    int a = 10;
    int b = 20;
    print("Hello World", 15, 20, 1.5, 1, "null", a, b);
    print();
    print(a + b, "crazy");
    return 0;
}