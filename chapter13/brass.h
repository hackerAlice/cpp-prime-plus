// brass.h -- bank account classes

#ifndef BRASS_H_
#define BRASS_H_

// Brass Account Class
class Brass
{
private:
    enum {MAX = 45};
    char fullName[MAX];
    long acctNum;
    double balance;
public:
    Brass(const char *s = "Nullbody", long an = -1, double bal = 0.0);
    void deposit(double amt);
    virtual void withdraw(double amt);
    double showBalance() const;
    virtual void viewAcct() const;
    virtual ~Brass() {}
};

// Brass Plus Account Class
class BrassPlus: public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const char *s = "Nullbody", long an = -1,
        double bal = 0.0, double ml = 500,
        double r = 0.10);

    BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
    virtual void viewAcct() const;
    virtual void withdraw(double amt);
    void resetMax(double m) {maxLoan = m;}
    void resetRate(double r) {rate = r;}
    void resetOwes() {owesBank = 0;}
};

#endif