// Гордеев Артём 11 И - ДЗ_1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int>  task_1(int num, vector <int> v)
{
    for (int i = 1; i <= num; i++) {
        v.push_back(i);
    }
    cout << "Вывод задания №1:" << endl;
    for (auto s : v) {
        cout << s << " "; 
    }
    cout << endl;
    return v;
}
    
void task_2(vector <int> gege)
{
    reverse(begin(gege), end(gege));
    cout << "Вывод задания №2:" << endl;
    for (auto s : gege) {
        cout << s << " ";
    }
    cout << endl;
}

void task_3(int temp)
{
    switch (temp) {
    case 0: cout << "ноль" << endl; break;
    case 1: cout << "один" << endl; break;
    case 2: cout << "два" << endl; break;
    case 3: cout << "три" << endl; break;
    case 4: cout << "четыре" << endl; break;
    case 5: cout << "пять" << endl; break;
    case 6: cout << "шесть" << endl; break;
    case 7: cout << "семь" << endl; break;
    case 8: cout << "восьма" << endl; break;
    case 9: cout << "девять" << endl; break;
    case 10: cout << "десять" << endl; break;
}
}



int main() 
{
    int num_1;
    int num_2;
    vector <int> arr;
    cin >> num_1;
    arr = task_1(num_1, arr);
    task_2(arr);
    cin >> num_2;
    task_3(num_2);
    return 0;
}
