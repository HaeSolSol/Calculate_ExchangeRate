#include <iostream>

int amount;
float kramount;
char unit;
std::string unit_name;
const float USD = 1237.8f, JPY = 9.6707f, EUR = 1330.26f, GBP = 1561.3f;

void question()
{
    std::cout << "금액과 함께 달러(S), 엔(Y), 유로(R), 또는 파운드(P)를 입력하세요." << std::endl;
    std::cin >> amount >> unit;
}

int main()
{
    while (unit != 'S' && unit != 'Y' && unit != 'R' && unit != 'P' && unit != 's' && unit != 'y' && unit != 'r' && unit != 'p')
    {
        question();

        switch (unit)
        {
        case 'S':
        case 's':
            kramount = amount * USD, unit_name = "USD";
            break;
        case 'Y':
        case 'y':
            kramount = amount * JPY, unit_name = "JPY";
            break;
        case 'R':
        case 'r':
            kramount = amount * EUR, unit_name = "EUR";
            break;
        case 'P':
        case 'p':
            kramount = amount * GBP, unit_name = "GBP";
            break;
        default:
            std::cout << "잘못 입력하셨습니다." << std::endl;
            break;
        }
    }

    std::cout << amount << " " << unit_name << "는 " << kramount << "원입니다." << std::endl;
}