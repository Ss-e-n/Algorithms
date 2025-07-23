#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int SIZE = 0;
struct node          // Прописываем структуру узла
{
    int count;
    set<int> in;
    map<int,node > link;
}; 
int line[101];
 
void add (node *now , int point){  //функция для добавления векторов в узлы структуры бор 
    if(point==SIZE) {    //если point с размером векторов, тогда заканчиваем
        now->count++;
        return;
    }
    if(now->in.count(line[point])){      // если узел уже есть то переходим
        add(&now->link[line[point]], point+1);
    }
    else { //иначе создаём и переходим
        now-> in.insert (line[point]);
        if(point!=SIZE){
            node tmp{1};
            now->link[line[point]] = tmp;
            add(&now->link[line[point]], point+1);
        }
    }
}
 
void dfs (node *now, int point) {  // функция для прохода по получившемуся дереву слева направо
    if(point>SIZE) //заканчиваем
        return;
    if(point==SIZE) {  //выводим вектор и переходим к следующему
        for (int j = 1; j < now->count; j++) {
            for(int i = 0; I < SIZE; i++){
                cout<<line[i]<<" ";
            }
            cout<<"\n";
        }
    }
    else {      //Записываем в link вектор
        for (auto i : now->in){
            if(now->in.count(i)){
                line[point]=i;
                dfs (&now->link[i], point+1);
            }
        }
    }
}
 
int main()
{
   ___________________
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
_______________________    
    node Bor{0};
    int count;
    cin>>count>>SIZE;
    for(int i = 0; i < count; i++) {   //считываем с входного файла и добавляем в бор 
        for(int j = 0; j < SIZE; j++)
            cin>>line[j];
        add(&Bor,0);
      }
    For ( int j = 0; j < SIZE; j++)
        line[j] = 0;
 }    
    dfs(&Bor,0); //проходим по дереву и выводим результат
    return 0;
}
