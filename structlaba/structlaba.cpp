#include <iostream>
#include <ctime>
#include "Header.h"


using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));
    int n;
    cout << "Количество сдающих ЕГЭ: ";
    cin >> n;
    student* students = new student[n];
    filling(students, n);
    sort_phys_infa(students, n);
    print(students, n);
    std::cout << std::endl;
    amm_sort(students, n);
    sort1(students, n);
    sort2(students, n);
    sort3(students, n);
    sorta(students, n);
    sort4(students, n);
    print_final(students, n);
}