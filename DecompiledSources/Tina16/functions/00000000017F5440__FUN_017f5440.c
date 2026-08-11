/* Ghidra address: 017f5440 */
/* Ghidra symbol: FUN_017f5440 */


undefined8 * FUN_017f5440(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414bf0(param_1,local_res10[0]);
  FUN_00416880(local_20,*param_1);
  iVar1 = FUN_004170c0(&DAT_017f5548,local_20[0],1);
  if (0 < iVar1) {
    lVar2 = FUN_00414df0(param_1);
    *(undefined1 *)(lVar2 + -1 + (longlong)iVar1) = 0x2c;
  }
  FUN_00416880(&local_28,*param_1);
  iVar1 = FUN_004413f0(&LAB_017f5558,local_28);
  if (0 < iVar1) {
    lVar2 = FUN_00414df0(param_1);
    *(undefined1 *)(lVar2 + -1 + (longlong)iVar1) = 0x2c;
  }
  FUN_00414560(&local_28,2);
  FUN_004144d0(local_res10);
  return param_1;
}

