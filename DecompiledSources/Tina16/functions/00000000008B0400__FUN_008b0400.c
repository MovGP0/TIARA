/* Ghidra address: 008b0400 */
/* Ghidra symbol: FUN_008b0400 */


int FUN_008b0400(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = 0;
  local_34 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  iVar1 = local_34;
  if (((0 < iVar2) && (iVar2 = FUN_00876ad0(param_2,param_3,param_4), 0 < iVar2)) &&
     (iVar4 = 0, -1 < iVar2 + -1)) {
    do {
      FUN_00416780(local_30,*(undefined2 *)(param_2 + -2 + (longlong)(param_4 + iVar4) * 2));
      iVar3 = (**(code **)PTR_PTR_020018b0)(local_30[0],param_1);
      iVar1 = param_4 + iVar4;
      if (iVar3 != 0) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_34;
    } while (iVar2 != 0);
  }
  local_34 = iVar1;
  FUN_00414480(local_30);
  return local_34;
}

