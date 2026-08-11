/* Ghidra address: 01cc7650 */
/* Ghidra symbol: FUN_01cc7650 */


undefined4 FUN_01cc7650(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4);
  (**(code **)(*param_1 + 0x48))(param_1,param_3);
  *(int *)((longlong)param_1 + 0x24) = (int)param_1[4];
  return uVar1;
}

