/* Ghidra address: 0157d600 */
/* Ghidra symbol: FUN_0157d600 */


void FUN_0157d600(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xf7ff;
  }
  else {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | 0x800;
  }
  return;
}

