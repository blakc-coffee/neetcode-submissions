class Solution {
    public int evalRPN(String[] tokens) {

        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < tokens.length; i++) {

            String token = tokens[i];

            if (token.equals("+") || token.equals("-") || token.equals("*") || token.equals("/")) {

                int a = stack.pop();
                int b = stack.pop();
                int res = 0;

                if (token.equals("*")) res = b * a;
                if (token.equals("-")) res = b - a;
                if (token.equals("+")) res = b + a;
                if (token.equals("/")) res = b / a;

                stack.push(res);

            } else {
                stack.push(Integer.parseInt(token));
            }
        }

        return stack.pop();
    }
}