/* Ghidra address: 007d65e0 */
/* Ghidra symbol: FUN_007d65e0 */


void FUN_007d65e0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_2 + 0x48))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      pbVar4 = (byte *)FUN_0060a050(param_2,iVar5);
      iVar3 = (**(code **)(*param_2 + 0x60))();
      if (-1 < iVar3 + -1) {
        do {
          bVar1 = FUN_0040c770(((double)pbVar4[2] * 0.299 + (double)pbVar4[1] * 0.587 +
                               (double)*pbVar4 * 0.114) *
                               ((double)*(byte *)(*(longlong *)(param_1 + 0xb0) + 0xb4) / 255.0));
          pbVar4[2] = bVar1;
          pbVar4[1] = bVar1;
          *pbVar4 = bVar1;
          pbVar4 = pbVar4 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

