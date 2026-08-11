/* Ghidra address: 007438b0 */
/* Ghidra symbol: FUN_007438b0 */


void FUN_007438b0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x49c) = param_2;
  FUN_00654450(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

