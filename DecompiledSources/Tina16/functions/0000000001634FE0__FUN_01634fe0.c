/* Ghidra address: 01634fe0 */
/* Ghidra symbol: FUN_01634fe0 */


int FUN_01634fe0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_00416db0(local_res18[0],L"IntReserved1258");
  if (iVar1 == 0) {
    iVar1 = FUN_016351f0(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x14) + iVar1;
  }
  else {
    iVar1 = FUN_01634d80(param_1,param_2);
    if (iVar1 == -1) {
      FUN_01613110(L"NOT_CONNECTED");
    }
  }
  FUN_00414480(local_res18);
  return iVar1;
}

