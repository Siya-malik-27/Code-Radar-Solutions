// Your code here...
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int fibonacciSeries(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacciSeries(i));
    }
}