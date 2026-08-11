/* Ghidra address: 004151b0 */
/* Ghidra symbol: FUN_004151b0 */


void FUN_004151b0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte local_118 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  uVar1 = (uint)local_118[0];
  if (local_118[0] == 0) {
    *param_1 = 0;
  }
  else {
    if (param_3 < 1) {
      param_3 = 1;
    }
    else if ((int)uVar1 < param_3) {
      param_3 = uVar1 + 1;
    }
    iVar2 = (uVar1 - param_3) + 1;
    if (param_4 < 0) {
      param_4 = 0;
    }
    else if (iVar2 < param_4) {
      param_4 = iVar2;
    }
    *param_1 = (byte)param_4;
    iVar2 = 1;
    if (0 < param_4) {
      do {
        param_1 = param_1 + 1;
        *param_1 = local_118[param_3 + iVar2 + -1];
        iVar2 = iVar2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

