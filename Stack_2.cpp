int top = -1;
 
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
 
bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
 
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top] = value;
    }
}
 
void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}
 
 
int Top(int stack[]){
    return stack[top];
}
 
int Size(){
    return top + 1;
}
int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    Push(stack, 5, capacity); 
    printf("\nCurrent size of stack is %d", Size());
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    printf("\nCurrent size of stack is %d", Size());
    Push(stack, 12, capacity); 
    printf("\nThe current top element in stack is %d", Top(stack));
    for(int i = 0 ; i < 3;i++)
        Pop();
    printf("\nCurrent size of stack is %d", Size());
    Pop();  
}
