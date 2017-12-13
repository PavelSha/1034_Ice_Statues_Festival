#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cstring>

#define MAX_LENGTH_ARRAY 1000000
#define MAX_LENGTH_ELEMENT 100

using namespace std;

int main() {
    int t, n, m, a, s, i, j, k, o, flags_c, div_s, min, ts;
    vector<int> vi;
    bool is_done;
    int *sum = new int[MAX_LENGTH_ARRAY + 1];
    int *flags = new int[MAX_LENGTH_ELEMENT + 1];
    
    scanf("%d",&t);
    while (t > 0) {
        is_done = false;
        scanf("%d %d",&n,&m);
        while (n > 0) {
            scanf("%d",&a);
            vi.push_back(a);
            n--;
            if (a == m) {
                min = 1;
                is_done = true;
            }
        }
        
        if (m > MAX_LENGTH_ARRAY ||  m <= 0) {
            return 1;
        }

        if (!is_done) {
            sort(vi.begin(), vi.end());
                    
            if (m % vi.back() == 0) {
                min = m / vi.back();
                is_done = true;
            }
        
            if (!is_done) {
                n = vi.size();
                unique(vi.begin(), vi.end());
                memset(sum, 0, sizeof(int)*(m + 1));

                o = vi.back();
                s = 0;
                for (i = o; i <= m + 1; i += o) sum[i] = ++s;
                
                for (j = n - 1; j > 0; j--) {
                    o = vi[j - 1];
                    memset(flags, 0, sizeof(int)*(o + 1));
                    s = 1;
                    flags_c = 0;
                    
                    for (i = o; i <= m + 1; i += o) {
                        if (sum[i] == 0 || s < sum[i]) sum[i] = s;
                        else if (s > sum[i]) s = sum[i];
                        s++;
                    }
                    flags[0] = 1;
                    flags_c++;

                    for (k = o + 1; flags_c < o && k <= m + 1; k++) {
                        
                        if (sum[k] == 0) continue;
                        div_s = k % o;
                        if (flags[div_s] == 1) continue;

                        s = sum[k] + 1;                    
                        for (i = k + o; i <= m + 1; i += o) {
                            if (sum[i] == 0 || s < sum[i]) sum[i] = s;
                            else if (s > sum[i]) s = sum[i];
                            s++;
                        }
                        flags[div_s] = 1;
                        flags_c++;
                    }
                }
                min = sum[m];
                is_done = true;
            }
        }
                
        if (!is_done) min = 0;
        printf("%d\n", min);
        vi.clear();
        t--;
    }
    delete [] sum;
    delete [] flags;
    return 0;
}

