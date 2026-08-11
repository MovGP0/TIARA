/* Ghidra address: 004161c0 */
/* Ghidra symbol: FUN_004161c0 */


void FUN_004161c0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_2c;
  
  bVar5 = false;
  iVar3 = 0;
  local_2c = 0;
  iVar4 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar2 = *(longlong *)(param_3 + (longlong)(int)local_2c * 8);
      if (lVar2 != 0) {
        if (lVar2 == *param_1) {
          bVar5 = local_2c == 0;
        }
        iVar3 = iVar3 + *(int *)(lVar2 + -4);
        if (iVar3 < 0) {
          FUN_00410ab0();
        }
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (!bVar5) {
    lVar2 = FUN_00414350(iVar3);
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*param_1 + -4);
    FUN_004169f0(param_1,iVar3);
    lVar2 = *param_1;
  }
  local_2c = (uint)bVar5;
  if ((int)local_2c <= param_2 + -1) {
    iVar3 = ((param_2 + -1) - local_2c) + 1;
    do {
      lVar1 = *(longlong *)(param_3 + (longlong)(int)local_2c * 8);
      if (lVar1 != 0) {
        FUN_00409a70(lVar1,lVar2 + (longlong)iVar4 * 2,(longlong)(*(int *)(lVar1 + -4) * 2));
        iVar4 = iVar4 + *(int *)(lVar1 + -4);
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (!bVar5) {
    if (*param_1 != 0) {
      FUN_00414480(param_1);
    }
    *param_1 = lVar2;
  }
  return;
}

