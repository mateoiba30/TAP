1 i n t d [MAXD] , D=0;
2
3 void d i v ( i n t cur , i n t f [ ] , i n t s , i n t e ) {
4 i f ( s == e ) d [D++] = cur ;
5 e l s e {
6 i n t m;
7 f o r (m=s+1; m<e && f [m]==f [ s ] ; m++) ;
8 f o r ( i n t i=s ; i<=m; i++) {
9 d i v ( cur , f , m, e ) ;
10 cur = f [ s ] ;
11 }
12 }
13 }