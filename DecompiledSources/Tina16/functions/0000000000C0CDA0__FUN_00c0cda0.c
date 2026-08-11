/* Ghidra address: 00c0cda0 */
/* Ghidra symbol: FUN_00c0cda0 */


int FUN_00c0cda0(longlong param_1)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  psVar2 = *(short **)(param_1 + 0xd8);
  if (*psVar2 == 9) {
    iVar1 = 1;
    *(undefined1 *)(param_1 + 0xd7) = 1;
  }
  else {
    for (; (*psVar2 == 0x20 && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x110) + 0x618)));
        iVar1 = iVar1 + 1) {
      psVar2 = psVar2 + 1;
      *(undefined1 *)(param_1 + 0xd7) = 1;
    }
    if ((*psVar2 == 9) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x110) + 0x618))) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

