/* Ghidra address: 00650a80 */
/* Ghidra symbol: FUN_00650a80 */


void FUN_00650a80(longlong *param_1,undefined8 param_2)

{
  FUN_0064d3e0(param_1,param_1);
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    FUN_0064e190(param_1,1);
  }
  if ((*(uint *)(param_1 + 0x14) & 8) != 0) {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 2;
  }
  FUN_00650970(param_1,param_2,0,0);
  return;
}

