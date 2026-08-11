/* Ghidra address: 011115a0 */
/* Ghidra symbol: FUN_011115a0 */


int FUN_011115a0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = 0;
  bVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x498 + (ulonglong)bVar2 * 0x20) != '\0') {
      iVar1 = iVar1 + 1;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 != 9);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

