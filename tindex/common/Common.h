#ifndef TINDEX_COMMON_H_
#define TINDEX_COMMON_H_

#include <assert.h>
#include <iostream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <map>
#include <fcntl.h>
#include <tindex/common/ErrorCode.h>

typedef uint32_t ErrorCode;


#define DELETE_AND_SET_NULL(object)  if (object) { delete object; object = NULL;}

#define TINDEX_BEGIN_NAMESPACE(x) namespace Tindex { namespace x{ 

#define TINDEX_END_NAMESPACE(x) } }

#define TINDEX_USE_ROOT_NAMESPACE using namespace Tindex;

#define TINDEX_USE_NAMESPACE(x) using namespace Tindex::x

#define TINDEX_NS(x) Tindex::x

#include <tr1/memory>
#define TINDEX_TYPEDEF_PTR(x) typedef std::tr1::shared_ptr<x> x##Ptr

#define TEST_DATA "test_data"

static std::string getExecPath() {    
    char exec_name[2048] = {0};                                                                                                             
    readlink("/proc/self/exe", exec_name, 2048);                                                                                            
    char *dname = dirname(exec_name);                                                                                                       
    return std::string(dname);                                                                                                              
};

#endif /*TINDEX_COMMON_H_*/

