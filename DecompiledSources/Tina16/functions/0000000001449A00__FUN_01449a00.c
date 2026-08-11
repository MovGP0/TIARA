/* Ghidra address: 01449a00 */
/* Ghidra symbol: FUN_01449a00 */


void FUN_01449a00(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
    FUN_019b7940(param_1);
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar1 = 1;
    if (0 < iVar2) {
      do {
        if (iVar1 + 1 <= *(int *)(param_1 + 0x4c)) {
          iVar3 = (*(int *)(param_1 + 0x4c) - (iVar1 + 1)) + 1;
          do {
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

