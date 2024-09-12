

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int counter=0;
   for(int i=0;i<wordsSize;i++){
       bool isallowed=true;
       for(int j=0;j<strlen(words[i]);j++){
           if(strchr(allowed,words[i][j])==NULL){
                isallowed=false;
               break;
           }
           
       }
   
    if(isallowed){
        counter++;
    }
       
   }
   return counter;
}