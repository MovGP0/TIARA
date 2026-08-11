/* Ghidra address: 0194e770 */
/* Ghidra symbol: FUN_0194e770 */


undefined1 FUN_0194e770(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x350))(param_1,local_28);
  iVar1 = (**(code **)(*local_28 + 0xb0))(local_28,param_2);
  local_19 = iVar1 != -1;
  FUN_00410f20(local_28);
  return local_19;
}

