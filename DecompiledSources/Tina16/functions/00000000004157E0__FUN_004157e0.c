/* Ghidra address: 004157e0 */
/* Ghidra symbol: FUN_004157e0 */


void FUN_004157e0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  uint local_2c;
  
  sVar4 = 0;
  local_2c = 0;
  iVar3 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar2 = *(longlong *)(param_3 + (longlong)(int)local_2c * 8);
      if ((lVar2 != 0) && (sVar4 = *(short *)(lVar2 + -0xc), sVar4 != 0)) break;
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar6 = false;
  iVar5 = 0;
  local_2c = 0;
  iVar3 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar2 = *(longlong *)(param_3 + (longlong)(int)local_2c * 8);
      if (lVar2 != 0) {
        if (lVar2 == *param_1) {
          bVar6 = local_2c == 0;
        }
        iVar5 = iVar5 + *(int *)(lVar2 + -4);
        if (iVar5 < 0) {
          FUN_00410ab0();
        }
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (!bVar6) {
    lVar2 = FUN_004143b0(iVar5,sVar4);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*param_1 + -4);
    FUN_00415d10(param_1,iVar5,sVar4);
    lVar2 = *param_1;
  }
  local_2c = (uint)bVar6;
  if ((int)local_2c <= param_2 + -1) {
    iVar5 = ((param_2 + -1) - local_2c) + 1;
    do {
      lVar1 = *(longlong *)(param_3 + (longlong)(int)local_2c * 8);
      if (lVar1 != 0) {
        FUN_00409a70(lVar1,lVar2 + iVar3,(longlong)*(int *)(lVar1 + -4));
        iVar3 = iVar3 + *(int *)(lVar1 + -4);
      }
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (!bVar6) {
    if (*param_1 != 0) {
      FUN_004144d0(param_1);
    }
    *param_1 = lVar2;
  }
  return;
}

