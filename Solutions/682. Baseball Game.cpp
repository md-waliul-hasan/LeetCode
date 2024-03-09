class Solution {
public:
    bool isNumeric(const string& str) {
        try {
            size_t pos = 0;
            int intValue = stoi(str, &pos);
            return pos == str.length();
        } catch (const invalid_argument& e) {
            return false;
        } catch (const out_of_range& e) {
            return false;
        }
    }

    int calPoints(vector<string>& operations) {
        stack<long> stack;
        int i;
        for (i = 0; i < operations.size(); i++) {
            if (isNumeric(operations[i])) {
                stack.push(stoi(operations[i]));
            } else {
                if (operations[i] == "+") {
                    int last = stack.top();
                    stack.pop();
                    int second_last = stack.top();
                    int sum = last + second_last;
                    stack.push(last);
                    stack.push(sum);
                } else if (operations[i] == "D") {
                    int last = stack.top();
                    stack.push(last * 2);
                } else if (operations[i] == "C")
                    stack.pop();
            }
        }

        int result = 0;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }

        return result;
    }
};