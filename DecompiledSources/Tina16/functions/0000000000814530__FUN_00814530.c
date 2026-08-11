/* Ghidra address: 00814530 */
/* Ghidra symbol: FUN_00814530 */


int FUN_00814530(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x20) +
                    0x86) != '\0') &&
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x20) + 0x81
                   ) != '\0')) {
        if (param_2 == '\0') {
          return iVar1;
        }
        *(int *)(param_1 + 8) = iVar1;
        FUN_00814f60();
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

