/* Ghidra address: 00ea1290 */
/* Ghidra symbol: FUN_00ea1290 */


undefined8 FUN_00ea1290(uint param_1,ushort *param_2)

{
  if (param_1 < 0x10000) {
    *param_2 = (ushort)param_1;
    return 1;
  }
  *param_2 = (ushort)(param_1 - 0x10000 >> 10) | 0xd800;
  param_2[1] = (ushort)(param_1 - 0x10000) & 0x3ff | 0xdc00;
  return 2;
}

