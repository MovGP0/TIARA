/* Ghidra address: 010f0e10 */
/* Ghidra symbol: FUN_010f0e10 */


void FUN_010f0e10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = (int)param_1[9];
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x4c);
  *(int *)(param_1 + 0x11) = (int)param_1[10];
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x54);
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0x128))(param_1,param_2,param_3);
  return;
}

