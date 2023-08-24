# Pac-Man Rules Translation

In this exercise, you'll be translating rules from the classic game Pac-Man into C++ functions. The focus is on combining the given arguments to return the intended results.

## Introduction

Welcome to the Pac-Man Rules Translation exercise! You'll be working with boolean functions to determine various outcomes in the game, including whether Pac-Man can eat a ghost, score points, lose the game, or win the game.

## Rules

### Rule 1: Can Pac-Man Eat a Ghost?

Define the `can_eat_ghost` function that determines if Pac-Man can eat a ghost. The function takes two arguments: if Pac-Man has a power pellet active and if Pac-Man is touching a ghost. It should return `true` only if Pac-Man has a power pellet active and is touching a ghost.

```cpp
bool can_eat_ghost(bool has_power_pellet, bool is_touching_ghost) {
    // Your code here
}
Here's how you could structure the `README.md` file for the given exercise:

```markdown
# Pac-Man Rules Translation

In this exercise, you'll be translating rules from the classic game Pac-Man into C++ functions. The focus is on combining the given arguments to return the intended results.

## Introduction

Welcome to the Pac-Man Rules Translation exercise! You'll be working with boolean functions to determine various outcomes in the game, including whether Pac-Man can eat a ghost, score points, lose the game, or win the game.

## Rules

### Rule 1: Can Pac-Man Eat a Ghost?

Define the `can_eat_ghost` function that determines if Pac-Man can eat a ghost. The function takes two arguments: if Pac-Man has a power pellet active and if Pac-Man is touching a ghost. It should return `true` only if Pac-Man has a power pellet active and is touching a ghost.

```cpp
bool can_eat_ghost(bool has_power_pellet, bool is_touching_ghost) {
    // Your code here
}
```

### Rule 2: Does Pac-Man Score?

Define the `scored` function that determines if Pac-Man has scored points. The function takes two arguments: if Pac-Man is touching a power pellet and if Pac-Man is touching a dot. It should return `true` if Pac-Man is touching a power pellet or a dot.

```cpp
bool scored(bool touching_power_pellet, bool touching_dot) {
    // Your code here
}
```

### Rule 3: Does Pac-Man Lose?

Define the `lost` function that determines if Pac-Man loses the game. The function takes two arguments: if Pac-Man has a power pellet active and if Pac-Man is touching a ghost. It should return `true` if Pac-Man is touching a ghost and does not have a power pellet active.

```cpp
bool lost(bool has_power_pellet, bool is_touching_ghost) {
    // Your code here
}
```

### Rule 4: Does Pac-Man Win?

Define the `won` function that determines if Pac-Man wins the game. The function takes three arguments: if Pac-Man has eaten all of the dots, if Pac-Man has a power pellet active, and if Pac-Man is touching a ghost. It should return `true` if Pac-Man has eaten all of the dots and has not lost based on the conditions defined in Rule 3.

```cpp
bool won(bool eaten_all_dots, bool has_power_pellet, bool is_touching_ghost) {
    // Your code here
}
```

## Getting Started

To begin, navigate to the exercise directory and locate the file where you need to implement the functions for each rule.

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

Translating Pac-Man rules into C++ functions will give you practice working with boolean logic and function composition. Once you've submitted your solution and received feedback, you'll be prepared to tackle more complex programming challenges!

Good luck and enjoy the journey!
```

You can save this content into a file named `README.md` in your exercise directory. This template provides an overview of the exercise, instructions for each rule, how to test your solution, and how to submit it for review.
