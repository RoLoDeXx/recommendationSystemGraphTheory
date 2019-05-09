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
    cout << "\n\n\t\t                            ./+o/-\n";Sleep(25);
    cout << "\t\t  .--.                     +ooooo\n";Sleep(25);
    cout << "\t\t :oooo+                  ``./+++-    \n";Sleep(25);
    cout << "\t\t :oooo+````     .::-````        `        \n";Sleep(25);
    cout << "\t\t  .-:.       ``-/////`          ``           \n";Sleep(25);
    cout << "\t\t    `          `:///-            `               \n";Sleep(25);
    cout << "\t\t     `           `.              `---.            \n";Sleep(25);
    cout << "\t\t     .``          `              :////:           \n";Sleep(25);
    cout << "\t\t   `:///:          `            `-////.       ..  \n";Sleep(25);
    cout << "\t\t   -/////`         `         ```   ``       :oooo:\n";Sleep(25);
    cout << "\t\t    .---` ````     .`    ```                +oooo+\n";Sleep(25);
    cout << "\t\t     `        ```.:///-`                   ``://:`\n";Sleep(25);
    cout << "\t\t    `            -/////`                ``        \n";Sleep(25);
    cout << "\t\t    `             ----`   `````` `-//:-`          \n";Sleep(25);
    cout << "\t\t-::-             `   `          -/////.          \n";Sleep(25);
    cout << "\t\t+oooo+           `     ``         -:::.           \n";Sleep(25);
    cout << "\t\t:oooo/          ``      ``        `               \n";Sleep(25);
    cout << "\t\t `..`           `         `     ``                \n";Sleep(25);
    cout << "\t\t               `           ``...`                 \n";Sleep(25);
    cout << "\t\t           ./+++-          :oooo/                 \n";Sleep(25);
    cout << "\t\t           +ooooo`         /oooo+                 \n";Sleep(25);
    cout << "\t\t           ./+o+-           -::-`                 \n";Sleep(25);
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
    gotoxy(80, 15);Sleep(25);
    cout << "Samarth Sharma 9917103245";
    gotoxy(80, 16);Sleep(25);
    cout << "Sukhjot Singh 9917103252";
    gotoxy(80, 17);Sleep(25);
    cout << "Shivam Singh 9917103257";
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

    for(int i=0;i<=100;i++)
    {
        if(i%10==0)
        {
            gotoxy(40,5);cout<<"            s-";
            gotoxy(40,6);cout<<"            om`           `";
            gotoxy(40,7);cout<<"     `+`     yh";
            gotoxy(40,8);cout<<"      :ho`   `ds               ``";
            gotoxy(40,9);cout<<"        :ho`  .m+       `    ``";
            gotoxy(40,10);cout<<" .:.      :ho` -N-     `   ``        `";
            gotoxy(40,11);cout<<" `:+ss+-`   :h+ `         `     `````";
            gotoxy(40,12);cout<<"      ./oso/-               `````";
            gotoxy(40,13);cout<<"          `-:";
            gotoxy(40,14);cout<<"/+++++++++++`     "<<i<<"%         ````````````";
            gotoxy(40,15);cout<<"            `";
            gotoxy(40,16);cout<<"       `-:++/              `...``";
            gotoxy(40,17);cout<<"  `.:++/-.  `::          ..    `....`";
            gotoxy(40,18);cout<<" ./:.     `:+-  /. .. `:` `-.       `.`";
            gotoxy(40,19);cout<<"        `:+-   //  ::  -:   `-.";
            gotoxy(40,20);cout<<"      `:+-    :+   ::   :-    `-.";
            gotoxy(40,21);cout<<"     `/-     -+`   ::    :.     `-";
            gotoxy(40,22);cout<<"            .+.    ::    `:.";
            gotoxy(40,23);cout<<"            /-     ::     `:";
            gotoxy(40,24);cout<<"                   ..";
            Sleep(75);
        }
        else if(i%9==0)
        {
            gotoxy(40,5);cout<<"                   ..";
            gotoxy(40,6);cout<<"           `:`     :-     -/";
            gotoxy(40,7);cout<<"            .:`    :-    .+`";
            gotoxy(40,8);cout<<"     `-`     -:    :-   `+.     -/`";
            gotoxy(40,9);cout<<"      `.-`    :-   :-  `+-    -+:`";
            gotoxy(40,10);cout<<"        `.-`   :.  :-  /:   -+:`";
            gotoxy(40,11);cout<<" `.`      `.-` `:` .. -/  -+:`     .:/.";
            gotoxy(40,12);cout<<"  ``...``   `.`          ::`  .-/++:.`";
            gotoxy(40,13);cout<<"       ``...`                 /++:-`";
            gotoxy(40,14);cout<<"                  "<<i<<"%        `";
            gotoxy(40,15);cout<<"````````````               `+++++++++++/";
            gotoxy(40,16);cout<<"                           :-`";
            gotoxy(40,17);cout<<"       `````               -/oso/.";
            gotoxy(40,18);cout<<"  ``````     `        `` oy:   `:+ss+:`";
            gotoxy(40,19);cout<<"  `        `    `     :N- .oy:      .:.";
            gotoxy(40,20);cout<<"         `     `       om`  .oy:";
            gotoxy(40,21);cout<<"       `      `         yh    .oy:";
            gotoxy(40,22);cout<<"                        `ds     .+`";
            gotoxy(40,23);cout<<"                         .m+";
            gotoxy(40,24);cout<<"                          -s";
            Sleep(75);
        }
    gotoxy(55,27);cout<<"Computing...";
    }

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
    Sleep(1500);
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
    system("pause");
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
    system("pause");
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
    system("pause");
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

    gotoxy(35,3);cout<<"        `+hmMMMmh+`              `+hmMMMmh+`";Sleep(25);
    gotoxy(35,4);cout<<"      +NMMMMMMMMMN+            +NMMMMMMMMMN+";Sleep(25);
    gotoxy(35,5);cout<<"     +MMMMMMMMMMMMM+          +MMMMMMMMMMMMM+ ";Sleep(25);
    gotoxy(35,6);cout<<"     dMMMMMMMMMMMMMd   `--.`  sMMMMMMMMMMMMMd   ";Sleep(25);
    gotoxy(35,7);cout<<"     sMMMMMMMMMMMMo`:yNMMMMMms..yMMMMMMMMMMMs     ";Sleep(25);
    gotoxy(35,8);cout<<"     `hMMMMMMMMMN-`hMMMMMMMMMMMs +MMMMMMMMMh`     ";Sleep(25);
    gotoxy(35,9);cout<<"       :hNMMMMMN+ hMMMMMMMMMMMMM+ dMMMMMNh:       ";Sleep(25);
    gotoxy(35,10);cout<<"      -/++shhhs+. NMMMMMMMMMMMMMy :shhhs++/-      ";Sleep(25);
    gotoxy(35,11);cout<<"   /hMMMMMMMMMMMs sMMMMMMMMMMMMM/ dMMMMMMMMMMh/ ";Sleep(25);
    gotoxy(35,12);cout<<" :mMMMMMMMMMMMMMM/ sMMMMMMMMMMN+ sMMMMMMMMMMMMMm: ";Sleep(25);
    gotoxy(35,13);cout<<":MMMMMMMMMMMMMMMMM+ .odNMMMNh+``yMMMMMMMMMMMMMMMM:";Sleep(25);
    gotoxy(35,14);cout<<"mMMMMMMMMMMMMMNy:`:+syyyhhhyyyo/-`/hMMMMMMMMMMMMMm";Sleep(25);
    gotoxy(35,15);cout<<"MMMMMMMMMMMMMy`-yNMMMMMMMMMMMMMMMNo`-dMMMMMMMMMMMM";Sleep(25);
    gotoxy(35,16);cout<<"MMMMMMMMMMMM/ sMMMMMMMMMMMMMMMMMMMMN/ yMMMMMMMMMMM";Sleep(25);
    gotoxy(35,17);cout<<"MMMMMMMMMMMs sMMMMMMMMMMMMMMMMMMMMMMM: dMMMMMMMMMM";Sleep(25);
    gotoxy(35,18);cout<<"MMMMMMMMMMM.`MMMMMMMMMMMMMMMMMMMMMMMMd +MMMMMMMMMM";Sleep(25);
    gotoxy(35,19);cout<<"-/oshdNMMMM..MMMMMMMMMMMMMMMMMMMMMMMMm /MMMMNmhs/.";Sleep(25);
    gotoxy(35,20);cout<<"        `.. .MMMMMMMMMMMMMMMMMMMMMMMMm `..`       ";Sleep(25);
    gotoxy(35,21);cout<<"            .MMMMMMMMMMMMMMMMMMMMMMMMm            ";Sleep(25);
    gotoxy(35,22);cout<<"            .MMMMMMMMMMMMMMMMMMMMMMMMd            ";Sleep(25);



    gotoxy(45, 25);
    cout << "Enter the size of cluster group\n";
    gotoxy(45, 26);
    cin >> friends;
    V = friends;
    system("cls");

