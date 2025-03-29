// Your code here...
int printPrimesInRange(int a,int b);
int printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i>1){
            int prime=1;
            for(int x=2;x<i;x++){
                if(x%i==0){
                    prime=0;
                    break;
                }
            }
            if(prime){
                printf("%d ",i);
            }
        }
    }
}