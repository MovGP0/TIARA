/* Ghidra address: 016acf40 */
/* Ghidra symbol: FUN_016acf40 */


undefined8 FUN_016acf40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_10;
  
  local_10 = 0;
  FUN_016ace20(param_1,&local_10,*param_3);
  if (local_10 == 0) {
    FUN_004144d0(param_3);
  }
  else {
    iVar1 = FUN_00417250(local_10,*param_3,1);
    iVar2 = 0;
    if (local_10 != 0) {
      iVar2 = *(int *)(local_10 + -4);
    }
    uVar3 = 0;
    if (*param_3 != 0) {
      uVar3 = *(undefined4 *)(*param_3 + -4);
    }
    FUN_00415ad0(param_3,*param_3,iVar1 + iVar2,uVar3);
  }
  FUN_00414bf0(param_2,local_10);
  FUN_004144d0(&local_10);
  return param_2;
}

