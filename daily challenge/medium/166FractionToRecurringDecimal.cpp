class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string result;
        // Handle sign
        if ((numerator < 0) ^ (denominator < 0)) result += "-";

        // Convert to long to avoid overflow
        long long num = abs((long long)numerator);
        long long den = abs((long long)denominator);

        // Integer part
        result += to_string(num / den);
        long long rem = num % den;
        if (rem == 0) return result;

        result += ".";
        unordered_map<long long, int> remPos;

        while (rem != 0) {
            if (remPos.count(rem)) {
                result.insert(remPos[rem], "(");
                result += ")";
                break;
            }
            remPos[rem] = result.size();
            rem *= 10;
            result += to_string(rem / den);
            rem %= den;
        }

        return result;
    }
};
