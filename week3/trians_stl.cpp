#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;
int main()
{

    int n, to;
    int from;

    char command;
    // cin >> n;
    scanf("%d", &n);
    list<int> train[100000];

    for (int i = 0; i < n; i++)
    {

        scanf(" %c %d %d", &command, &from, &to);
        switch (command)
        {
        case 'N':
        {
            train[to - 1].push_back(from);
            break;
        }

        case 'M':
        {
            train[to - 1].splice(train[to - 1].end(), train[from - 1]);
            break;
        }

        default:
            break;
        }
        }

    for (int i = 0; i < 100000; i++)
        for (list<int>::iterator itr = train[i].begin(); itr != train[i].end(); itr++)
            printf("%d\n", *itr);
}