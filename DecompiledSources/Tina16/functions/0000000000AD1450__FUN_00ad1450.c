/* Ghidra address: 00ad1450 */
/* Ghidra symbol: FUN_00ad1450 */


void FUN_00ad1450(longlong param_1)

{
  short sVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x80) == '\0') {
    while ((sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20), sVar1 != 0x3c && (sVar1 != 0))
          ) {
      FUN_00ad13c0(param_1);
    }
  }
  return;
}

