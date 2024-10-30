#include "pch.h"
#include "CppUnitTest.h"
#include "../LabAP5.4/LabAP5.4.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
    TEST_CLASS(UnitTest54)
    {
    public:

        TEST_METHOD(TestS0)
        {
            int K = 1;
            int N = 3;
            double result = S0(K, N);
            double expected = 0;
            for (int i = K; i <= N; i++)
            {
                expected += sin(1.0 * i) * cos(1.0 * i) / (1 + pow(sin(1.0 * i), 2));
            }

            Assert::AreEqual(expected, result, 1e-9);
        }


        TEST_METHOD(TestS1)
        {
            int K = 1;
            int N = 3;
            double result = S1(K, N, K);
            double expected = S0(K, N);
            Assert::AreEqual(expected, result, 1e-9);
        }

        TEST_METHOD(TestS2)
        {
            int K = 1;
            int N = 3;
            double result = S2(K, N, N);
            double expected = S0(K, N);
            Assert::AreEqual(expected, result, 1e-9);
        }

        TEST_METHOD(TestS3)
        {
            int K = 1;
            int N = 3;
            double result = S3(K, N, K, 0.0);
            double expected = S0(K, N);
            Assert::AreEqual(expected, result, 1e-9);
        }

        TEST_METHOD(TestS4)
        {
            int K = 1;
            int N = 3;
            double result = S4(K, N, N, 0.0);
            double expected = S0(K, N);
            Assert::AreEqual(expected, result, 1e-9);
        }
    };
}
