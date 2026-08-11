/* Ghidra address: 00831b30 */
/* Ghidra symbol: FUN_00831b30 */


uint FUN_00831b30(uint param_1)

{
  if ((short)param_1 == 0x2f) {
    param_1 = (uint)*(ushort *)(PTR_DAT_02004830 + 10);
  }
  else if ((short)param_1 == 0x3a) {
    param_1 = (uint)*(ushort *)(PTR_DAT_02004830 + 0xc);
  }
  return param_1;
}

