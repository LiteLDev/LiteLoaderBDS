// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_XOROSHIRORANDOM
#include "Extra/XoroshiroRandomAPI.hpp"
#undef EXTRA_INCLUDE_PART_XOROSHIRORANDOM
class XoroshiroRandom {
#include "Extra/XoroshiroRandomAPI.hpp"
public:
    /*0*/ virtual ~XoroshiroRandom();
    /*1*/ virtual int nextInt();
    /*2*/ virtual int nextInt(int);
    /*3*/ virtual __int64 nextLong();
    /*4*/ virtual bool nextBoolean();
    /*5*/ virtual float nextFloat();
    /*6*/ virtual double nextDouble();
    /*7*/ virtual double nextGaussianDouble();
    /*8*/ virtual void consumeCount(unsigned int);
    /*9*/ virtual std::unique_ptr<class IRandom> fork();
    /*10*/ virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();


protected:

private:
};