void cit(int n, int i, int v[]){
    if(i<=n)
    {
        std::cin>>v[i];
        cit(n,i+1,v);
    }
}

void afi(int n,int i,int v[]){
    if(i<=n)
    {
        std::cout<<v[i]<<" ";
        afi(n,i+1,v);
    }
}
