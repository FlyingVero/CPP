#include <iostream>
#include <algorithm>
#include <string>

void reverse(std::string s)
{
    std::reverse(s.begin(), s.end());
    std::cout << s;
}

int main()
{
    std::string s;
    std::cin >> s;
    reverse(s);

    return 0;
}