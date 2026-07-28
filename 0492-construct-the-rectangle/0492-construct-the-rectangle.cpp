class Solution {
public:
    vector<int> constructRectangle(int area) {
        for (int width = sqrt(area); width >= 1; width--) {
            if (area % width == 0) {
                int length = area / width;
                return {length, width};
            }
        }

        return {};
    }
};