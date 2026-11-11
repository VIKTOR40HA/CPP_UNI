
#include<Windows.h>
#include<string>
#include <iostream>

using namespace std;


struct Person1
{
    string name;
    int age;
};

//линейно търсене в статичен масив с елементи от тип структура по име
bool linearSearchByName(const Person1 arr[], int size, const string& nameToFind) {
    for (int i = 0;i < size;i++) {
        if (arr[i].name == nameToFind) {
            return true;
        }
    }return false;
}
struct trapec
{
    float AB;
    float CD;
    float height;
};

//Подпрограма за въвеждане на данните за трапеца
void inputTrapecData(trapec& Trapec)
{
    cout << "Въведете първата основа: ";
    cin >> Trapec.AB;
    cout << "Въведете втората основа: ";
    cin >> Trapec.CD;
    cout << "Въведете височината: ";
    cin >> Trapec.height;

}
//Подпрограма за изчисляване на лицето на трапеца
double calculateArea(const trapec& Trapec)
{
    double area = (((Trapec.AB + Trapec.CD) * Trapec.height)/2);
    return area;
}
struct Person
{
    string firstName;
    string lastName;
    int age;
};
//Създаване на структура с 3 стойности
struct Student
{
    string name;
    int facultyNumber;
    float avarageGrade;
};

//деклариране на променлива от тип Student
Student s1;

//Структура като тип параметур на функция
//струйтурите могат да се предават на функции по стойност или по адрес/референция §
void printStudent(const Student& st) {

    cout << st.name << "(" << st.facultyNumber << ") -" << st.avarageGrade << "\n";

}

//Задача 4. Сортирайте създадения масив от хора в задача 3 по възходящ ред по отнопение на възрастта.
void BubbleSort(Person1 arr[], int size) {

    for (int i = 0;i < size - 1;i++)
    {
        for (int j = 0;j < size - i - 1;j++) {
            if (arr[j].age > arr[j + 1].age) {
                //Размяна на двата елемента
                Person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    //Достъп до членовете на структурата
    s1.name = "Анна Петрова";
    s1.facultyNumber = 10001;
    s1.avarageGrade = 5.50;

    //Въвеждане и извеждане на структурата
    Student st;
    cout << "Въведете име: ";
    getline(cin, st.name);
    cout << "Факултетен номер: ";
    cin >> st.facultyNumber;
    cout << "Среден успех: ";
    cin >> st.avarageGrade;


    //Масив от структури 
    Student group[30];//масив от  30 студента

    group[0].name = "Георги Иванов";
    group[0].facultyNumber = 10001;
    group[0].avarageGrade = 4.25;

    /*Задача 1 Декларирайте структура с име 'Person', която да представлява информация за давама човека.Структурата трябва да
    съдържа следните член-променливи:
        -firstName (символен низ) - за първо име на човека
        -lastName (символен низ) - за фамилия на човека
        -age (цяло число) - за възрастта на човека

    */

    Person person1, person2;

    person1.firstName = "Georgi";
    person1.lastName = "Georgiev";
    person1.age = 35;

    person2.firstName = "Ivan";
    person2.lastName = "Ivanov";
    person2.age = 20;

    //Извеждаме информацията за двама души
    cout << "Първи човек: " << person1.firstName << " " << person1.lastName << ", възраст: " << person1.age << "\n";
    cout << "Втори човек: " << person2.firstName << " " << person2.lastName << ", възраст: " << person2.age << "\n";


    /*Задача 2 Създайте структура, която описва трапец ABCD с член-променливи дължините на двете основи (AB и CD) и височината на
      трапеца. При въведени от потребитекя входни данни за член-променливите, намерете лицето на успоредника
    */

    trapec trapec1;

    inputTrapecData(trapec1);

    double area = calculateArea(trapec1);

    cout << "Площта на трапеца е: " << area << "\n";


    //Статичен масив с елементи от пит структура 

    //Дефинираме и инициализираме статичен масив от тип Point с 3 елемента

    struct Point
    {
        int x;
        int y;
    };

    //Дефинираме и инициализираме статичен масив от тип Point с 3 елемента 
    Point points[3];

    //Въвеждаме координатите на точките от потребителя
    for (int i = 0;i < 3;i++)
    {
        cout << "Въведете координати на точка " << i + 1 << "\n";
        cin >> points[i].x;
        cin >> points[i].y;

        //Извеждаме въведените точки на екрана 
        cout << "Въведените точки са:\n";
        for (int i = 0;i < 3;i++)
        {
            cout << "Точка " << i + 1 << ": x" << points[i].x << ", y =" << points[i].y << "\n";
        }

    }

    /*Задача 3. Създайте структура 'Person1', която представлява обект(човек), съставен от две членпроменливи - name (име на човека)
    * и age извършете търсене в статичен масив от обекти от типа Person1, за да проверите дали дадено име съществува в масива.*/

    const int SIZE = 5;
    Person1 people[SIZE] = {
        {"Иван",25},
        {"Мария",30},
        {"Петър",20},
        {"Елена",28},
        {"Георги",22}

    };

    //Търсиме конкретното име на статичния масив
    string nameToFind = "Петър";
    bool found = linearSearchByName(people, SIZE, nameToFind);
    if (found) {
        cout << "Името" << nameToFind << " е намерено в статичния масив" << "\n";

    }
    else {
        cout << "Името" << nameToFind << " не  е намерено в статичния масив" << "\n";
    }

    BubbleSort(people, SIZE);
    return 0;
}


