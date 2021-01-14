#include "gtest/gtest.h"
#include "complex.h"

TEST(OpPlus, t1)
{
Complex a, b, expect;
a.real = 2;
a.imaginary = 1;
b.real = 4;
b.imaginary = 2;
expect = a + b;

EXPECT_TRUE(expect.real == 6);
EXPECT_TRUE(expect.imaginary == 3);
}

TEST(OpMinus, t2)
{
Complex a,b, expect;
a.real = 0.8;
a.imaginary = 0.2;
b.real = 0.4;
b.imaginary = 0.1;
expect = a - b;

EXPECT_TRUE(expect.real == 0.4);
EXPECT_TRUE(expect.imaginary == 0.1);
}

TEST(OpMulti, t3)
{
Complex a,b, expect;
a.real = 3;
a.imaginary = 2;
b.real = 5;
b.imaginary = 6;
expect = a * b;

EXPECT_TRUE(expect.real == 3);
EXPECT_TRUE(expect.imaginary == 28);
}

TEST(OpDiv, t4)
{
Complex a,b, expect;
a.real = 6;
a.imaginary = 6;
b.real = 3;
b.imaginary = 3;
expect = a / b;
EXPECT_TRUE(expect.real == 2);
EXPECT_TRUE(expect.imaginary == 0);
}

TEST(OpMinusAndMulti, t5)
{
Complex num1 = {3, 4};
Complex a,b, expect;
a.real = 2;
a.imaginary = 3;
b.real = 1;
b.imaginary = 6;
expect = a - b * a;
EXPECT_TRUE(expect.real == 18);
EXPECT_TRUE(expect.imaginary == -12);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}