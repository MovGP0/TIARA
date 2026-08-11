/* Ghidra address: 010bb710 */
/* Ghidra symbol: FUN_010bb710 */


void FUN_010bb710(longlong *param_1,undefined8 param_2)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  (**(code **)(*param_1 + 0x120))(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  FUN_01cf09b0(param_1,param_2);
  return;
}

