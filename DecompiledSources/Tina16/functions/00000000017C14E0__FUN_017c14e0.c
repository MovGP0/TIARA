/* Ghidra address: 017c14e0 */
/* Ghidra symbol: FUN_017c14e0 */


void FUN_017c14e0(longlong *param_1,undefined8 param_2)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  (**(code **)(*param_1 + 0x120))(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  FUN_01cf09b0(param_1,param_2);
  return;
}

