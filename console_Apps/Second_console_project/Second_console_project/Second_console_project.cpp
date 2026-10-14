
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main()
{
   //Аритметични оператори 
    int x = 10;
    int y = 3;
    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";

    double a = 10.0;
    double b = 3.0;
    //Инкрементиране и декрементиране
    int x1 = 5;
    ++x1; //увеличава стойноста на x1 с 1 (x1 е 6)
    
    int y1 = 5;
    --y1; // намалява стойността на у със 1 (y1 e 4)
   
    //Пример: преброяване на хора в стая
    int peopleInRoom = 0;
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    cout << peopleInRoom<<"\n";// 3

    //Излиза един човек
    peopleInRoom--;

    //Оператори за присвояване
    int x2 = 10;

    //Комбинирани оператори за присвояване
    x2 += 5;//еквивалентно на x2= x2+5
    cout << x2 << "\n";//50

    int x3 = 5;
    int y3 = 3;
    cout << (x3 > y3);// Връща 1 (true), защото 5 е по-голямо

    int age = 18;
    cout << (age >= 18) << "\n";//1(true) Може да гласува
    cout << (age < 18) << "\n";//0(false) Не може да гласува
      
    //Приоритет на операторите
    int result1 = 2 + 3 * 4;//14
    int result2 = (2 + 3) * 4;//24
    int result3 = 10 - 2 + 5;//13
    int result4 = 10 - (2 + 5);//3

    //Работа с низове
    string greeting = "Hello and welcome";
    cout << greeting << "\n";

    //Конкатенация на низове
    string firstName = "John";
    string secondName = "Doe";

    string fullName = firstName + secondName;
    cout << fullName << "\n";

    //Добавяне към низ (метод append)
    string fullName2 = firstName.append(secondName);
    cout << fullName2 << "\n";

    //Свързване на низове с числа 
    string x4 = "10";
    string y4 = "15";
    string z4 = x4 + y4;//z = "1015"

    //Дължина на низове
    string txt = "ASDNASHKDASD";
    cout << txt.length() << "\n";// 10
    
    //Достъп до символите на низ 
    string myString = "Hello";
    cout << myString[0];//'H'
    
    cout << myString[myString.length() - 1] << "\n";// o 

    //Промяна на символи в низове
    myString[0] = 'J';
    cout << myString.at(1) << "\n"; // e
    
    //Специални символи ("" '' \)
    string txt1 = "Днес изучаваме \"C++\" в университета";
    string txt2 = "It\'s alright";
    string txt3 = "Символът \\ се нарича обранта наклонена черта";

    // \n - въвеждане на нов ред
    // \t - въвеждане на табулация

    //Въвеждане на низове от потребителя
    string fName;
    cout << "Въведете вашето име:";
    cin >> fName;
    
    cout << "Вашето име е: " << fName;

    //Пространство от имена в C++ за работа с низове
    //using namespace std може да липсва, като вместо него
    //пред имената на string и cout се постави префиксът
    //std::, където :: е операторът за разрешаване на обхват
    std::string fName1 = "John Doe";
    std::cout << fName1;

    //Математически функции 
    cout max(10, 5) <<"\n";
    cout min(10, 5) << "\n";
    cout << sqrt(64) << "\n";
    cout << round(2.6) << "\n";
    cout << log(2) << "\n";

    //Условни конструкции if....else 
    if (20 > 18) {
        cout << "20 е по-голямо от 18";
    }
    int x5 = 20;
    int y5 = 18;

    if (x5 > y5) {
        cout << "x5 е по-голямо от y5";
    }

    //използване на булева променлива 
    bool isGreater = x5 > y5;

    if isgreater {
        cout << "x5 е по-голямо от y5";
    }

    //Конструкция else 
    int time = 20;

    if (time < 18) {
        cout << "Добър ден";
    }
    else {
        cout << "Добър вечер";
    }
    //Извежда Добър вечер

    //Използване на булева функция

    bool isDay = time < 18;

    if isDay {
        cout << "Добър ден";
    }
    else {
        cout << "Добър вечер";
    }

    //Конструкция else if 
    int time1 = 16;

    if (time1 < 12) {                                           //условие 1
        cout << "Добро утро";
    }
    else if (time < 18) {                                       //условие 2
        cout << "Добър ден";
    }
    else {
        cout << "Добър вечер";
    }

    //Използване на булева променлива 
    bool isMorning = time1 < 12
    bool isDay = time1 < 18;


    if (isMorning) {                                           //условие 1
        cout << "Добро утро";
    }
    else if (isDay) {                                       //условие 2
        cout << "Добър ден";
    }
    else {
        cout << "Добър вечер";
    }

    //Съкратен запис на if..else(тернарен опертор)
    string result5 = (time < 12) ? "Добър утро" :
        (time < 18) ? "Добър вечер" :
        "Добър вечер";
    cout << result5;

    //? означава: Ако условието е вярно, избери стойността
    //след оператора
    //:означава: В противен случай избери стойността след оператора :
    
    //Вложени if конструкции 
    int x6 = 15;
    int y6 = 25;

    if (x6 > 10) {
        cout << "x6 по-голямо от 10";

    }
    //вложена конструкция if 
    if (y6 > 20) {
        cout << "у6 също е по-голямо от 20";

    }

    //Пример: проверка на взаимосвързани условия
    int age1 = 20;
    bool isCitizen = true;
     
    if (age1 >= 18) {
        cout << "Имате необходимата възраст за гласуване\n";
        if (isCitizen) {
            cout << "Вие сте и гражданин на държавата, следователно можете да гласувате\n";
        }
        else {
            cout << "Вие не сте гражданин на държавата, следователно не можете да гласувате\n";
        }
    }
    else {
        cout << "Не сте навършили необходимата възраст за да гласувате";
    }

    //Логическите оператори
    
    //Логическо И §§
    int a1 200;
    int b1 = 33;
    int c1 = 500;
    
    if (a1 > B1 && c1 > a1) {
        cout << "И двете условия са истина";
    }

    //Логическо ИЛИ ||
    if (a1 > B1 || c1 > a1) {
        cout << "Поне едно от условията е истина";
    }

    //Логическо НЕ !=
    if (a1 != b1)
    {
        cout<<"а1 не е равно на b1"
    }



    return 0;

}


