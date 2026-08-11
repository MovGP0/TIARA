/* Ghidra address: 019c3060 */
/* Ghidra symbol: FUN_019c3060 */


void FUN_019c3060(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = -1;
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar4 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x80) + -8);
  }
  iVar3 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 4);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

