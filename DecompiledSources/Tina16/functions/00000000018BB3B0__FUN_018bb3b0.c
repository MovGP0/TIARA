/* Ghidra address: 018bb3b0 */
/* Ghidra symbol: FUN_018bb3b0 */


void FUN_018bb3b0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  (**(code **)(*param_1 + 0x28))(param_1);
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 10) = param_3;
  FUN_018baf70(param_1);
  return;
}

