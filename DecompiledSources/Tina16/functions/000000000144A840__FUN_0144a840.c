/* Ghidra address: 0144a840 */
/* Ghidra symbol: FUN_0144a840 */


void FUN_0144a840(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
    FUN_019b7940(param_1);
    iVar2 = *(int *)(param_1 + 0x4c);
    if ((*(int *)(param_1 + 0x48) <= iVar2) && (iVar1 = 1, 0 < iVar2)) {
      do {
        dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xd8 + (longlong)iVar1 * 8));
        if (dVar3 < 1e-20) {
          FUN_0040c850(*(undefined8 *)(param_1 + 0x220 + (longlong)iVar1 * 8));
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

