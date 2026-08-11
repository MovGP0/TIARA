/* Ghidra address: 01899590 */
/* Ghidra symbol: FUN_01899590 */


void FUN_01899590(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x4d4) = param_2;
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}

