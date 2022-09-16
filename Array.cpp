#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct Array {
  int A[20];
  int size;
  int length;
} Array;

void Display(Array arr) {
  for(int i = 0; i < arr.length; i++)
    printf("%d ", arr.A[i]);
  printf("\n");
}

void Append(Array* arr, int x) {
  if (arr->length < arr->size)
    arr->A[arr->length++] = x;
}

void Insert(Array* arr, int index, int x) {
  if (index >= 0 && index <= arr->length) {
    for(int i = arr->length; i > index; i--) {
      arr->A[i] = arr->A[i-1];
    }

    arr->A[index] = x;
    arr->length++;
  }
}

void InsertSorted(Array* arr, int x) {
  if (arr->length == arr->size) return;
  int i = arr->length - 1;
  while(i >= 0 && arr->A[i] > x) {
    arr->A[i+1] = arr->A[i];
    i--;
  }
  arr->A[i+1] = x;
  arr->length += 1;
}

int Delete(Array* arr, int index) {
  if (index >= 0 && index < arr->length) {
    int x = arr->A[index];

    for(int i = index; i < arr->length - 1; i++)
    {
      arr->A[i] = arr->A[i+1];
    }
  }

  arr->length--;
  return -1;
}

void swap(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int LinearSearch(Array arr, int key) {
  for (int i = 0; i < arr.length; i++)
    if (arr.A[i] == key) return i;

  return -1;
}


int BinarySearch(Array arr, int key) {
  int mid, l = 0;
  int h = arr.length - 1;

  while (l <= h) {
    mid = (l + h) / 2;

    if(arr.A[mid] == key) return mid;
    else if(key > arr.A[mid]) l = ++mid;
    else h = --mid;
  }

  return -1;
}

int RBinarySearch(int a[], int l, int h, int key)
{
  if (l > h) return -1;

  int mid = (l + h) / 2;
  if (a[mid] == key) return mid;
  else if (key > a[mid]) return RBinarySearch(a, ++mid, h, key);
  else return RBinarySearch(a, l, --mid, key);
}

int Get(Array arr, int index) {
  if (index >= 0 && index < arr.length) return arr.A[index];
  else return -1;
}

void Set(Array* arr, int index, int x) {
  if (index >= 0 && index < arr->length) {
    arr->A[index] = x;
  }
}

int Max(Array arr) {
  int max = arr.A[0];
  for (int i = 1; i < arr.length; i++)
    if (arr.A[i] > max) max = arr.A[i];

  return max;
}

int Min(Array arr) {
  int min = arr.A[0];
  for (int i = 1; i < arr.length; i++)
    if (arr.A[i] < min) min = arr.A[i];

  return min;
}

int Sum(Array arr) {
  int sum = 0;
  for(int i = 0; i < arr.length; i++) 
    sum += arr.A[i];
  return sum;
}

float Avg(Array arr) {
  return (float) Sum(arr) / arr.length;
}

void Reverse(Array* arr) {
  for(int i = 0, j = arr->length - 1; i < j; i++, j--) {
    swap(&arr->A[i], &arr->A[j]);
  }
}


int isSorted(Array arr) {
  for(int i = 0; i < arr.length - 1; i++)
    if (arr.A[i] > arr.A[i+1]) return 0;
  return 1;
}


void Rearrange(Array* arr) {
  int i = 0;
  int j = arr->length - 1;

  while (i < j) {
    while(arr->A[i] < 0) i++;
    while(arr->A[j] >= 0) j--;
    swap(&arr->A[i], &arr->A[j]);
  }
}

Array* Merge(Array* arr1, Array* arr2) {
  int i, j, k;
  i = j = k = 0;
  
  Array *arr = (Array*) malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] <= arr2->A[j]) 
      arr->A[k++] = arr1->A[i++];
    else 
      arr->A[k++] = arr2->A[j++];
  }

  while (i < arr1->length)
      arr->A[k++] = arr1->A[i++];

  while (j < arr2->length)
      arr->A[k++] = arr2->A[j++];

  arr->length = arr1->length + arr2->length;
  arr->size = 10;

  return arr;
}

Array* Union(Array* arr1, Array* arr2) {
  int i, j, k;
  i = j = k = 0;
  
  Array *arr = (Array*) malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] < arr2->A[j]) 
      arr->A[k++] = arr1->A[i++];
    else if (arr2->A[j] < arr1->A[i])
      arr->A[k++] = arr2->A[j++];
    else {
      arr->A[k++] = arr1->A[i++];
      j++;
    }
  }

  while (i < arr1->length)
      arr->A[k++] = arr1->A[i++];

  while (j < arr2->length)
      arr->A[k++] = arr2->A[j++];

  arr->length = k;
  arr->size = 10;

  return arr;
}

Array* Intersection(Array* arr1, Array* arr2) {
  int i, j, k;
  i = j = k = 0;
  
  Array *arr = (Array*) malloc(sizeof(Array));
  while (i < arr1->length && j < arr2->length)
  {
    if(arr1->A[i] == arr2->A[j]) {
      arr->A[k++] = arr1->A[i++];
      j++;
    }
    else if (arr1->A[i] < arr2->A[j]) i++;
    else j++;
  }


  arr->length = k;
  arr->size = 10;

  return arr;
}

int main() {
  Array arr1={{2,6,10,15,25},10,5};
  Array arr2={{3,6,7,15,20},10,5};
  Array *arr3; 
 
  arr3=Union(&arr1,&arr2);
  Display(*arr3);
  arr3=Intersection(&arr1,&arr2);
  Display(*arr3);
  //printf("Enter size of an array\n");
  //scanf("%d", &arr.size);

  //arr.A = (int*)malloc(sizeof(int) * arr.size);
  //arr.length = 0;

  //int n;
  //printf("Enter number of numbers\n");
  //scanf("%d", &n);

  //for(int i = 0; i < n; i++)
  //  scanf("%d", &arr.A[i]);
  //arr.length = n;

}
