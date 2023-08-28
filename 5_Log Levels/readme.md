# Log Line Processing

In this exercise, you'll be working with log lines from a logged report. Each log line is formatted as "[<LEVEL>]: <MESSAGE>". You'll perform different tasks to extract and manipulate information from these log lines.

## Introduction

Welcome to the Log Line Processing exercise! You'll be dealing with processing log lines, extracting messages, log levels, and reformatting the log lines for better readability.

## Log Line Format

A log line is a string formatted as "[<LEVEL>]: <MESSAGE>". There are three log levels:

- INFO
- WARNING
- ERROR

## Tasks

### Task 1: Get the Message from a Log Line

Implement the `log_line::message` method to extract and return the message from a log line.

```cpp
std::string log_line::message(const std::string& line) {
    // Your code here
}
Here's how you could structure the `README.md` file for the given exercise:

```markdown
# Log Line Processing

In this exercise, you'll be working with log lines from a logged report. Each log line is formatted as "[<LEVEL>]: <MESSAGE>". You'll perform different tasks to extract and manipulate information from these log lines.

## Introduction

Welcome to the Log Line Processing exercise! You'll be dealing with processing log lines, extracting messages, log levels, and reformatting the log lines for better readability.

## Log Line Format

A log line is a string formatted as "[<LEVEL>]: <MESSAGE>". There are three log levels:

- INFO
- WARNING
- ERROR

## Tasks

### Task 1: Get the Message from a Log Line

Implement the `log_line::message` method to extract and return the message from a log line.

```cpp
std::string log_line::message(const std::string& line) {
    // Your code here
}
```

### Task 2: Get the Log Level from a Log Line

Implement the `log_line::log_level` method to extract and return the log level from a log line in uppercase.

```cpp
std::string log_line::log_level(const std::string& line) {
    // Your code here
}
```

### Task 3: Reformat a Log Line

Implement the `log_line::reformat` method to reformat a log line, putting the message first and the log level after it in parentheses.

```cpp
std::string log_line::reformat(const std::string& line) {
    // Your code here
}
```

## Getting Started

To begin, navigate to the exercise directory and locate the file where you need to implement the methods for each task.

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

Working with log lines is a common task in programming. This exercise will give you practice extracting and manipulating information from log lines. Once you've submitted your solution and received feedback, you'll be well-equipped to handle similar tasks in real-world projects!

Happy coding!


