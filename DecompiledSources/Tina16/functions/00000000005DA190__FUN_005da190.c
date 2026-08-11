/* Ghidra address: 005da190 */
/* Ghidra symbol: FUN_005da190 */


undefined1 FUN_005da190(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 0x90))(param_1,param_2,local_20);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  local_21 = 0 < iVar1;
  FUN_00410f20(local_20);
  return local_21;
}

