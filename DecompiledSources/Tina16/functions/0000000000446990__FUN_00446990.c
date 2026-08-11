/* Ghidra address: 00446990 */
/* Ghidra symbol: FUN_00446990 */


int FUN_00446990(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; (iVar2 < 0x15 && (*(char *)(param_1 + 0x77 + (longlong)iVar2) != '\0'));
      iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

