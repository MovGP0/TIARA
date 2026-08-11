/* Ghidra address: 004159c0 */
/* Ghidra symbol: FUN_004159c0 */


int FUN_004159c0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    iVar2 = 0;
  }
  else if (param_1 == 0) {
    iVar2 = -*(int *)(param_2 + -4);
  }
  else if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  else {
    iVar2 = *(int *)(param_1 + -4);
    iVar1 = *(int *)(param_2 + -4);
    iVar5 = iVar2;
    if (iVar1 < iVar2) {
      iVar5 = iVar1;
    }
    pbVar3 = (byte *)FUN_00415ab0();
    pbVar4 = (byte *)FUN_00415ab0(param_2);
    for (; 0 < iVar5; iVar5 = iVar5 + -2) {
      if ((uint)*pbVar3 - (uint)*pbVar4 != 0) {
        return (uint)*pbVar3 - (uint)*pbVar4;
      }
      if (iVar5 == 1) break;
      if ((uint)pbVar3[1] - (uint)pbVar4[1] != 0) {
        return (uint)pbVar3[1] - (uint)pbVar4[1];
      }
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    }
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

