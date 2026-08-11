/* Ghidra address: 01771110 */
/* Ghidra symbol: FUN_01771110 */


undefined8 * FUN_01771110(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(param_1,local_res10[0],&DAT_017711c4,&DAT_017711d4,1);
  iVar1 = FUN_004170c0(L":TINADIR\\",*param_1,1);
  if (0 < iVar1) {
    FUN_00416e20(param_1,iVar1,9);
  }
  FUN_00414480(local_res10);
  return param_1;
}

