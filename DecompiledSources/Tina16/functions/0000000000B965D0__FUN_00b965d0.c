/* Ghidra address: 00b965d0 */
/* Ghidra symbol: FUN_00b965d0 */


undefined8 * FUN_00b965d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414ad0(param_1,param_2);
  FUN_00441640(&local_18,*param_1);
  FUN_00441920(&local_20,*param_1);
  iVar1 = 0;
  if (local_18 != 0) {
    iVar1 = *(int *)(local_18 + -4);
  }
  if ((iVar1 < 2) || (*(short *)(local_18 + 2) != 0x3a)) {
    FUN_00414480(&local_10);
  }
  else {
    FUN_00416dc0(&local_10,local_18,1,2);
    FUN_00416e20(&local_18,1,2);
  }
  while ((local_18 != 0 || (local_10 != 0))) {
    iVar1 = FUN_005fdff0(param_3,*param_1);
    if (iVar1 <= param_4) break;
    iVar1 = FUN_00416db0(local_18,L"\\...\\");
    if (iVar1 == 0) {
      FUN_00414480(&local_10);
      FUN_00414b50(&local_18,L"...\\");
    }
    else if (local_18 == 0) {
      FUN_00414480(&local_10);
    }
    else {
      FUN_00b964e0(&local_18);
    }
    FUN_00416cd0(param_1,3,local_10,local_18,local_20);
  }
  FUN_00414560(&local_20,3);
  return param_1;
}

