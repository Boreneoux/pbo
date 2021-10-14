#include <iostream>

using namespace std;

class umurGuesser
{
private:
    int a, b;

public:
    void assign(int thnlahir, int thnsekarang)
    {
        a = thnlahir;
        b = thnsekarang;
    }
    int usia()
    {
        return b - a;
    }
};

int main()
{
    umurGuesser obj;
    obj.assign(1990, 2021);
    cout << "Berarti Usia Kalian sekarang adalah " << obj.usia() << " Tahun" << endl;
    return 0;
}