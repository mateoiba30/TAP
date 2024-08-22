1 int bsearch(const vector<int> &arr , int r ) {
2 int lef t = 0, right = n;
3 while ( right􀀀left >1) {
4 int mid = ( lef t+right ) /2;
5 i f ( arr [mid] <= r ) {
6 lef t = mid;
7 } else {
8 right = mid;
9 }
10 }
11 return lef t ;
12 }