#include <iostream>
using namespace std;

class Fraction {
public:
    Fraction(int n = 0, int d = 1) : num(n), denom(d) {
        reduce();
    }
    Fraction operator+(Fraction f);
    Fraction operator+(int n)    {return *this + Fraction(n);}
    Fraction operator+(double d) {return *this + Fraction(d);}
    friend ostream& operator<<(ostream& out, Fraction f);
protected:
    int num, denom;
    void reduce();
    int gcd(int, int);
};

Fraction Fraction::operator+(Fraction f) {
    int new_denom = denom * f.denom;
    int new_num = num * f.denom + f.num * denom;
    return Fraction(new_num, new_denom);
}

ostream& operator<<(ostream& out, Fraction f) {
    return (out << f.num << "/" << f.denom);
}

void Fraction::reduce() {
    int g = 0;
    int n = (num < 0) ? -num : num;

    if (n > denom) {
        g = gcd(n, denom);
    } else {
        g = gcd(denom, n);
    }

    if (g != 0) {
        num /= g;
        denom /= g;
    }
}

int Fraction::gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(void) {
    Fraction f1 = Fraction(3,2);
    Fraction f2 = Fraction(4,3);

    cout << f1 << " plus " << f2 << " is " << f1 + f2 << endl;
    return 0;
}
