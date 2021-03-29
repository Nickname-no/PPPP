// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


string root() {
    string str;
    int array[64][6] = {
        {0,0,0,0,0,0},
        {0,0,0,0,0,1},
        {0,0,0,0,1,0},
        {0,0,0,0,1,1},
        {0,0,0,1,0,0},
        {0,0,0,1,0,1},
        {0,0,0,1,1,0},
        {0,0,0,1,1,1},
        {0,0,1,0,0,0},
        {0,0,1,0,0,1},
        {0,0,1,0,1,0},
        {0,0,1,0,1,1},
        {0,0,1,1,0,0},
        {0,0,1,1,0,1},
        {0,0,1,1,1,0},
        {0,0,1,1,1,1},
        {0,1,0,0,0,0},
        {0,1,0,0,0,1},
        {0,1,0,0,1,0},
        {0,1,0,0,1,1},
        {0,1,0,1,0,0},
        {0,1,0,1,0,1},
        {0,1,0,1,1,0},
        {0,1,0,1,1,1},
        {0,1,1,0,0,0},
        {0,1,1,0,0,1},
        {0,1,1,0,1,0},
        {0,1,1,0,1,1},
        {0,1,1,1,0,0},
        {0,1,1,1,0,1},
        {0,1,1,1,1,0},
        {0,1,1,1,1,1},
        {1,0,0,0,0,0},
        {1,0,0,0,0,1},
        {1,0,0,0,1,0},
        {1,0,0,0,1,1},
        {1,0,0,1,0,0},
        {1,0,0,1,0,1},
        {1,0,0,1,1,0},
        {1,0,0,1,1,1},
        {1,0,1,0,0,0},
        {1,0,1,0,0,1},
        {1,0,1,0,1,0},
        {1,0,1,0,1,1},
        {1,0,1,1,0,0},
        {1,0,1,1,0,1},
        {1,0,1,1,1,0},
        {1,0,1,1,1,1},
        {1,1,0,0,0,0},
        {1,1,0,0,0,1},
        {1,1,0,0,1,0},
        {1,1,0,0,1,1},
        {1,1,0,1,0,0},
        {1,1,0,1,0,1},
        {1,1,0,1,1,0},
        {1,1,0,1,1,1},
        {1,1,1,0,0,0},
        {1,1,1,0,0,1},
        {1,1,1,0,1,0},
        {1,1,1,0,1,1},
        {1,1,1,1,0,0},
        {1,1,1,1,0,1},
        {1,1,1,1,1,0},
        {1,1,1,1,1,1}

    };

    

    /*for (int j = 0; j < 64; j++) {

        if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0))
        {
            str = '5';
        }
        else if ((a * d - c * b != 0) && ((e * d - b * f != 0) || (a * f - c * e != 0)))
        {
            double y = (a * f - c * e) / (a * d - c * b);
            double x = (d * e - b * f) / (d * a - b * c);
            str = "2 " + to_string(x) + ' ' + to_string(y);
        }
        else if (((a * d - c * b == 0) && ((e * d - b * f != 0) || (a * f - c * e != 0))) ||
            (a == 0 && c == 0 && e / b != f / d) ||
            (b == 0 && d == 0 && e / a != f / c) ||
            (a == 0 && b == 0 && c == 0 && d == 0 && (e / f > 0)))
        {
            if (((a == 0 && b == 0 && e == 0 && d != 0 && c == 0) ||
                (c == 0 && d == 0 && f == 0 && b != 0 && a == 0)))
            {
                double y;
                if (b == 0)
                    y = f / d;
                else if (d == 0)
                    y = e / b;
                else if (e == 0 || f == 0)
                    y = 0;
                str = "4 " + to_string(y);
            }
            else if (((a == 0 && b == 0 && e == 0 && c != 0 && d == 0) ||
                (c == 0 && d == 0 && f == 0 && a != 0 && b == 0)))
            {
                double x;
                if (a == 0)
                    x = f / c;
                else if (c == 0)
                    x = e / a;
                else if (e == 0 || f == 0)
                    x = 0;
                str = "3 " + to_string(x);
            }
            else
                str = '0';
        }
        else if (a == 0 && c == 0)
        {
            double y;
            if (e == 0)
                y = f / d;
            else if (f == 0)
                y = e / b;
            else
                y = e / b;
            str = "4" + ' ' + to_string(y);
        }
        else if (b == 0 && d == 0)
        {
            double x;
            if (e == 0)
                x = f / c;
            else if (f == 0)
                x = e / a;
            else
                x = e / a;
            str = "3" + ' ' + to_string(x);
        }
        else if (b == 0 && e == 0)
        {
            double k, n;
            k = -c / d;
            n = f / d;
            str = "1" + ' ' + to_string(k) + ' ' + to_string(n);
        }
        else if (d == 0 && f == 0)
        {
            double k, n;
            k = -a / b;
            n = e / b;
            str = "1" + ' ' + to_string(k) + ' ' + to_string(n);
        }
        else if (a == 0 && e == 0)
        {
            double k, n;
            k = -d / c;
            n = f / c;
            str = "1" + ' ' + to_string(k) + ' ' + to_string(n);
        }
        else if (c == 0 && f == 0)
        {
            double k, n;
            k = -b / a;
            n = e / a;
            str = "1" + ' ' + to_string(k) + ' ' + to_string(n);
        }
        else if ((a / b == c / d))
        {
            double k, n;
            k = -c / d;
            n = f / d;
            str = "1" + ' ' + to_string(k) + ' ' + to_string(n);
        }
        else
        {
            str = "Are you kidding me?";
        }*/
        return str;
    
}

