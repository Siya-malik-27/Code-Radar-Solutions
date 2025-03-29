// Your code here...
int fibonacciSeries(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacciSeries(n))
    }
}