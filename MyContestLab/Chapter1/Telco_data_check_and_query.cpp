#include <bits/stdc++.h>
using namespace std;
int check_phone_number(vector<string> v);
int number_calls_from(vector<string> v, string calls_from);
int number_total_calls(vector<string> v);
int count_time_calls_from(vector<string> v, string phone_number);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    vector<string> v;
    string checkquery, str;
    while (true)
    {
        getline(cin, str);
        if (!str.compare("#"))
            break;
        v.push_back(str);
    }

    while (true)
    {
        cin >> checkquery;
        if (!checkquery.compare("#"))
        {
            break;
        }
        if (!checkquery.compare("?check_phone_number"))
        {
            cout << check_phone_number(v) << endl;
        }
        if (!checkquery.compare("?number_calls_from"))
        {
            string phone_number;
            cin >> phone_number;
            cout << number_calls_from(v, phone_number) << endl;
        }
        if (!checkquery.compare("?number_total_calls"))
        {
            cout << number_total_calls(v) << endl;
        }
        if (!checkquery.compare("?count_time_calls_from"))
        {
            string phone_number;
            cin >> phone_number;
            cout << count_time_calls_from(v, phone_number) << endl;
        }
    }
    return 0;
}

int check_phone_number(vector<string> v)
{
    vector<string> phone_number;
    for (string s : v)
    {
        stringstream ss(s);
        string call, phone_number1, phone_number2;
        ss >> call;
        ss >> phone_number1;
        ss >> phone_number2;
        phone_number.push_back(phone_number1);
        phone_number.push_back(phone_number2);
    }

    for (string s : phone_number)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 48 || s[i] > 57)
                return 0;
        }
    }

    return 1;
}

int number_calls_from(vector<string> v, string calls_from)
{
    map<string, int> mp;
    string call, call_from;
    for (string s : v)
    {
        stringstream ss(s);
        ss >> call;
        ss >> call_from;
        mp[call_from]++;
    }
    map<string, int>::iterator it = mp.find(calls_from);
    if (it == mp.end())
    {
        return 0;
    }
    else
    {
        return (*it).second;
    }
}

int number_total_calls(vector<string> v)
{
    int count = 0;
    for (string s : v)
    {
        count++;
    }
    return count;
}

int count_time_calls_from(vector<string> v, string phone_number)
{
    multimap<string, pair<string, string>> mp;
    int time = 0;
    for (string s : v)
    {
        string call, from_number, to_number, date, from_time, end_time;
        stringstream ss(s);
        ss >> call;
        ss >> from_number;
        ss >> to_number;
        ss >> date;
        ss >> from_time;
        ss >> end_time;
        mp.insert(make_pair(from_number, make_pair(from_time, end_time)));
    }

    for (pair<string, pair<string, string>> p : mp)
    {
        if (!p.first.compare(phone_number))
        {
            string temp;
            int hhfirst, hhlast, mmfirst, mmlast, ssfirst, sslast;
            // lay time fisrt
            stringstream ss1(p.second.first);
            // Lấy giờ (hours)
            getline(ss1, temp, ':');
            hhfirst = stoi(temp);
            // Lấy phút (minutes)
            getline(ss1, temp, ':');
            mmfirst = stoi(temp);
            // Lấy giây (seconds)
            getline(ss1, temp, ':');
            ssfirst = stoi(temp);

            stringstream ss2(p.second.second);
            // Lấy giờ (hours)
            getline(ss2, temp, ':');
            hhlast = stoi(temp);
            // Lấy phút (minutes)
            getline(ss2, temp, ':');
            mmlast = stoi(temp);
            // Lấy giây (seconds)
            getline(ss2, temp, ':');
            sslast = stoi(temp);

            int s = hhlast * 3600 + mmlast * 60 + sslast - hhfirst * 3600 - mmfirst * 60 - ssfirst;
            time += s;
        }
    }
    return time;
}
