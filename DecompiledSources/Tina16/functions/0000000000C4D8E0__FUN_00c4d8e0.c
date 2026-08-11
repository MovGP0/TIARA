/* Ghidra address: 00c4d8e0 */
/* Ghidra symbol: FUN_00c4d8e0 */


undefined8 FUN_00c4d8e0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
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
      FUN_00416780(local_40,*(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2));
      iVar2 = FUN_004170c0(local_40[0],*param_2,1);
      if ((iVar2 != 0) && (iVar2 < iVar4)) {
        iVar4 = iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416dc0(&local_48,*param_2,1,iVar4 + -1);
  FUN_0043ea00(param_1,local_48);
  FUN_00416e20(param_2,1,iVar4);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return param_1;
}

