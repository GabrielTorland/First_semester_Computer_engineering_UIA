#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main() {
    vector<int> count;
    int numbers;
    int i = 0;
    float sum = 0;

    while (true){
        cin >> numbers;
        if (numbers == 0)
            break;
        count.push_back(numbers);
        sum += (float)numbers;
        i++;
    }
    cout << "Average : " << sum/(float)i << endl;
    sort(count.begin(), count.end());
    if (i%2 == 0){
        cout << "Median : " << ((float)count[(i/2)-1] + (float)count[i/2])/2 << endl;
    }
    else cout << "Median : " << (float)count[i/2] << endl;
    cout << "Descending : ";
    vector<int> :: iterator it;
    for(it= count.begin(); it != count.end(); it++){
       cout << count[i-1] << " ";
       i--;
    }
    return 0;
}
