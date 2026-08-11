/* Ghidra address: 01a4d100 */
/* Ghidra symbol: FUN_01a4d100 */


undefined1 FUN_01a4d100(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x60))(local_20,local_res8[0]);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  local_21 = 1 < iVar1;
  FUN_00410f20(local_20);
  FUN_00414480(local_res8);
  return local_21;
}

