class Solution {
public:
    bool isPerfectSquare(int num) {
        float perfect_square = sqrt(num);
        if (perfect_square == static_cast<int>(perfect_square))
            return true;
        else
            return false;
    }
};
