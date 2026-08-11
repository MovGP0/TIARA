/* Ghidra address: 019ee590 */
/* Ghidra symbol: FUN_019ee590 */


undefined8 FUN_019ee590(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = local_res18[0];
  iVar2 = 0;
  if (local_res18[0] != 0) {
    iVar2 = *(int *)(local_res18[0] + -4);
  }
  if (iVar2 < param_4) {
    FUN_00414b50(local_20,local_res18[0]);
    iVar2 = 0;
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + -4);
    }
    param_4 = param_4 - iVar2;
    if (0 < param_4) {
      do {
        FUN_00416ad0(local_20,&LAB_019ee684);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    FUN_00414ad0(param_2,local_20[0]);
  }
  else {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

