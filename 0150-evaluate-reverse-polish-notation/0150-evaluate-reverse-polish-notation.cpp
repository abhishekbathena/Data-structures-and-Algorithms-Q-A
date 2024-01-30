class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         std::stack<int> operandStack;

    for (const std::string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            if (token == "+") operandStack.push(operand1 + operand2);
            else if (token == "-") operandStack.push(operand1 - operand2);
            else if (token == "*") operandStack.push(operand1 * operand2);
            else if (token == "/") operandStack.push(operand1 / operand2); // Integer division

        } else {
            operandStack.push(std::stoi(token));
        }
    }

    return operandStack.top();
    }
};