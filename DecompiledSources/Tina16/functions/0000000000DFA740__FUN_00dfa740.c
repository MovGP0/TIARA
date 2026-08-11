/* Ghidra address: 00dfa740 */
/* Ghidra symbol: FUN_00dfa740 */


void FUN_00dfa740(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x325) == '\0') && (0.0 < *(double *)(param_1 + 0x450))) {
    iVar2 = *(int *)(param_1 + 0x308) + -1;
    iVar1 = 1;
    if (0 < iVar2) {
      do {
        FUN_017dc850(*(undefined8 *)(param_1 + 0xd8),0,*(undefined8 *)(param_1 + 0x450),iVar1,iVar1)
        ;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

