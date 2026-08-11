/* Ghidra address: 012dd160 */
/* Ghidra symbol: FUN_012dd160 */


undefined8 FUN_012dd160(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (param_4 <= *(int *)(lVar2 + 0x10) + -1) {
    iVar1 = FUN_00416db0(local_res18[0],L"PARAMETER_PARAM");
    if (iVar1 == 0) {
      lVar2 = FUN_004aeac0(lVar2,param_4);
      FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 8));
    }
    else {
      iVar1 = FUN_00416db0(local_res18[0],L"PARAMETER_SYMBOL");
      if (iVar1 == 0) {
        lVar2 = FUN_004aeac0(lVar2,param_4);
        FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        iVar1 = FUN_00416db0(local_res18[0],L"PARAMETER_UNIT");
        if (iVar1 == 0) {
          lVar2 = FUN_004aeac0(lVar2,param_4);
          FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x18));
        }
      }
    }
  }
  FUN_00414480(local_res18);
  return param_2;
}

