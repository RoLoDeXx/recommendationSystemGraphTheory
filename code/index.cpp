#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int V = 4;
vector<string> names;

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = {x, y};
    SetConsoleCursorPosition(h, c);
}

void intro()
{
    cout << "\n\n\t\t                            ./+o/-\n";
    cout << "\t\t  .--.                     +ooooo\n";
    cout << "\t\t :oooo+                  ``./+++-    \n";
    cout << "\t\t :oooo+````     .::-````        `        \n";
    cout << "\t\t  .-:.       ``-/////`          ``           \n";
    cout << "\t\t    `          `:///-            `               \n";
    cout << "\t\t     `           `.              `---.            \n";
    cout << "\t\t     .``          `              :////:           \n";
    cout << "\t\t   `:///:          `            `-////.       ..  \n";
    cout << "\t\t   -/////`         `         ```   ``       :oooo:\n";
    cout << "\t\t    .---` ````     .`    ```                +oooo+\n";
    cout << "\t\t     `        ```.:///-`                   ``://:`\n";
    cout << "\t\t    `            -/////`                ``        \n";
    cout << "\t\t    `             ----`   `````` `-//:-`          \n";
    cout << "\t\t-::-             `   `          -/////.          \n";
    cout << "\t\t+oooo+           `     ``         -:::.           \n";
    cout << "\t\t:oooo/          ``      ``        `               \n";
    cout << "\t\t `..`           `         `     ``                \n";
    cout << "\t\t               `           ``...`                 \n";
    cout << "\t\t           ./+++-          :oooo/                 \n";
    cout << "\t\t           +ooooo`         /oooo+                 \n";
    cout << "\t\t           ./+o+-           -::-`                 \n";
    Sleep(1000);

    gotoxy(80, 5);
    cout << "USER RECOMMENDATION SYSTEM";
    Sleep(1000);
    gotoxy(80, 7);
    cout << "  Using Graph Coloring";
    Sleep(1000);
    gotoxy(80, 12);
    cout << "        Made By:-";
    Sleep(500);
    gotoxy(80, 15);
    cout << "Samarth Sharma ";
    Sleep(500);

    gotoxy(40, 25);
    system("pause");
    system("cls");
}

void printSolution(int color[]);

int isSafe(int v, int graph[20][20], int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return 0;
    return 1;
}

int graphColoringUtil(int graph[20][20], int m, int color[], int v)
{
    if (v == V)
        return 1;

    for (int c = 1; c <= m; c++)
    {
        if (isSafe(v, graph, color, c))
        {
            color[v] = c;
            if (graphColoringUtil(graph, m, color, v + 1) == 1)
                return 1;
            color[v] = 0;
        }
    }

    return 0;
}

int graphColoring(int graph[20][20], int m)
{
    int *color = new int[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;

    if (graphColoringUtil(graph, m, color, 0) == 0)
    {
        printf("Solution does not exist");
        return 0;
    }

    printSolution(color);
    return 1;
}

void printSolution(int color[])
{
    system("cls");
    gotoxy(40, 10);
    cout << "The recommendation Pattern is\n";
    vector<string> color1;
    vector<string> color2;
    vector<string> color3;
    vector<string> color4;
    vector<string> color5;
    for (int i = 0; i < V; i++)
        switch (color[i])
        {
        case 1:
            color1.push_back(names[i]);
            break;
        case 2:
            color2.push_back(names[i]);
            break;
        case 3:
            color3.push_back(names[i]);
            break;
        case 4:
            color4.push_back(names[i]);
            break;
        }
    Sleep(4000);
    system("cls");
    gotoxy(40, 10);
    int spacer = 1;
    //cout << names[i] << " belongs to category " << color[i] << endl;
    cout << "Recommendation cluster 1 contains";
    for (auto &i : color1)
    {
        gotoxy(40, 10 + spacer);
        cout << i << endl;
        spacer++;
    }

    spacer = 1;
    Sleep(4000);
    system("cls");

    if (color2.size())
    {
        gotoxy(40, 10);
        cout << "Recommendation cluster 2 contains";
        for (auto &i : color2)
        {
            gotoxy(40, 10 + spacer);
            cout << i << endl;
            spacer++;
        }
    }

    spacer = 1;
    Sleep(4000);
    system("cls");

    if (color3.size())
    {
        gotoxy(40, 10);
        cout << "Recommendation cluster 3 contains";
        for (auto &i : color3)
        {
            gotoxy(40, 10 + spacer);
            cout << i << endl;
            spacer++;
        }
    }

    spacer = 1;
    Sleep(4000);
    system("cls");

    if (color4.size())
    {
        gotoxy(40, 10);
        cout << "Recommendation cluster 4 contains";
        for (auto &i : color4)
        {
            gotoxy(40, 10 + spacer);
            cout << i << endl;
            spacer++;
        }
    }
}

void displayMat(int graph[20][20])
{

    for (int i = 0; i < V; i++)
    {
        gotoxy(40, 14 + i);
        for (int j = 0; j < V; j++)
            cout << graph[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    intro();
    int graph[20][20] = {0};
    int m = 5;
    int friends;
    gotoxy(40, 10);
    cout << "Enter the size of cluster group\n";
    gotoxy(40, 11);
    cin >> friends;
    V = friends;
    system("cls");

    for (int i = 0; i < V; i++)
    {
        gotoxy(40, 10);
        cout << "Enter name of SUBSET " << i + 1 << "\n";
        string temp;
        gotoxy(40, 11);
        cin >> temp;
        system("cls");
        names.push_back(temp);
    }
    displayMat(graph);
    while (friends--)
    {
        gotoxy(40, 10);
        cout << "Enter the relations!\n";
        gotoxy(40, 11);
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        graph[x][y] = graph[y][x] = 1;
        system("cls");
        displayMat(graph);
    }

    getchar();
    system("cls");
    graphColoring(graph, m);
    return 0;
}
