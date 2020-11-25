#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale (LC_ALL, "russian");
    cout << "Введите А" << endl;
    float number;
    cin >> number;
    int         i;
    int         j;
    int         len;
    const char* num;

    cout << "А в 2 системе счисления по стандарту Float (IEEE754): " << endl;

    len = sizeof(float) - 1;
    num = (char*)&number;
    void bin();
    {
        for (i = len; i >= 0; i--)
            for (j = 7; j >= 0; j--)
                printf("%i", (num[i] >> j) & 1);
        printf("\n");
    }
    void hex_and_oct_and_four();
    {
        string bin;
        string hex;
        string temp;
        string oct;
        string four;
        int w;
        int gc=0;
        int number;
        string hex_tab[] = { "","1", "2", "3", "4", "5", "6", "7", "8", "9",
                            "A", "B", "C", "D", "E", "F" };
        string oct_tab[] = { "","1", "2", "3", "4", "5", "6", "7", "8", "9" };
        string four_tab[] = { "","1", "2", "3" };
        void hex_();
        {
            cout << "Просто скопируй значение IEEE754" << endl;
            cin >> bin;
            w = bin.length();
            ////////////////////////////
            if (w % 4 != 0)
                while (w % 4 != 0)
                {
                    temp = bin;
                    bin = '0';
                    bin += temp;
                    w = bin.length();
                }
            temp = "";
            ///////////////////////////
            cout << "А в 16 системе счисления: " << endl;
            cout << "0x";
            for (w = 0; w < bin.length(); w++)
            {
                temp += bin[w];
                gc++;
                if (gc == 4)
                {
                    number = 8 * (temp[0] - '0') + 4 * (temp[1] - '0') + 2 * (temp[2] - '0') + (temp[3] - '0');
                    hex = hex_tab[number];
                    cout << hex;
                    temp = "";
                    gc = 0;
                }
            }
            temp = "";
            cout << endl;
        }
        void oct_();
        {
            cout << "Просто скопируй значение IEEE754 и добавь 0 в конце" << endl;
            //////////////////////////
            cin >> bin;
            w = bin.length();
            ////////////////////////////
            if (w % 3 != 0)
                while (w % 3 != 0)
                {
                    temp = bin;
                    bin = '0';
                    bin += temp;
                    w = bin.length();
                }
            temp = "";
            ///////////////////////////
            cout << "А в 8 системе счисления: " << endl;
            for (w = 0; w < bin.length(); w++)
            {
                temp += bin[w];
                gc++;
                if (gc == 3)
                {
                    number = 4 * (temp[0] - '0') + 2 * (temp[1] - '0') + (temp[2] - '0');
                    oct = hex_tab[number];
                    cout << oct;
                    temp = "";
                    gc = 0;
                }
            }
            temp = "";
            cout << endl;
        }
        void four_();
        {
            cout << "Просто скопируй значение IEEE754" << endl;
            //////////////////////////
            cin >> bin;
            w = bin.length();
            ////////////////////////////
            if (w % 2 != 0)
                while (w % 2 != 0)
                {
                    temp = bin;
                    bin = '0';
                    bin += temp;
                    w = bin.length();
                }
            temp = "";
            ///////////////////////////
            cout << "А в 4 системе счисления: " << endl;
            for (w = 0; w < bin.length(); w++)
            {
                temp += bin[w];
                gc++;
                if (gc == 2)
                {
                    number =2 * (temp[0] - '0') + (temp[1] - '0');
                    four = four_tab[number];
                    cout << four;
                    temp = "";
                    gc = 0;
                }
            }
        }
    }
}