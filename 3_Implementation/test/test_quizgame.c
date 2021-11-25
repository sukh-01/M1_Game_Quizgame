#include "../unity/unity.h"
#include "../inc/quizhead.h"

/* Prototypes for all the test functions */
void test_show_record(void);
void test_reset_score(void);
void test_help(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_show_record);
  RUN_TEST(test_reset_score);
  RUN_TEST(test_help);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_year_entered(void){
    TEST_ASSERT_EQUAL(test_show_record);
}

void test_month_entered(void){
    TEST_ASSERT_EQUAL(test_reset_score);
    
}

void test_date_entered(void){
    TEST_ASSERT_EQUAL(test_help);
}
