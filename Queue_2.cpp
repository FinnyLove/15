using namespace std;
 
void Enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)          
        printf("OverFlow\n");
    else {
        queue[rear] = element;    
        rear++;
    }
}
 
 
void Dequeue(char queue[], int& front, int rear) {
    if(front == rear)           
        printf("UnderFlow\n");
    else {
        queue[front] = 0;     
        front++;
    }
}
 
char Front(char queue[], int front) {
    return queue[front];
}
int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
