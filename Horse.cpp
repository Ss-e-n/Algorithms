bool normal (int x,int y) { //проверка на то, что бы не выйти за пределы поля
    return x>= 0 && y>=0 && x< SIZE && y<SIZE; 
}

# В цикле проходим по всем возможным ходам коня из начальной клетки, записывая в массив pole значения, пока не дойдём до конечной
Q.push(start_);
    pair<int,int> now,new_;
    while(Q.size()){
        now = Q.front();
        Q.pop();
        if (now==finish_)
            break;
        int x= now.first,y  = now.second;
        
        if(normal(x+1,y+2))
            if(pole[x+1][y+2]==0){
                pole[x+1][y+2] = pole[x][y]+1;
                new_.first = now.first+1;
                new_.second = now.second+2;
                Q.push(new_);
                if(new_==finish_)
                    break;
            } и т д

# Мы делаем обратный проход и записываем ходы. Обратный проход мы делаем только в ту клетки в которую мы в первый раз пришли за (текущий ход-1) и записываем в стек.
 
while(1){
        int x =  now.first,y = now.second;
        pick+=1;
        steck_[pick][0] = x;
        steck_[pick][1] = y;
        
        if(x==start_.first && y ==start_.second)
            break;
        if(normal(x+1,y+2) && pole[x+1][y+2]==pole[x][y]-1){
                now.first = now.first+1;
                now.second = now.second+2;
                continue;
            }
# Печатаем
  for(;pick!=0;pick--){
        cout<<(char)('a'+steck_[pick][0])<<steck_[pick][1]+1<<"\n";
    }
