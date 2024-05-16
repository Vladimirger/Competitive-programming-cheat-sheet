vector<int> size(n, 1), p(n);
for(int i = 0; i < n; i++){
  p[i] = i;
}
int find(x){
  while(x != p[x])x = p[x];
  return x;
}
bool same(int a, int b){
  return find(a) == find(b);
}
void union(int a, int b){
  a = p[a];
  b = p[b];
  if(size[b] > size[a]){
    swap(a, b);
  }
  size[b] += size[a];
  p[b] = a;
}
