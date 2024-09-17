


typedef struct {
   int *arr;
    int front;
    int rear;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj=(MyQueue*)malloc(sizeof(MyQueue));
    obj->arr=(int*)malloc(sizeof(int)*100);
    obj->front=0;
    obj->rear=-1;
    return obj;
    
}

void myQueuePush(MyQueue* obj, int x) {
    obj->arr[++obj->rear]=x;
}

int myQueuePop(MyQueue* obj) {
    return obj->arr[obj->front++];
}

int myQueuePeek(MyQueue* obj) {
    return obj->arr[obj->front];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->front> obj->rear;
}

void myQueueFree(MyQueue* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/