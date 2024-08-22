LL fib(LL n) {
VVLL mat(2,VLL(2,1));
mat[1][1]=0;
return __gnu_cxx::power(mat,n)[1][0];
}