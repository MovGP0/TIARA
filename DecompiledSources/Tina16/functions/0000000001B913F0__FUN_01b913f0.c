/* Ghidra address: 01b913f0 */
/* Ghidra symbol: FUN_01b913f0 */


longlong FUN_01b913f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  lVar1 = FUN_007fc180(&PTR_FUN_01b90e58,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0064de00(*(undefined8 *)(lVar1 + 0x6b8),local_res8);
  FUN_0064de00(*(undefined8 *)(lVar1 + 0x6c0),local_res10);
  FUN_008059a0(lVar1);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414560(&local_res8,2);
  return lVar1;
}

