int fib(int n)
{
    if(n < 3)
        return 1;
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n = 0;
    std::cout << "Vvedite chislo do kakogo:\n> ";
    std::cin  >> n;

    std::cout << "Otvet: " << fib(n);
    return 0;
    system("pause");
}
