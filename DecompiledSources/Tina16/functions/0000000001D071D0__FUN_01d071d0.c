/* Ghidra address: 01d071d0 */
/* Ghidra symbol: FUN_01d071d0 */


void FUN_01d071d0(longlong param_1,int param_2)

{
  short *psVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      psVar1 = (short *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x3f0),iVar3);
      if (param_2 == *psVar1) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3f0),iVar3);
        FUN_004095f0(uVar2);
        FUN_004ae870(*(undefined8 *)(param_1 + 0x3f0),iVar3);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