gotoxy(45,3);cout<<" `smNNNNNNNNNNNNNNNNNNNNNNms`";
gotoxy(45,4);cout<<"  oM/                     /Mo";
gotoxy(45,5);cout<<"  sM- ________________    -Ms";
gotoxy(45,6);cout<<"  sM-                     -Ms";
gotoxy(45,7);cout<<"  sM-                     -Ms";
gotoxy(45,8);cout<<"  sM-  *  USER 1          -Ms";
gotoxy(45,9);cout<<"  sM-                     -Ms";
gotoxy(45,10);cout<<"  sM-  *  USER 2          -Ms";
gotoxy(45,11);cout<<"  sM-                     -Ms";
gotoxy(45,12);cout<<"  sM-  *  USER 3          -Ms";
gotoxy(45,13);cout<<"  sM-                     -Ms";
gotoxy(45,14);cout<<"  sM-  *  USER 4          -Ms";
gotoxy(45,15);cout<<"  sM-                     -Ms";
gotoxy(45,16);cout<<"  sM-  *  USER 5          -Ms";
gotoxy(45,17);cout<<"  sM-                     -Ms";
gotoxy(45,18);cout<<"  sM-                     -Ms";
gotoxy(45,19);cout<<"  oM/                     /Mo";
gotoxy(45,20);cout<<"  `sNNNNNNNNNNNNNNNNNNNNNNms`";

    for (int i = 0; i < V; i++)
    {


        gotoxy(45, 25);
        cout << "Enter name of USER " << i + 1 << "\n";
        string temp;
        gotoxy(55, 8 + i*2);
        cin >> temp;
        //system("cls");
        names.push_back(temp);
    }
    system("cls");
    displayMat(graph);
    int relationNumber = 0;
    gotoxy(45,7);cout<<"Enter total number of relations\n";
    gotoxy(45,8);cin>>relationNumber;
    //friends--
    while (relationNumber--)
    {
        gotoxy(45, 10);
        cout << "Enter the relations!\n";
        gotoxy(45, 11);
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
