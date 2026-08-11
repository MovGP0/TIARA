/* Ghidra address: 00c24ad0 */
/* Ghidra symbol: FUN_00c24ad0 */


void FUN_00c24ad0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  pbVar3 = *(byte **)(lVar2 + 0x30);
  pbVar1 = pbVar3 + (uint)*(ushort *)(lVar2 + 0x4d) * (uint)*(ushort *)(lVar2 + 0x4f);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    piVar5 = (int *)(param_2 + 4);
    do {
      *piVar5 = iVar4;
      piVar5[-1] = 0;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  for (; pbVar3 < pbVar1; pbVar3 = pbVar3 + 1) {
    piVar5 = (int *)(param_2 + (ulonglong)*pbVar3 * 8);
    *piVar5 = *piVar5 + 1;
  }
  return;
}

