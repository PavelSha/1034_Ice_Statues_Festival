//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int b[26] = {0, 1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767,
//                65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431};
//    int c[27] = {0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768,
//                65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432};
//    int t, n, m, a, min, i, count, sum, div, mod, check, buff, buff_c;
//    vector<int> vi;
//    bool is_done;
//    cin >> t;
//    while (t > 0) {
//        is_done = false;
//        min = -1;
//        cin >> n; cin >> m;
//        while (n > 0) {
//            cin >> a;
//            vi.push_back(a);
//            n--;
//            if (a == m) { // size -> 1
//                is_done = true;
//                min = 1;
//            }
//        }
//
//        if (!is_done) {
//            sort(vi.begin(), vi.end());
//            unique(vi.begin(), vi.end());
//            count = vi.size();
//            check = b[count];
//            
//            while(check > 0) {
//                buff = m;
//                buff_c = 0;
//                for (i = count; i > 0; i--) {
//                    if (check & c[i]) {
//                        div = buff / vi[i-1];
//                        mod = buff % vi[i-1];
//                        if (div > 0) buff_c += div;
//                        else {
//                            i = 0;
//                        }
//                        if (mod == 0) {
//                            if (min == -1 || min > buff_c) {
//                                min = buff_c;
//                            }
//                            i = 0;
//                        }
//                        buff = mod;
//                    }
//                }                
//                check--;
//            }
//        }
//        
//        if (min == -1) min = 0;
//                   
//        cout << min << endl;
//        vi.clear();
//        t--;
//    }
//    return 0;
//}
//
