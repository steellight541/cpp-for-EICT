#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 12;
    int y = 34;

    int z = (x + y);
    return 0;
}

void square(int a)
{
    int square = a * a;
}

void time24h(int hours)
{
    int time = hours%24;
}
