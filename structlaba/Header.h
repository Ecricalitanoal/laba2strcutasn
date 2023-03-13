struct student
{
    int id;
    int matan, russ, infa, phys, infa_phys;
    bool gto, att, swap, amm;
    int summa()
    {
        if (gto && att) return matan + russ + infa_phys + 5 + 10;
        if (!gto && att) return matan + russ + infa_phys + 10;
        if (!gto && !att) return matan + russ + infa_phys;
        if (gto && !att) return matan + russ + infa_phys + 5;
    }
};
void filling(struct student*& a, int n);
void print(struct student*& a, int n);
void sort_phys_infa(struct student*& a, int n);
void swap(int& a, int& b);
void swap(bool& a, bool& b);
void amm_sort(struct student*& a, int n);
void print_final(struct student*& a, int n);
void sort3(struct student*& a, int n);
void sort2(struct student*& a, int n);
void sort1(struct student*& a, int n); 
void sort4(struct student*& a, int n);
void sorta(struct student*& a, int n);