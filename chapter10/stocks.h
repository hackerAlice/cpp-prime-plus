#ifndef STOCKS_H_
#define STOCKS_H_

class Stock // class declaration
{
private:
    char company[30];
    int shares;
    double total_val;
    double share_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock();
    Stock(const char* co, int n, double pr);
    void acquire(const char* co, int n = 0, double pr = 0.0);
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    double totalval() const {return total_val;}
    void show();
    const Stock & topval(const Stock &s) const;
    ~Stock();
};

#endif