string root_equation(double a, double b, double c, double d, double e, double f) {
    string str;
    /*if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0))
    {
        str = "1 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if ((a * d - c * b != 0) && ((e * d - b * f != 0) || (a * f - c * e != 0)))
    {
        double y = (a * f - c * e) / (a * d - c * b);
        double x = (d * e - b * f) / (d * a - b * c);
        str = "2 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if (((a * d - c * b == 0) && ((e * d - b * f != 0) || (a * f - c * e != 0))) ||
        (a == 0 && c == 0 && e / b != f / d) ||
        (b == 0 && d == 0 && e / a != f / c) ||
        (a == 0 && b == 0 && c == 0 && d == 0 && (e / f > 0)))
    {
        if (((a == 0 && b == 0 && e == 0 && d != 0 && c == 0) ||
            (c == 0 && d == 0 && f == 0 && b != 0 && a == 0)))
        {
            double y;
            if (b == 0)
                str = "3 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
            else if (d == 0)
                str = "4 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
            else if (e == 0 || f == 0)
                str = "5 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        }
        else if (((a == 0 && b == 0 && e == 0 && c != 0 && d == 0) ||
            (c == 0 && d == 0 && f == 0 && a != 0 && b == 0)))
        {
            double x;
            if (a == 0)
                str = "6 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
            else if (c == 0)
                str = "7 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
            else if (e == 0 || f == 0)
                str = "8 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
            
        }
        else
            str = "9 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if (a == 0 && c == 0)
    {
        double y;
        if (e == 0)
            str = "10 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        else if (f == 0)
            str = "11 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        else
            str = "12 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        
    }
    else if (b == 0 && d == 0)
    {
        double x;
        if (e == 0)
            str = "13 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        else if (f == 0)
            str = "14 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        else
            str = "15 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
        
    }
    else if (b == 0 && e == 0)
    {
        double k, n;
        k = -c / d;
        n = f / d;
        str = "16 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if (d == 0 && f == 0)
    {
        double k, n;
        k = -a / b;
        n = e / b;
        str = "17 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if (a == 0 && e == 0)
    {
        double k, n;
        k = -d / c;
        n = f / c;
        str = "18 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if (c == 0 && f == 0)
    {
        double k, n;
        k = -b / a;
        n = e / a;
        str = "19 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else if ((a / b == c / d))
    {
        double k, n;
        k = -c / d;
        n = f / d;
        str = "20 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }
    else
    {
    str = "21 " + to_string(int(a)) + ", " + to_string(int(b)) + ", " + to_string(int(c)) + ", " + to_string(int(d)) + ", " + to_string(int(e)) + ", " + to_string(int(f));
    }*/
    

        if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0))
        {
            str = '5';
        }
        else if ((a * d - c * b != 0) && ((e * d - b * f != 0) || (a * f - c * e != 0)))
        {
            double y = (a * f - c * e) / (a * d - c * b);
            double x = (d * e - b * f) / (d * a - b * c);
            str = "2 " + to_string(x) + ' ' + to_string(y);
        }
        else if (((a * d - c * b == 0) && ((e * d - b * f != 0) || (a * f - c * e != 0))) ||
            (a == 0 && c == 0 && e / b != f / d) ||
            (b == 0 && d == 0 && e / a != f / c) ||
            (a == 0 && b == 0 && c == 0 && d == 0 && (e / f > 0)))
        {
            if (((a == 0 && b == 0 && e == 0 && d != 0 && c == 0) ||
                (c == 0 && d == 0 && f == 0 && b != 0 && a == 0)))
            {
                double y;
                if (b == 0)
                    y = f / d;
                else if (d == 0)
                    y = e / b;
                else if (e == 0 || f == 0)
                    y = 0;
                str = "4 " + to_string(y);
            }
            else if (((a == 0 && b == 0 && e == 0 && c != 0 && d == 0) ||
                (c == 0 && d == 0 && f == 0 && a != 0 && b == 0)))
            {
                double x;
                if (a == 0)
                    x = f / c;
                else if (c == 0)
                    x = e / a;
                else if (e == 0 || f == 0)
                    x = 0;
                str = "3 " + to_string(x);
            }
            else
                str = '0';
        }
        else if (a == 0 && c == 0)
        {
            double y;
            if (e == 0)
                y = f / d;
            else if (f == 0)
                y = e / b;
            else
                y = e / b;
            str = "4 " + to_string(y);
        }
        else if (b == 0 && d == 0)
        {
            double x;
            if (e == 0)
                x = f / c;
            else if (f == 0)
                x = e / a;
            else
                x = e / a;
            str = "3 " + to_string(x);
        }
        else if (b == 0 && e == 0)
        {
            double k, n;
            k = -c / d;
            n = f / d;
            str = "1 " + to_string(k) + ' ' + to_string(n);
        }
        else if (d == 0 && f == 0)
        {
            double k, n;
            k = -a / b;
            n = e / b;
            str = "1 " + to_string(k) + ' ' + to_string(n);
        }
        else if (a == 0 && e == 0)
        {
            double k, n;
            k = -d / c;
            n = f / c;
            str = "1 " + to_string(k) + ' ' + to_string(n);
        }
        else if (c == 0 && f == 0)
        {
            double k, n;
            k = -b / a;
            n = e / a;
            str = "1 " + to_string(k) + ' ' + to_string(n);
        }
        else if ((a / b == c / d))
        {
            double k, n;
            k = -c / d;
            n = f / d;
            str = "1 " + to_string(k) + ' ' + to_string(n);
        }
        else
        {
            str = "Are you kidding me?";
        }
    

    
    return str; 
}


int main()
{
    
    
     cout << root_equation(0, 0, 0, 0, 0, 0);
    
   
    
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
