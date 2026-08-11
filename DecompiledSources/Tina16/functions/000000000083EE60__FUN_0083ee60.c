/* Ghidra address: 0083ee60 */
/* Ghidra symbol: FUN_0083ee60 */


int FUN_0083ee60(longlong param_1,int *param_2,longlong *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar3 = *param_2 + *(int *)(param_1 + 0xb0);
  if (iVar3 < *(int *)(param_1 + 0xa8)) {
    FUN_0041ddd0(local_20,PTR_PTR_020034e0);
    FUN_0083d530(local_20[0]);
  }
  if ((*(int *)(param_1 + 0xb0) < 0) && (*param_3 != 0)) {
    local_24 = 0;
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar2 = (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xb0)) + -1;
    if (iVar1 <= iVar2) {
      iVar2 = (iVar2 - iVar1) + 1;
      do {
        local_24 = local_24 + *(int *)(*param_3 + (longlong)iVar1 * 4);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    local_24 = *(int *)(param_1 + 0xb0) * param_4;
  }
  if (*param_3 != 0) {
    FUN_0083d910(param_3,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),param_4);
  }
  *param_2 = iVar3;
  if (*(int *)(param_1 + 0xa8) <= *param_5) {
    if ((*(int *)(param_1 + 0xb0) < 0) &&
       (*param_5 < *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xb0))) {
      *param_5 = *(int *)(param_1 + 0xa8);
    }
    else {
      *param_5 = *param_5 + *(int *)(param_1 + 0xb0);
    }
  }
  FUN_00414480(local_20);
  return local_24;
}

