#include <bits/stdc++.h>
using namespace std;
class magicMultiplier
{
    static int i;

public:
    magicMultiplier(int j)
    {
        i = j;
    }
    int get_multiplier()
    {
        return (i = i * 2);
    }
};
int magicMultiplier::i = 0;
int main()
{
    magicMultiplier ml[5] = {0, 4, 1, 3, 2}, *q;
    q = ml;
    cout << q->get_multiplier() << endl;
    q = q + q->get_multiplier();
    cout << q->get_multiplier() << endl;
    return 0;
}
