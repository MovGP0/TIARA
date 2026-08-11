/* Ghidra address: 00b156f0 */
/* Ghidra symbol: FUN_00b156f0 */


undefined8 FUN_00b156f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_4 == 0) {
    FUN_004144d0(&local_38);
  }
  else {
    FUN_00415980(&local_38,5,&LAB_00b158f8,param_3,&LAB_00b158f8,param_4,&LAB_00b158f8);
  }
  FUN_00415980(&local_40,3,&LAB_00b158f8,param_3,&LAB_00b158f8);
  iVar1 = FUN_00417250(local_40,param_2,1);
  if (iVar1 < 1) {
    FUN_004156b0(param_1,param_2,local_38);
  }
  else {
    FUN_00415ad0(local_20,param_2,1,iVar1 + -1);
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + -4);
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00415ad0(&local_30,param_2,iVar1 + iVar2 + 8,uVar3);
    iVar1 = FUN_00417250(&LAB_00b158f8,local_30,1);
    if (iVar1 < 1) {
      FUN_004144d0(param_1);
    }
    else {
      uVar3 = 0;
      if (local_30 != 0) {
        uVar3 = *(undefined4 *)(local_30 + -4);
      }
      FUN_00415ad0(&local_28,local_30,iVar1 + 4,uVar3);
      FUN_00415980(param_1,3,local_20[0],local_38,local_28);
    }
  }
  FUN_00414590(&local_40,5);
  return param_1;
}

