/* Ghidra address: 01cc8cb0 */
/* Ghidra symbol: FUN_01cc8cb0 */


undefined4 FUN_01cc8cb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_48 [8];
  undefined1 local_40 [32];
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4);
  (**(code **)(*param_1 + 0x90))(param_1,param_3,local_40,local_48);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  return uVar1;
}

