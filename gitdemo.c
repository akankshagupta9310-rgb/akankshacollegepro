void printtable(int n);

int main(){
    int n;
    printf("enter no");
    scanf("%d",&n);

    printtable(n);//argument/actual parameter
    return 0;

}
void printtable(int n){//parameter/formal parmeter
    for(int i=1; i<=10; i++){
        printf("i*n");
    }
}