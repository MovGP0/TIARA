/* Ghidra address: 004c9810 */
/* Ghidra symbol: FUN_004c9810 */


void FUN_004c9810(longlong param_1)

{
  char cVar1;
  
  do {
    while (cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30)),
          cVar1 != '\0') {
      if (cVar1 == '\n') {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else if ((byte)(cVar1 - 0x21U) < 0xdf) {
        return;
      }
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    }
    FUN_004c9720(param_1);
  } while (*(char *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30)) != '\0');
  return;
}

