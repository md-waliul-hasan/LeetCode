class Solution {
public
    int evalRPN(vectorstring& tokens) {
        stackintstack;

        for(int i =0 ;i tokens.size();i++)
        {
            if(tokens[i] != + && tokens[i] != - && tokens[i] !=  && tokens[i] != )
            {
                stack.push(stoi(tokens[i]));
            }
            else if(tokens[i] == +)
            {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                stack.pop();

                stack.push(first+second);
            }
            else if(tokens[i] == -)
            {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                stack.pop();

                stack.push(second-first);
            }
            else if(tokens[i] == )
            {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                stack.pop();

                stack.push(secondfirst);
            }
            else if(tokens[i] == )
            {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                stack.pop();

                stack.push(secondfirst);
            }
        }
        return stack.top();
    }
};