/* Ghidra address: 00800450 */
/* Ghidra symbol: FUN_00800450 */


void FUN_00800450(longlong param_1,int param_2)

{
  if ((param_2 != *(int *)(param_1 + 0x520)) && (0x23 < param_2)) {
    *(int *)(param_1 + 0x520) = param_2;
  }
  return;
}

