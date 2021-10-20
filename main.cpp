#include <bits/stdc++.h>

using namespace std;

class Point{
    double x, y;
public:
    Point(double a, double b);
    Point operator+(Point);
    Point operator-(Point);
    int operator*(Point);
    Point operator*(int);
    double operator&(Point);
    double operator%(Point);
    double operator|(Point);
    bool operator==(Point);
    bool operator!=(Point);
    friend ostream& operator<<(ostream&, const Point&);
};

Point::Point(double a, double b) {
    x = a;
    y = b;
}

Point Point::operator+(Point a) {
    return Point(x + a.x, y + a.y);
};

Point Point::operator-(Point a) {
    return Point(x - a.x, y - a.y);
};

Point Point::operator*(int a) {
    //cout << x << " " << y << " " << a << " ";
    return Point(x*a, y*a);
}

int Point::operator* (Point a) {
    return int(x*a.x + y*a.y);
}

double Point::operator& (Point a) {
    return int(abs(x*a.x + y*a.y));
}

double Point::operator% (Point a) {
    return double(sqrt((x*a.x)+(y*a.y)));
}

double Point::operator| (Point a) {
    //cout << x << " " << y << " " << a.x << " " << a.y << " ";
    return double(abs((x*a.x + y*a.y)/((sqrt(x*x+y*y))*sqrt(a.x*a.x+a.y*a.y))));
}

bool Point::operator== (Point a) {
    return bool (x == a.x & y == a.y);
}

bool Point::operator!= (Point a) {
    return bool (x != a.x & y != a.y);
}

ostream& operator<< (ostream &out, const Point& a) {
    return out << a.x << " ; " << a.y << "\n";
}

int main() {
    double x, y, x_2, y_2, k;
    int type;
    cout << "Enter coordinates of vectors:" << "\n";
    cin >> x >> y >> x_2 >> y_2;
    Point m(x, y);
    Point n(x_2, y_2);
    cout << "Write the item number that you need." << "\n";
    cout << "\n";
    cout << "1: Sum of vectors" << "\n";
    cout << "2: Vector difference" << "\n";
    cout << "3: Multiplying a vector by an integer" << "\n";
    cout << "4: Dot product of vectors" << "\n";
    cout << "5: Skew product of vectors" << "\n";
    cout << "6: Vector length" << "\n";
    cout << "7: Angle between vectors" << "\n";
    cout << "8: Comparing vectors" << "\n";
    cout << "\n";
    cin >> type;
    //Op c();
    if (type == 1) {
        cout << "Result: " << m + n << "\n";
    } else if (type == 2) {
        cout << "Result: " << m - n << "\n";
    } else if (type == 3) {
        cout << "Enter an integer:" << "\n";
        cin >> k;
        cout << "Result: " << m * k << " " << n * k << "\n";
    } else if (type == 4) {
        cout << "Result: " << m * n << "\n";
    } else if (type == 5) {
        int mn = m & n;
        cout << "Result: " << mn << "\n";
    } else if (type == 6) {
        cout << "Result: " << m % n << "\n"; //???
    } else if (type == 7) {
        double mn = m | n;
        cout << "Result: " << mn << "\n";
    } else if (type == 8) {
        bool mn = m == n;
        cout << "Result: " << mn << "\n"; //???
    }
    return 0;
}
