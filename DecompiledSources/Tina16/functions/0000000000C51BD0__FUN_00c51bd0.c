/* Ghidra address: 00c51bd0 */
/* Ghidra symbol: FUN_00c51bd0 */


void FUN_00c51bd0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined8 *)(param_1 + 0x80) = param_2;
  }
  return;
}

