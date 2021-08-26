#include <iostream>
#include <cstdio>
using namespace std ;

void run(int arr[9][9],int y1,int x1 )
{
    if( y1-1 >= 0 && arr[y1][x1]  < arr[y1-1][x1]  )
    {
        arr[y1-1][x1] = arr[y1][x1]+1 ;
        run(arr,y1-1,x1);
    }
    if( x1-1 >= 0 && arr[y1][x1] < arr[y1][x1-1] )
    {
        arr[y1][x1-1] = arr[y1][x1]+1 ;
        run(arr,y1,x1-1);
    }
    if(y1+1 <= 8 && arr[y1][x1] < arr[y1+1][x1] )
    {
        arr[y1+1][x1] = arr[y1][x1]+1 ;
        run(arr,y1+1,x1);
    }
    if(x1+1 <= 8 && arr[y1][x1] < arr[y1][x1+1] )
    {
        arr[y1][x1+1] = arr[y1][x1]+1 ;
        run(arr,y1,x1+1);
    }
}

main()
{
    int arr[9][9],y1,x1,y2,x2,xx;
    char ar[9][9] ;
    //cin >> y1 >> x1 >> y2 >> x2 ;
    scanf("%d %d %d %d",&y1,&x1,&y2,&x2);
    xx=x2 ;
    //cout << x1 << " " << y1 << " " << xx << " " << y2  << endl ;

    for(int i=0;i<9;i++)
    {
       scanf("%s",ar[i]) ;
    }

    //cout << x1 << " " << y1 << " " << xx << " " << y2  << endl ;

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(ar[i][j] == '0')
            {
                arr[i][j]=99;
            }
            else if(ar[i][j]=='1')
            {
                arr[i][j]=-99;
            }
        }
    }
    //cout << x1 << " " << y1 << " " << xx << " " << y2  << endl ;
    //arr[y1][x1]=0;
    arr[y2][xx]=0;
    /*for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }*/
    //cout << x1 << " " << y1 << " " << xx << " " << y2  << endl ;
    run(arr,y2,xx);
    /*for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }*/
    //printf("%d",arr[y1][xx]);
    cout << arr[y1][x1] ;
}

/*


2 4
7 7
000000000
000000000
000000000
000000000
000000000
000000000
000000000
000000000
000000000

*/

