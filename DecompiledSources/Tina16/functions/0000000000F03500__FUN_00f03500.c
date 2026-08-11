/* Ghidra address: 00f03500 */
/* Ghidra symbol: FUN_00f03500 */


void FUN_00f03500(longlong param_1,char param_2)

{
  if (((*(ushort *)(param_1 + 0x4f) & 8) == 0) || (param_2 != *(char *)(param_1 + 0x4d))) {
    *(char *)(param_1 + 0x4d) = param_2;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 8;
    FUN_004b1830(param_1,0);
  }
  return;
}

