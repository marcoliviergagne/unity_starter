#include <stddef.h>
#include "unity/unity.h"
#include "unity/solution_c_bas_niveau.c"


void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_strlen_p(void)
{
    // On s'attend d'obtenir un resultat = 16 +/- 0. On teste.
    TEST_ASSERT_INT_WITHIN(0,16, strlen_p("calculmalongueur"));

    TEST_ASSERT_INT_WITHIN(0,17, strlen_p("calculmalongueur"));

    TEST_ASSERT_INT_WITHIN(0,16, strlen_p("calculmalongueur"));

    // allllooootoicomment ca va

}

int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_strlen_p); /* On lance le test de la fonction */
    return UNITY_END();
}