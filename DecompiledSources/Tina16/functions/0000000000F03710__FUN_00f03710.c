/* Ghidra address: 00f03710 */
/* Ghidra symbol: FUN_00f03710 */


void FUN_00f03710(longlong param_1,char param_2)

{
  if (((*(ushort *)(param_1 + 0x4f) & 0x10) == 0) || (param_2 != *(char *)(param_1 + 0x4e))) {
    *(char *)(param_1 + 0x4e) = param_2;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 0x10;
    FUN_004b1830(param_1,0);
  }
  return;
}

