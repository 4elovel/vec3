#include <iostream>
#include <vector>

using namespace std;

template <class T>
void sequence(vector <T> seq, T target) {

    vector <int> res;

    int buf1=-1;
    int buf2=-1;
    for (size_t i = 0; i < seq.size(); i++)
    {
        if (seq[i] == target && buf1 == -1)
        {
            buf1 = i;
            continue;
        }
        else if (seq[i] == target && buf1 != -1)
        {
            buf2 = i;
            res.push_back(buf2-buf1);
            buf1 = -1;
            buf2 = -1;
        }
    }
        if (res.empty())
        {
            cout << "There is no \"" << target << "\" element in this vector!\n";
            return;
        }
        cout << "distance between each of next \"" << target << "\" elements in vector are ";
        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
}

int main()
{
    vector <char> seq = {      'X','W','O','T','Z','Y','Q','V','U','T','Z','Y','X','W','O','T','Z','Y','Q','V','U','T','S',
                               'X','W','V','N','Z','Y','X','P','U','T','Z','R','W','V','U','M','Y','X','W','O','T','Z','Y',
                               'Q','V','U','T','S','X','W','V','N','Z','Y','X','P','U','T','Z','R','W','V','U','M','Y','X',
                               'W','O','T','Z','Y','Q','V','U','T','S','X','W','V','N','Z','Y','X','P','U','T','Z' };
    
    sequence(seq, 'X');
}

