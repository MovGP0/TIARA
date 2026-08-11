/* Ghidra address: 008145b0 */
/* Ghidra symbol: FUN_008145b0 */


int FUN_008145b0(longlong param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c) + -1;
  if (-1 < iVar1) {
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
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return -1;
}

