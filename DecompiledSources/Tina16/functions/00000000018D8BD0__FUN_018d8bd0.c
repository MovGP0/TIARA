/* Ghidra address: 018d8bd0 */
/* Ghidra symbol: FUN_018d8bd0 */


int FUN_018d8bd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0xfc);
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 4) = 0;
      if (*(short *)(*(longlong *)(param_1 + 0x130) + -2 + (longlong)(iVar2 + 1) * 2) == 0x20) {
        bVar4 = true;
      }
      else {
        bVar4 = *(short *)(*(longlong *)(param_1 + 0x130) + -2 + (longlong)(iVar2 + 1) * 2) == 0xa0;
      }
      if (bVar4) {
        iVar1 = iVar1 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar2 * 4) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

