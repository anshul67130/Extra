#include <stdio.h>
#include <stdlib.h>

void print(int* arr, int size){
    for (int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void insert(int* arr, int size, int index, int value){
    int i;
    for (i=size; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=value;
}

void delete(int* arr, int size, int index){
    for (int i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}

void reverse(int* arr, int size){
    int temp;
    for (int i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[(size-1)-i];
        arr[(size-1)-i] = temp;
    }
}

void bubbleSort(int* arr, int size){
    int temp;
    for (int i=0; i<size-1; i++){
        for (int j=1; j<size-i; j++){
            if (arr[j-1] > arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void linearSearch(int* arr, int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            printf("%d found at index %d\n",target,i+1);
            return;
        }
    }
    printf("%d not found in list\n",target);
}

void binarySearch(int* arr, int size, int target){
    int s=0, e=size-1, mid;
    while(s <= e){
        mid = s + (e - s) / 2;
        if (arr[mid] == target){
            printf("%d found at index %d\n", target, mid+1);
            return;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    printf("%d not found in the list\n", target);
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int* arr = (int*) malloc(sizeof(int)*(size+10));
    
    for (int i=0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    while (1) {
        printf("\n\n");
        printf(" 1. Print the array\n");
        printf(" 2. Insert an element\n");
        printf(" 3. Delete an element\n");
        printf(" 4. Reverse the list\n");
        printf(" 5. Bubble Sort\n");
        printf(" 6. Linear Search\n");
        printf(" 7. Binary Search\n");
        printf(" 8. Exit\n");
        
        int choice, index, value, target;
        scanf("%d",&choice);

        switch (choice){
            case 1 :
                print(arr, size);
                break;

            case 2 :
                printf("Enter Value: ");
                scanf("%d", &value);
                printf("Enter index: ");
                scanf("%d", &index);
                insert(arr, size, index-1, value);
                size++;
                printf("Array after insertion: ");
                print(arr, size);
                break;

            case 3 :
                printf("Enter index: ");
                scanf("%d", &index);
                delete(arr, size, index-1);
                size--;
                printf("Array after deletion: ");
                print(arr, size);
                break;

            case 4 :
                reverse(arr, size);
                printf("Array after reverse: ");
                print(arr, size);
                break;

            case 5 :
                bubbleSort(arr, size);
                printf("Array after Bubble sort: ");
                print(arr, size);
                break;

            case 6 :
                printf("Enter target: ");
                scanf("%d", &target);
                linearSearch(arr, size, target);
                break;

            case 7 :
                printf("Enter target: ");
                scanf("%d", &target);
                bubbleSort(arr, size);  // Array should be sorted before binary search
                binarySearch(arr, size, target);
                break;

            case 8 :
                printf("Bye Bye\n");
                exit(0);
                break;

            default :
                printf("Enter appropriate choice\n");
        }
    }
    return 0;
}
