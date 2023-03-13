#include "Header.h"
#include <ctime>
#include <iostream>
void filling(struct student*& a, int n)
{
    int random1, random2, random3;
    for (int i = 0; i < n; i++)
    {
        random2 = 10000 + rand() % (20000 - 10000 + 1);
        a[i].id = random2;
        random1 = rand() % (100 - 30 + 1) + 30;
        a[i].matan = random1;
        random1 = rand() % (100 - 30 + 1) + 30;
        a[i].russ = random1;
        random1 = rand() % (100 - 30 + 1) + 30;
        a[i].phys = random1;
        random1 = rand() % (100 - 30 + 1) + 30;
        a[i].infa = random1;
        random3 = rand() % 2;
        a[i].gto = random3;
        random3 = rand() % 2;
        a[i].att = random3;
    }
}
void print(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].infa_phys == a[i].infa)
        std::cout << a[i].id << '|' << a[i].russ << ' ' << a[i].matan << ' '
            << a[i].infa << ' ' << a[i].phys << "| ÃÒÎ: " << a[i].gto <<
            " ÀÒÒ: " << a[i].att << '|' << a[i].summa() << '\n';
        else std::cout << a[i].id << '|' << a[i].russ << ' ' << a[i].matan << ' '
            << a[i].phys << ' ' << a[i].infa << "| ÃÒÎ: " << a[i].gto <<
            " ÀÒÒ: " << a[i].att << '|' << a[i].summa() << '\n';
    }
    std::cout << '\n';
}
void sort_phys_infa(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].phys < a[i].infa)
        {
            a[i].infa_phys = a[i].infa;
        }
        else a[i].infa_phys = a[i].phys;
    }
}
void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}
void swap(bool& a, bool& b)
{
    bool c = a;
    a = b;
    b = c;
}
void swap(struct student &a, struct student &b)
{
    student c = a;
    a = b;
    b = c;
}
void amm_sort(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        //russ >45 matan >43 phys >39 infa >42
        if ((a[i].summa() >= 240) && (a[i].russ > 45) && (a[i].matan > 43) && (a[i].phys > 39) && a[i].infa_phys == a[i].phys)
        {
            a[i].amm = 1;
        }
        else if ((a[i].summa() >= 240) && (a[i].russ > 45) && (a[i].matan > 43) && (a[i].infa > 42) && a[i].infa_phys == a[i].infa)
        {
            a[i].amm = 1;
        }
        else
        {
            a[i].amm = 0;
        }
    }
}

void sort1(struct student*&a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j].amm < a[j + 1].amm)
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
void sort2(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j].summa() < a[j + 1].summa() && a[j].amm == a[j+1].amm)
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
void sort3(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j].matan < a[j + 1].matan && a[j].summa() == a[j + 1].summa() && a[j].amm == a[j + 1].amm)
            {
                a[j].swap = 1;
                a[j + 1].swap = 1;
                swap(a[j], a[j + 1]);

            }
        }
    }
}
void sorta(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].infa < a[i].phys) swap(a[i].infa, a[i].phys);
    }
}
void sort4(struct student*& a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j].matan == a[j + 1].matan && a[j].summa() == a[j + 1].summa() && a[j].amm == a[j + 1].amm && a[j].infa < a[j+1].infa)
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
void print_final(struct student*& a, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        counter++;
        if (a[i].amm) {
            std::cout << counter << ')' << a[i].id << '|' << a[i].russ << ' ' << a[i].matan << ' '
                << a[i].infa << ' ' << a[i].phys << "| ÃÒÎ: " << a[i].gto <<
                " ÀÒÒ: " << a[i].att << '|' << a[i].summa() << "ÏÌÌ" << '\n';

        }
        else break;
    }
    std::cout << "\n=================\n";
}