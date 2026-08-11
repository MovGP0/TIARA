/* Ghidra address: 00b6f5d0 */
/* Ghidra symbol: FUN_00b6f5d0 */


void FUN_00b6f5d0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  
  *(char *)(param_1 + 0xa7) = *(char *)(param_1 + 0xa7) + '\x01';
  for (iVar2 = 0xf; (0 < iVar2 && (*(char *)(param_1 + 0x98 + (longlong)iVar2) == '\0'));
      iVar2 = iVar2 + -1) {
    pcVar1 = (char *)(param_1 + 0x98 + (longlong)(iVar2 + -1));
    *pcVar1 = *pcVar1 + '\x01';
  }
  return;
}

