class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int start=0;
        int end=size(height)-1;
        while(start<end){
            int h=min(height[start],height[end]);
            int w=end-start;
            area=max(area,h*w);
            if(height[start]<height[end]) start+=1;
            else end-=1;
        }
        return area;
    }
};