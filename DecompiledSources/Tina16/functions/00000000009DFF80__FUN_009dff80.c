/* Ghidra address: 009dff80 */
/* Ghidra symbol: FUN_009dff80 */


undefined8 FUN_009dff80(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  iVar4 = 0;
  if (*param_2 != 0) {
    iVar4 = *(int *)(*param_2 + -4);
  }
  iVar4 = iVar4 + 1;
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      FUN_00416780(local_30,*(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2));
      iVar2 = FUN_004170c0(local_30[0],*param_2,1);
      if ((iVar2 != 0) && (iVar2 < iVar4)) {
        iVar4 = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  if (iVar1 < iVar4) {
    FUN_00414480(&DAT_01e42c68);
  }
  else {
    FUN_00416780(&DAT_01e42c68,*(undefined2 *)(*param_2 + -2 + (longlong)iVar4 * 2));
  }
  FUN_00416dc0(&local_38,*param_2,1,iVar4 + -1);
  FUN_0043ea00(param_1,local_38);
  FUN_00416e20(param_2,1,iVar4);
  if (param_4 != '\0') {
    while( true ) {
      iVar4 = 0;
      if (*param_2 != 0) {
        iVar4 = *(int *)(*param_2 + -4);
      }
      if (iVar4 < 1) break;
      FUN_00416780(&local_40,*(undefined2 *)*param_2);
      iVar4 = FUN_004170c0(local_40,param_3,1);
      if (iVar4 == 0) break;
      FUN_00416e20(param_2,1,1);
    }
  }
  FUN_00414560(&local_40,3);
  return param_1;
}

