class Solution {
public:
    string stackToString(stack<char>& charStack) {
        string result;

        while (!charStack.empty()) {
            result += charStack.top();
            charStack.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }

    string removeStars(string s) {
        stack<char> stack;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                stack.pop();
            } else
                stack.push(s[i]);
        }
        return stackToString(stack);
    }
};