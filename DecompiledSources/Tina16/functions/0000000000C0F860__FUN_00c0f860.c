/* Ghidra address: 00c0f860 */
/* Ghidra symbol: FUN_00c0f860 */


undefined8 FUN_00c0f860(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_30 [4];
  
  local_30[0] = FUN_00bfaa10(param_1);
  uVar1 = (**(code **)(*param_1 + 0x3a0))(param_1,local_30);
  return uVar1;
}

