/* Ghidra address: 01500110 */
/* Ghidra symbol: FUN_01500110 */


void FUN_01500110(longlong param_1)

{
  if (*(ushort *)(param_1 + 0x782) < 0xfffe) {
    *(short *)(param_1 + 0x782) = *(short *)(param_1 + 0x782) << 1;
  }
  return;
}

