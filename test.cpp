
#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "calculator.h"

using testing::Eq;
auto calc = calculator();

TEST(Tests, add) {
    ASSERT_EQ(3, calc.add(1, 2));
    ASSERT_DOUBLE_EQ(3.3, calc.add(1.1, 2.2));
}

TEST(Tests, substract) {
    ASSERT_EQ(1, calc.substract(3, 2));
    ASSERT_DOUBLE_EQ(1.1, calc.substract(3.3, 2.2));
}

TEST(Tests, multiply) {

    ASSERT_EQ(6, calc.multiply(3, 2));
    ASSERT_DOUBLE_EQ(6.6, calc.multiply(3.3, 2.0));
}

TEST(Tests, divide) {

    ASSERT_EQ(2, calc.divide(6, 3));
    ASSERT_DOUBLE_EQ(3.3, calc.divide(6.6, 2.0));
    ASSERT_THROW(calc.divide(2, 0), std::logic_error);
    ASSERT_THROW(calc.divide(6.6, 0.0), std::logic_error);
}

TEST(Tests, square) {

    ASSERT_EQ(4, calc.square(2));
    ASSERT_DOUBLE_EQ(1.21, calc.square(1.1));
}
