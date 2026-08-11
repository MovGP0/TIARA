/* Ghidra address: 00ad1b80 */
/* Ghidra symbol: FUN_00ad1b80 */


void FUN_00ad1b80(longlong param_1)

{
  short sVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x80) == '\0') {
    while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20), sVar1 != 0x3c && (sVar1 != 0))
          ) {
      FUN_00ad1af0(param_1);
    }
  }
  return;
}

