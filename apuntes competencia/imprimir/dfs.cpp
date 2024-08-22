const int MAXN = 200005;
vector< vector<int> > g; // graph represented as an adjacency list
vector <bool> visto(MAXN,false);

void dfs(int v) {
    visto[v] = true;
    for (int u : g[v]) if (!visto[u]) dfs(u);
}

// dfs for directed graphs
void dfs_visit(VVI& adj,int u,VI& color,VI& pred,VI& ts){
color[u] = 1;
REP(i,SIZE(adj[u])){
int v = adj[u][i];
if( color[v] == 0 ){ // (u,v): tree edge
pred[v] = u;
dfs_visit(adj,v,color,pred,ts);
}else if( color[v] == 1 ) {
 // (u,v): back-edge; cycle found (might be self-loop)
 }else{
 assert( color[v] == 2 );
 // (u,v): forward or cross edge
 }
 }
 color[u] = 2;
 ts.push_back(u);
 }

 VI dfs(VVI& adj,VI& pred){
 int n = adj.size();
 pred = VI(n,-1);
 VI color(n,0);
 VI ts;
 REP(u,n) if( color[u] == 0 ) dfs_visit(adj,u,color,pred,ts);
 reverse(ALL(ts));
 return ts;
 }