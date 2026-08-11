/* Ghidra address: 00f02fe0 */
/* Ghidra symbol: FUN_00f02fe0 */


void FUN_00f02fe0(longlong param_1)

{
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 4;
  FUN_00f042d0(*(undefined8 *)(param_1 + 0x20));
  FUN_004b1830(param_1,0);
  return;
}

