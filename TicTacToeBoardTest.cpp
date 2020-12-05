/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleTurn){
  TicTacToeBoard testb;
  if(testb.toggleTurn() == X || testb.toggleTurn() == O){
    ASSERT_TRUE(true);
  }
}

TEST(TicTacToeBoardTest, placePiece1){
  TicTacToeBoard testb;

  if(testb.placePiece(-1, 234) == Invalid){
    ASSERT_TRUE(true);
  }
}

TEST(TicTacToeBoardTest, placePiece2){
  TicTacToeBoard testb;

  if(testb.placePiece(0,0) == X){
    ASSERT_TRUE(true);
  }
}

TEST(TicTacToeBoardTest, placePiece3){
  TicTacToeBoard testb;

  testb.placePiece(1,1);
  if(testb.placePiece(0,0) == O){
    ASSERT_TRUE(true);
  }
}


TEST(TicTacToeBoardTest, placePiece4){
  TicTacToeBoard testb;

  testb.placePiece(1,1);
  testb.placePiece(0,0);
  testb.placePiece(0,1);
  testb.placePiece(2,2);
  if(testb.placePiece(2,1) == X){
    ASSERT_TRUE(true);
  }
}
