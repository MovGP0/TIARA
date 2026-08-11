/* Ghidra address: 01c2e0e0 */
/* Ghidra symbol: FUN_01c2e0e0 */


undefined8 FUN_01c2e0e0(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte local_108 [256];
  
  pbVar1 = local_108;
  pbVar3 = local_108;
  iVar4 = 0x100;
  do {
    *pbVar1 = 0;
    pbVar1 = pbVar1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  pbVar1 = local_108 + iVar5;
  *pbVar1 = *pbVar1 + 1;
  uVar2 = CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
  iVar4 = 0x100;
  do {
    if (1 < *pbVar3) {
      uVar2 = 0;
    }
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}

