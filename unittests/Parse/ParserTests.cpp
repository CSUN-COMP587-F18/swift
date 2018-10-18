#include "swift/Parse/Parser.h"
#include "gtest/gtest.h"

using namespace swift;
using namespace llvm;

/**
given some arguments, the parser should 
be able to retrieve the default argument
and retrieve the next argument in line 
*/

class DefaultArgumentInfoTest : public ::testing:: test{};

Test_A() {

   llvm::SmallVector<DefaultArgumentInitializer *, 4> ParsedContexts= {
      //takes arguments and returns the next argument
      
          let index1 = 2;//intial argument
          let index2 = 6;
           
      };
   NextIndex = DefaultArgumentInfo::DefaultArgumentInitializer(4,ParsedContexts);
   EXPECT_EQ = (NextIndex++); //we are expecting to receive the next argument/index
 
}


Test_B(){
   llvm::SmallVector<DefaultArgumentInitializer *, 4> ParsedContexts= {
      
          let index1 = 7;//intial argument
          let index2 = 11;
           
      };
   NextIndex = DefaultArgumentInfo::DefaultArgumentInitializer(4,ParsedContexts);
   EXPECT_EQ = (NextIndex++);
 

}

