/* Ghidra address: 004b6d10 */
/* Ghidra symbol: FUN_004b6d10 */


void FUN_004b6d10(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x4a)) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(char *)(param_1 + 0x48) != '\0')) {
    FUN_004b67b0(param_1,0);
    FUN_004b67b0(param_1,1);
  }
  return;
}

