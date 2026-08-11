/* Ghidra address: 00e08170 */
/* Ghidra symbol: FUN_00e08170 */


void FUN_00e08170(longlong param_1)

{
  if ((*(char *)(param_1 + 0x3d) == '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
  }
  return;
}

