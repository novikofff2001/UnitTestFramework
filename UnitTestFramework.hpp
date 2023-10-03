#pragma once

#include <iostream>
#include <sstream>
#include <exception>


#define _UTF_CLASS_OBJ_NAME _untefr
#define TESTS_INIT UnitTestFramework _UTF_CLASS_OBJ_NAME

#define val(line) line
#define GET_LINE val(__LINE__)
#define GET_FILE val(__FILE__)

#define ASSERT(func, args, expected) {          \
    try {                                       \
        ASSERT_EQUAL( func args, (expected))    \
    }                                           \
    catch (std::runtime_error& re) {            \
        _UTF_CLASS_OBJ_NAME._err_count++;       \
    }                                           \
}

#define ASSERT_EQUAL(lvalue, rvalue) {                              \
    auto _lvalue = lvalue;                                          \
    auto _rvalue = rvalue;                                          \
    if (_lvalue != _rvalue) {                                       \
        std::stringstream ss;                                       \
        ss << "Assertion error: "  << lvalue;                       \
        ss <<  << " = " << _lvalue << ", expected " << _rvalue;     \
        ss << ". File: " << GET_FILE << ", Line: " << GET_LINE;     \
        std::cerr << ss.str();                                      \
        throw std::runtime_error(ss.str());                         \
    }                                                               \
}

class UnitTestFramework
{
public:
	int _err_count;

	UnitTestFramework();
	~UnitTestFramework();
};


UnitTestFramework::UnitTestFramework() {
	_err_count = 0;
};

UnitTestFramework::~UnitTestFramework() {
	if (_err_count) {
		std::cerr << "\nTotal " << std::to_string(_err_count) << " unit test(s) failed." << std::endl;
		exit(1);
	}
	std::cerr << "All unit test(s) passed.\n" << std::endl;
}


