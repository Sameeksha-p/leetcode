int calPoints(char** operations, int operationsSize) {
    int stack[10000];
    int top=-1;
    for(int i=0;i<operationsSize;i++){
        char* c=operations[i];
        if (isdigit(c[0])||c[0]=='-'&&isdigit(c[1])){
            stack[++top]=atoi(c);
        }
        switch(c[0]){
            case '+': {
                if(top>=1){
                int a=stack[top-1];
                int b=stack[top];
                stack[++top]=a+b;
                }
                break;
                
        }
            case 'D':{
                if(top>=0){
                int a=stack[top];
                stack[++top]=2*a;
                }
                break;
            
            }
            case 'C':{
                if(top>=0){
                top--;
                }
                break;
            }
    }

        }
      
     int sum =0;
        while(top>=0){
            sum =sum+stack[top--]; 
}
    return sum;
}
   
