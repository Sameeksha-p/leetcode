bool isValid(char *s) {
   char stack[10000];
    int top=-1;
    for (int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='['){
            stack[++top]=c;
        }
        else{
            if (top==-1){
                return false;
            }
            switch(c){
                case ')': if (stack[top]!='(')return false;break;
                 case '}': if (stack[top]!='{')return false;break;
                     case ']': if (stack[top]!='[')return false;break;
            }
            top--;
            
}
}
    return top ==-1;
}