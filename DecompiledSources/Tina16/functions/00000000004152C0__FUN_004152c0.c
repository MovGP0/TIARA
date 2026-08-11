/* Ghidra address: 004152c0 */
/* Ghidra symbol: FUN_004152c0 */


void FUN_004152c0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_118 [256];
  
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (param_4 < 1) {
    param_4 = 1;
  }
  else {
    iVar1 = *param_2 + 1;
    if (iVar1 < param_4) {
      param_4 = iVar1;
    }
  }
  param_4 = param_4 + -1;
  uVar5 = (uint)local_118[0];
  iVar1 = (uint)*param_2 - param_4;
  iVar2 = param_4 + (uint)local_118[0];
  if (param_3 < iVar2 + iVar1) {
    if (param_3 < iVar2) {
      iVar1 = 0;
      uVar5 = param_3 - param_4;
    }
    else {
      iVar1 = (param_3 - param_4) - (uint)local_118[0];
    }
  }
  *param_2 = (char)param_4 + (char)uVar5 + (char)iVar1;
  if (0 < (int)uVar5) {
    if (0 < iVar1) {
      do {
        param_2[(int)(param_4 + uVar5 + iVar1)] = param_2[param_4 + iVar1];
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = 1;
    if (0 < (int)uVar5) {
      pbVar4 = local_118;
      do {
        pbVar4 = pbVar4 + 1;
        param_2[param_4 + iVar1] = *pbVar4;
        iVar1 = iVar1 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

