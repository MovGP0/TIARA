/* Ghidra address: 00808eb0 */
/* Ghidra symbol: FUN_00808eb0 */


void FUN_00808eb0(longlong param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_2c;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 8) - **(int **)(param_1 + 0x60);
  if (iVar3 < 0) {
LAB_00808f01:
    iVar3 = (int)param_2[0x13];
  }
  else {
    if (param_3 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),1) <<
               (param_3 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) goto LAB_00808f01;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 0xc) -
          *(int *)(*(longlong *)(param_1 + 0x60) + 4);
  if (-1 < iVar4) {
    if (param_3 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),1) <<
               (param_3 & 0x1f) & 6U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_00808f4e;
  }
  iVar4 = *(int *)((longlong)param_2 + 0x9c);
LAB_00808f4e:
  if ((param_3 == 1) && (*(char *)((longlong)param_2 + 0x4d2) == '\x02')) {
    local_2c = FUN_007fd7d0(param_2);
    iVar2 = FUN_007fd800(param_2);
    iVar3 = thunk_FUN_0410f747(0x3d);
  }
  else {
    local_2c = **(int **)(param_1 + 0x60);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x60) + 4);
  }
  if (param_3 == 1) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 4);
    *piVar1 = *piVar1 + iVar4;
  }
  else if (param_3 == 2) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0xc);
    *piVar1 = *piVar1 - iVar4;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x60) + 0xc);
  }
  else if (param_3 == 3) {
    **(int **)(param_1 + 0x60) = **(int **)(param_1 + 0x60) + iVar3;
  }
  else if (param_3 == 4) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 8);
    *piVar1 = *piVar1 - iVar3;
    local_2c = *(int *)(*(longlong *)(param_1 + 0x60) + 8);
  }
  (**(code **)(*param_2 + 400))(param_2,local_2c,iVar2,iVar3,iVar4);
  if (*(char *)((longlong)param_2 + 0x4d2) == '\x02') {
    iVar3 = iVar3 - local_2c;
    iVar4 = iVar4 - iVar2;
  }
  iVar2 = (int)param_2[0x13];
  if ((iVar2 != iVar3) || (*(int *)((longlong)param_2 + 0x9c) != iVar4)) {
    if (param_3 < 4) {
      if (param_3 == 3) {
        **(int **)(param_1 + 0x60) = **(int **)(param_1 + 0x60) - (iVar3 - iVar2);
      }
      else if (param_3 == 1) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 4);
        *piVar1 = *piVar1 - (iVar4 - *(int *)((longlong)param_2 + 0x9c));
      }
      else if (param_3 == 2) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0xc);
        *piVar1 = *piVar1 + (iVar4 - *(int *)((longlong)param_2 + 0x9c));
      }
    }
    else if (param_3 == 4) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
    }
    else if (param_3 == 5) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0xc);
      *piVar1 = *piVar1 + (iVar4 - *(int *)((longlong)param_2 + 0x9c));
    }
  }
  return;
}

