bool isPrime(int n){
    int p=1;
    if (n <= 1){
        return false;
    }
    for(int i = 2 ; i*i < n ; i++){
        if(n%i==0){
            p=0;
        return false;
        }
        
    }
    return true;
}