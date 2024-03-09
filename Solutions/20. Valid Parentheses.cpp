class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';

        stack<char> stack;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            } else {
                if (!stack.empty() && stack.top() == mp[s[i]]) {
                    stack.pop();
                } else
                    return false;
            }
        }
        if (stack.empty())
            return true;
        return false;
    }
};