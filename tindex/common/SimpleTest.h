#ifndef TINDEX_SIMPLETEST_H
#define TINDEX_SIMPLETEST_H

#include <tindex/common/Common.h>

TINDEX_BEGIN_NAMESPACE(common);

class SimpleTest
{
public:
    SimpleTest();
    ~SimpleTest();
private:
    SimpleTest(const SimpleTest &);
    SimpleTest& operator=(const SimpleTest &);
public:
    bool test() {
        return true;
    }
private:
};

TINDEX_TYPEDEF_PTR(SimpleTest);

TINDEX_END_NAMESPACE(common);

#endif //TINDEX_SIMPLETEST_H
