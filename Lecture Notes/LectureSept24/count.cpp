#include (iostream)

void coiunt_calls()
{
    static int counter = 0;
    
    std::cout << "count_calls called " << ++counter << "times.\n";
    
}

int main()
{
    for (int i = 0; i < 10; ++i) {
        count_calls();
    }
    return 0;
}
