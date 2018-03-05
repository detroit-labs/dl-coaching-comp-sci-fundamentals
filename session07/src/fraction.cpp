class Fraction {
public:
    Fraction(int n = 0, int d = 1) : num(n), denom(d) {
        reduce();
    }
private:
    int num, denom;
    void reduce();
    int gcd(int, int);
};

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
