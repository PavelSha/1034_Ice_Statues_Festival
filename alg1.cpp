//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {    
//    int t, n, m, a, min, sum, count, max_sum, i, j, zero_c, stop_count, start_min;
//    vector<int> vi, vset, vseti; // vi - all numbers, vset - set numbers for sum
//    bool is_done, with_inc;
//    
//    t = 1;//cin >> t;
//    while (t > 0) {
//        is_done = false;
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
//        if (is_done) { // size -> 1
//            cout << min << endl;
//            continue;
//        }
//        
//        sort(vi.begin(), vi.end());
//        unique(vi.begin(), vi.end());
//        count = vi.size();
//
//        vseti.push_back(0); //vset.push_back(vi[0]);
//        max_sum = m / vi[0];
//        start_min = m / vi[count - 1];
//        for (i = 2; i < start_min; i++) vseti.push_back(0);
//        cout << "vseti l - " << vseti.size() << endl;
//        
//        for (min = start_min; (min <= max_sum) && !is_done; min++) {
//            cout << "min - " << min << endl;
//            vseti.push_back(0); //vset.push_back(vi[0]);
////            if (min * vi[count - 1] < m) continue;
//            
//            if (min * vi[0] == m) { // Before increment
//                is_done = true;
//                min--; //excess for loop increment
//            }
//            
//            zero_c = 0;// stop_count = 0; 
//            while (!is_done && zero_c != min) {
//                // Increment and sum for set
//                zero_c = 0; with_inc = true; sum = 0;// stop_count++;
////                if (stop_count > 500) return 1;
//                for (i = 0; i < min; i++) {
//                    if (with_inc) {
//                        if (vi[vseti[i]] == vi[count - 1]) {
//                            vseti[i] = 0;
//                            zero_c++;
//                        } else {
//                            vseti[i]++;
//                            with_inc = false;
//                        }
//                    }
//                    sum += vi[vseti[i]];
//                }
////                for (j = 0; j < min; j++) cout << vseti[j] << ' ';
////                cout << endl;
//
//                if (sum == m) {
//                    is_done = true;
//                    min--; //excess for loop increment
//                }
//            }
//        }
//        
//        if (!is_done) min = 0; // no set;
//                    
//        cout << min << endl;
//        vi.clear();
//        vseti.clear();
//        t--;
//    }
//
//    return 0;
//}
//
