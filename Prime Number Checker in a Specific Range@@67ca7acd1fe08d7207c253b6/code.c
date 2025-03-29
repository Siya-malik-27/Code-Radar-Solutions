// Your code here...
int printPrimesInRange();
int printPrimesInRange(){
    for(int i=a;i<=b;i++){
        if(i>2){
            for(int x;x<i;x++){
                if(x%i!=0){
                    printf("%d",i);
                }
            }
        }
    }
}