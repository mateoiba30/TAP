// cnt_inv = number of inversions in A
LL cnt_inv = 0;

void merge(VLL& A,int a,int b,int c){
VLL B(A.begin()+a, A.begin()+b);
VLL C(A.begin()+b, A.begin()+c);
int i=0,j=0,k=a;
while(i<B.size() && j<C.size()){
if(B[i] <= C[j]){
 A[k++] = B[i++];
 }else{
 cnt_inv += B.size()-i;
 A[k++] = C[j++];
 }
 }
 while(i<B.size()) A[k++] = B[i++];
 while(j<C.size()) A[k++] = C[j++];
 }
 void mergesort(VLL& A,int l,int u){
 if(u-l > 1){
 int m = (l+u) / 2;
 mergesort(A,l,m);
 mergesort(A,m,u);
 merge(A,l,m,u);
 }
 }