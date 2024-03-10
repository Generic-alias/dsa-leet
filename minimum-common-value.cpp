#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1[0];
        int b = nums2[0];
        if (a >= b) {
            int c;
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] >= a) {
                    c = i;
                    break;
                }
            }
            for (int i = 0; i < nums1.size(); i++) {
                for (int j = c; j < nums2.size(); j++) {
                    if (nums1[i] == nums2[j]) {
                        return nums1[i];
                    }
                }
            }
        } else if (b > a) {
            int d;
            for (int i = 0; i < nums1.size(); i++) {
                if (nums1[i] >= b) {
                    d = i;
                    break;
                }
            }
            for (int i = 0; i < nums2.size(); i++) {
                for (int j = d; j < nums1.size(); j++) {
                    if (nums2[i] == nums1[j]) {
                        return nums2[i];
                    }
                }
            }
        }
        return -1;
    }
};
int main(){
vector<int> v1{4,5,6,32,78};
vector<int> v2{3,8,11,12,32,564};
Solution sol;
cout<<sol.getCommon(v1,v2);

}
