/* Ghidra address: 00eba7f0 */
/* Ghidra symbol: FUN_00eba7f0 */


undefined8 FUN_00eba7f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(*DAT_0202ea90 + 0xb0))(DAT_0202ea90,local_res10[0]);
  if (iVar1 < 0) {
    FUN_00414480(param_1);
  }
  else {
    lVar2 = (**(code **)(*DAT_0202ea90 + 0x30))(DAT_0202ea90,iVar1);
    FUN_00414ad0(param_1,*(undefined8 *)(lVar2 + 0x20));
  }
  FUN_00414480(local_res10);
  return param_1;
}

