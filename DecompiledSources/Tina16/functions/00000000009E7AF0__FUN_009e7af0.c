/* Ghidra address: 009e7af0 */
/* Ghidra symbol: FUN_009e7af0 */


undefined8 * FUN_009e7af0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b90(param_2,param_3);
  uVar1 = FUN_009e9660(param_1);
  FUN_00415e60(&local_10,uVar1);
  iVar2 = FUN_00417170(local_10,*param_2,1);
  if (iVar2 == 0) {
    FUN_00414520(param_2);
  }
  else {
    FUN_00416660(param_2,iVar2 + -1);
  }
  FUN_00414520(&local_10);
  return param_2;
}

