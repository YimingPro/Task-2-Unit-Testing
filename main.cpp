#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    (void) RUN_ALL_TESTS();
    return 0;
}