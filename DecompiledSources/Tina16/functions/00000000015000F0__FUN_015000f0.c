/* Ghidra address: 015000f0 */
/* Ghidra symbol: FUN_015000f0 */


void FUN_015000f0(longlong param_1)

{
  if (1 < *(ushort *)(param_1 + 0x782)) {
    *(ushort *)(param_1 + 0x782) = *(ushort *)(param_1 + 0x782) >> 1;
  }
  return;
}

