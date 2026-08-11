/* Ghidra address: 00b6e420 */
/* Ghidra symbol: FUN_00b6e420 */


void FUN_00b6e420(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x97) = *(char *)(param_1 + 0x97) + '\x01';
  for (iVar2 = 7; (0 < iVar2 && (*(char *)(param_1 + 0x90 + (longlong)iVar2) == '\0'));
      iVar2 = iVar2 + -1) {
    pcVar1 = (char *)(param_1 + 0x90 + (longlong)(iVar2 + -1));
    *pcVar1 = *pcVar1 + '\x01';
  }
  return;
}

