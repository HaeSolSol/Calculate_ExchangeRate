#include <iostream>

int amount;
float kramount;
char unit;
std::string unit_name;
const float USD = 1237.8f, JPY = 9.6707f, EUR = 1330.26f, GBP = 1561.3f;

void question()
{
    std::cout << "�ݾװ� �Բ� �޷�(S), ��(Y), ����(R), �Ǵ� �Ŀ��(P)�� �Է��ϼ���." << std::endl;
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
            std::cout << "�߸� �Է��ϼ̽��ϴ�." << std::endl;
            break;
        }
    }

    std::cout << amount << " " << unit_name << "�� " << kramount << "���Դϴ�." << std::endl;
}