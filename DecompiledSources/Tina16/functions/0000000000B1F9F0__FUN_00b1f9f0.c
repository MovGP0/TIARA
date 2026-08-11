/* Ghidra address: 00b1f9f0 */
/* Ghidra symbol: FUN_00b1f9f0 */


int FUN_00b1f9f0(longlong param_1,short param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      psVar1 = (short *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
      if (*psVar1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

