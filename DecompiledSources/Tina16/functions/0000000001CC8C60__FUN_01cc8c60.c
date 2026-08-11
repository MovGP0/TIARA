/* Ghidra address: 01cc8c60 */
/* Ghidra symbol: FUN_01cc8c60 */


void FUN_01cc8c60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_4);
  (**(code **)(*param_1 + 0x90))(param_1,param_3,local_30,local_38);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  return;
}

