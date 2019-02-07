/*
 insertion:  best for small, or when the data is already nearly sorted
 quicksort:  fastest (but vulnerable)
 hepsort:    good when quicksort fails
 mergesort:  best when data exceeds memory
 
 
 */

/*
    5 4 3 2 1
 
 */
#include <iostream>
#include <random>

void bubblesort(int x[], int n)
{
    for (int j = 0; j < n-1; j++){
        bool done = true;
        for (int i = 0; i < n-1; i++)// 必须是n-1,如果是n第一个会到array外，就没了
                                    // 这里不是又没了，是如果是n-1的话就会吧array外面的乱七八糟
                                    // 的东西弄进来。
            if (x[i] > x[i+1]){
                int temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
                
//                x[i] += x[i+1];
//                x[i+1] = x[i] - x[i+1];
//                x[i] = x[i] - x[i+1];
//
//                x[i] ^= x[i+1];
//                x[i+1] = x[i] ^ x[i+1];
//                x[i] = x[i] ^ x[i+1];
                done = false;
            }
        if (done)
            break;// Omega(n)
    }
}

/*
    1 2 3 4
 
 */

void selectionSort(int x[], int n){
    for (int j = n-1; j > 0; j--){
        int max = x[0], maxpos = 0;
        for (int i = 1; i < n; i++)
            if (x[i] > max){
                max = x[i];
                maxpos = i;
            }
        int temp = x[maxpos];
        x[maxpos] = x[j-1];
        x[j-1] = temp;
    }
}

//Homework!!!
/*
 insertionSort: Omega(n)!!!!!!
 */
void insertionSort(int x[], int n){
    for (int i = 1; i < n; i++){
        if (x[i-1] > x[i]){
            int temp = x[i];
            for (int j = i - 1; i >= 0; i--){
                if (x[j] > temp){
                    x[j+1] = x[j];
                }else {
                    
                    // insert into the right place
                }
            }
        }
    }
}


/*
    9 8 7 6 5 4 3 1
    L             R
 
 select a pivot
 pivot = x[L] WILL TURN INFO selection sort, don't do it!
 pivot = x[R] equally stupid
 
 pivot = x[random(L,R)]
 pivot = (x[L] + [R]) / 2
 
 if pivot = (x[L] + [R] +x[(L+R)/2]) / 2
 */
using namespace std;
void quicksort(int x[], int L, int R){
//    if (R )
    int n, pivot;
    pivot = x[random(L,R)];
    int i = L,j = R;
    while (i < j){
        while (x[i] <= pivot)
            i++;
        while (x[i] < pivot)
            i++;
        while (i < j) {
            if (i < j)
                swap(x[i], x[j]);
        }
    }
}
    if (more than size 1)
        quicksort(x, L, i or j);//??????????
    if (more than size 1)
        quicksort(x, i+1 or j or j-1, R);


void KnuthOptimizedQuicksort(int x[], int n){
    partialAuicksort(x, 0, n-1);        // go until smallest partition size k = 200
    insertionsort(x);
}
// heapsort：
// 1.用binary tre写一个顺序的tree
// 2.每个三角形作为一个组，吧最大的放到最上面，找到最大的之后交换最大和最小的位置。
// 3.去掉最大值
// 4.重新进行第二步
void heapsort(){
    for (int i = n/2; i >= 0; i--){
        makesubheap(x, i);
    }
}

void makesubheap(x, i){
    if (2i+1 > x.length)
        return;
    if (2i+2 > x.length){
        
        if (x[2i+1] > x[2i+2]){
            swap(x[i], x[2i+1]);
                 makesubheap(x, 2i+1);
        } else {
            swap(x[i], x[2i+2]);
            makesubheap(x,2i+2);
             }
}
             }
             

// mergeSotr
// insertion: best for nearly sorted data and small
// quicksort: best for general sorting unless something goes wrong with pivot
// heapsort: fall back for quicksort
// mergesort: best when n = larger than memory
void mergesort(){
    
}



