bool isprime(int n){
    int p=1;
    for(int i = 2 ; i*i < n ; i++){
        if(n%i==0){
            p=0;
        }
        return true;
    }
}