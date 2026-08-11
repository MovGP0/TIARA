/* Ghidra address: 00b15900 */
/* Ghidra symbol: FUN_00b15900 */


undefined8 FUN_00b15900(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_004144d0(param_1);
  FUN_00415980(local_20,3,&LAB_00b15a44,param_3,&LAB_00b15a44);
  iVar1 = FUN_00417250(local_20[0],param_2,1);
  if (0 < iVar1) {
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + -4);
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00415ad0(&local_10,param_2,iVar1 + iVar2 + 8,uVar3);
    iVar1 = FUN_00417250(&LAB_00b15a44,local_10,1);
    if (0 < iVar1) {
      FUN_00415ad0(&local_10,local_10,1,iVar1 + -1);
      FUN_00414bf0(param_1,local_10);
    }
  }
  FUN_004144d0(local_20);
  FUN_004144d0(&local_10);
  return param_1;
}

