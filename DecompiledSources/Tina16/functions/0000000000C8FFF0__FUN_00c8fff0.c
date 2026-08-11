/* Ghidra address: 00c8fff0 */
/* Ghidra symbol: FUN_00c8fff0 */


void FUN_00c8fff0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 0x50) == 1)) {
    FUN_00c8f050(param_1,6,1,param_2 == '\0');
  }
  return;
}

