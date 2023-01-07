class dsu {
public:
 vector<int> p;
 int n;
 
 dsu(int _n) : n(_n) {
   p.resize(n);
   iota(p.begin(), p.end(), 0);
 }
 
 inline int get(int x) {
   return (x == p[x] ? x : (p[x] = get(p[x])));
 }

 inline bool rsame(int x, int y){
  return get(x) == get(y);
 }
 
 inline bool unite(int x, int y) {
   x = get(x);
   y = get(y);
   if (x != y) {
     p[x] = y;
     return true;
   }
   return false;
 }
};
 
