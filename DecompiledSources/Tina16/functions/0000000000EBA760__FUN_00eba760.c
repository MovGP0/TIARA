/* Ghidra address: 00eba760 */
/* Ghidra symbol: FUN_00eba760 */


undefined8 FUN_00eba760(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_10 = 0;
  iVar1 = (**(code **)(*DAT_0202ea90 + 0xb0))(DAT_0202ea90,local_res8[0]);
  if (-1 < iVar1) {
    local_10 = (**(code **)(*DAT_0202ea90 + 0x30))(DAT_0202ea90,iVar1);
  }
  FUN_00414480(local_res8);
  return local_10;
}

