/* Ghidra address: 01c2e080 */
/* Ghidra symbol: FUN_01c2e080 */


void FUN_01c2e080(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x418 + (longlong)iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x400);
  iVar1 = 0;
  do {
    iVar2 = 0;
    if (iVar1 < 0x3ff) {
      while (*(char *)(param_1 + 0x18 + (longlong)(iVar1 + iVar2)) != '\0') {
        iVar2 = iVar2 + 1;
      }
      *(char *)(param_1 + 0x418 + (longlong)iVar1) = (char)iVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x400);
  return;
}

