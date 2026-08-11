/* Ghidra address: 015949b0 */
/* Ghidra symbol: FUN_015949b0 */


void FUN_015949b0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = -4;
  pcVar1 = (char *)(param_1 + 3);
  do {
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar1 = pcVar1 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  return;
}

