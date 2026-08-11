/* Ghidra address: 01877960 */
/* Ghidra symbol: FUN_01877960 */


void FUN_01877960(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar2 = FUN_00418c80();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8);
        if (lVar1 != 0) {
          FUN_00410f20(lVar1);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_01877840(param_1);
  return;
}

