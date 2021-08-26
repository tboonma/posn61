#include<iostream>

using namespace std;


void merge(char* A, int p, int m, int r)
{
    int i, j, k;
    int n1 = m-p+1;
    int n2 = r-m;

    int L[n1];
    int R[n2];

    for(i = 0; i < n1; i++)
        L[i] = A[p+i];
    for(j = 0; j < n2; j++)
        R[j] = A[m+1+j];

    i = 0;
    j = 0;
    k = p;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }


    while(i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }


}

void mergesort(char* A, int p, int r)
{
    if(p < r)
    {
        int m = p+((r-p)/2);
        mergesort(A, p, m);
        mergesort(A, m+1, r);
        merge(A, p, m, r);
    }
}


int main()
{
    int num,i;
    cin>>num;
    char A[num];
    for(i=0;i<num;i++)
        cin>>A[i];
    mergesort(A, 0, num-1);
    cout<<num<<endl;
    for(int i=0; i < num; i++)
        cout << A[i] <<endl;

}
