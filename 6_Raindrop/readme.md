# Raindrops

In this exercise, you'll be working with raindrop sounds based on certain potential factors of a number. You'll convert a number into a string that contains raindrop sounds according to the given rules.

## Introduction

Welcome to the Raindrops exercise! Your task is to convert a number into a string of raindrop sounds. Depending on the factors of the number, you'll add specific raindrop sounds to the result.

## Raindrop Rules

The rules for raindrops are based on the factors of a number:

- If the number has 3 as a factor, add 'Pling' to the result.
- If the number has 5 as a factor, add 'Plang' to the result.
- If the number has 7 as a factor, add 'Plong' to the result.
- If the number does not have any of 3, 5, or 7 as factors, the result should be the digits of the number.

## Examples

- For 28: Since 28 has 7 as a factor, but not 3 or 5, the result would be "Plong".
- For 30: Since 30 has both 3 and 5 as factors, but not 7, the result would be "PlingPlang".
- For 34: Since 34 is not factored by 3, 5, or 7, the result would be "34".

## Task

Your task is to implement the `raindrops` function that takes an integer as input and returns the raindrop sounds based on the rules above.

```cpp
std::string raindrops(int number) {
    // Your code here
}


## Getting Started

To begin, navigate to the exercise directory and locate the file where you need to implement the `raindrops` function.

## Testing Your Solution

To test your solution, run the provided test suite. In your terminal, navigate to the exercise directory and run the following command:

```sh
# Replace `language` with the appropriate command for your language (e.g., python, java, etc.)
language test
```

The test suite will provide feedback on whether your solution is correct.

## Submitting Your Solution

After completing your solution and passing the test suite, you're ready to submit your solution for review. Follow the instructions on the exercise website to submit your solution and receive feedback.

## Conclusion

Converting numbers into raindrop sounds is a fun way to practice working with factors and conditions. Once you've submitted your solution and received feedback, you'll have strengthened your problem-solving skills in programming!

Happy coding and let it rain!
