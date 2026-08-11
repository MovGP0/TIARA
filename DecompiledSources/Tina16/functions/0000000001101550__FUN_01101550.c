/* Ghidra address: 01101550 */
/* Ghidra symbol: FUN_01101550 */


void FUN_01101550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int *param_5)

{
  FUN_01102440(param_1);
  FUN_01ab2ef0(param_1,param_2,param_3,param_4,param_5);
  *param_5 = *param_5 + *(int *)(param_1 + 0x110);
  FUN_011024b0(param_1);
  return;
}

