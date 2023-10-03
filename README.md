---
# 🛠 Unit Test Framework

A user-friendly and robust Unit Test Framework to make your development easier and less error-prone.

## 📦 Installation

1. **Include the .hpp File:** Add the `.hpp` file to your project to get started.

## 🚀 Usage

To use the framework, you'll need to declare some macros within the scope you're looking to test.

### Step-by-Step Guide

1. **Initialize Tests**: Add the `TESTS_INIT` macro at the beginning of the scope.
2. **Assertions**: Use `ASSERT` and `ASSERT_EQUAL` macros to perform various tests.

#### Macros:

- `ASSERT(func, args, expected)`: Use this macro to test if a function returns the expected value.
- `ASSERT_EQUAL(lvalue, rvalue)`: Use this macro to test if two variables are equal.

## 📝 Example

Here's a quick example to get you started:

```C++
void test_all() {
  TESTS_INIT;
  // Your code for testing goes here
  ASSERT(sqr, (2), 4);
  ASSERT_EQUAL(2, 2);
}
```

## 🎯 What Happens Next?

- **Success**: If there are no assertion errors, your program will continue as expected.
- **Failure**: If an assertion fails, you will see error messages with the filename and line number. The program will stop execution after all unit tests are run.

---