int minBitFlips(int start, int goal) {
    
    int count =0;
    while(goal!=0||start!=0){
        if(goal%2!=start%2){
            count++;
        }
        goal=goal/2;
        start=start/2;
    }
    return count;
}