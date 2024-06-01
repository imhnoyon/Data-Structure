#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = parent_idx;
    }
}
void print(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int left_idx = (cur_idx * 2 + 1);
        int right_idx = (cur_idx * 2 + 2);
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }
    print(v);
    delete_heap(v);
    print(v);
    return 0;
}
