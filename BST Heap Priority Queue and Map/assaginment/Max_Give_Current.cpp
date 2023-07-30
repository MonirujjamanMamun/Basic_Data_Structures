#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cms
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cms> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int roll, marks;
        cin >> roll;
        cin >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            string name;
            cin >> name;
            int roll, marks;
            cin >> roll;
            cin >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (m == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (m == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }

    return 0;
}
