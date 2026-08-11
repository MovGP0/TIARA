/* Ghidra address: 01cb0080 */
/* Ghidra symbol: FUN_01cb0080 */


int FUN_01cb0080(longlong param_1)

{
  int iVar1;
  
  iVar1 = 7;
  do {
    if (*(char *)(param_1 + 0x25 + (longlong)iVar1) != '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  return 1;
}

