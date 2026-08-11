/* Ghidra address: 01cc75f0 */
/* Ghidra symbol: FUN_01cc75f0 */


void FUN_01cc75f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
  (**(code **)(*param_1 + 0x48))(param_1,param_3);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  return;
}

