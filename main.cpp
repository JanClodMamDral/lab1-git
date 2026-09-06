//Лабораторная работа № 1. Вариант 20.
//Выполнил Лавриненко А.П. , группа ПИ-54.
#include <iostream>
using namespace std;

//===== Расчётные функции варианта =====

//Объём пирамиды с квадратным основанием
double pyramidVolume(double a, double h){
    return a*a*h/3;
}

//Высота боковой грани
double pyramidApothem(double a, double h){
    return sqrt(h*h+(a/2)*(a/2));
}

// ===== Главная функция: меню =====

int main(){
    system("chcp 65001");
    int choice;
    double a, h;
    
    do{

        cout<< "\n=== Вариант 20: расчёты для пирамиды с квадратным основанием ===\n";

        cout<< "1. Объём пирамиды\n";
        cout<< "2. Высота боковой грани\n";
        cout<< "0. Выход\n";
        cout<< "Выберите пункт: ";
        cin>> choice;

        switch(choice){
            case 1:
            do{
                cout<<"Введите a и h в метрах: ";
                cin>>a>>h;
            } while(a<0||h<0);
            cout<<"Объем в метрах кубических = " << pyramidVolume(a,h)<<"\n";
            break;

            case 2:
            do{
                cout<<"Введите a и h в метрах: ";
                cin>>a>>h;
            } while(a<0||h<0);
            cout<<"Высота боковой грани в метрах = " << pyramidApothem(a,h)<<"\n";
            break;

            case 0:
            cout<<"Работа завершена\n";
            break;

            default:
            cout << "Такого пункта нет.\n";
        }
    }while(choice!=0);

    return 0;
}