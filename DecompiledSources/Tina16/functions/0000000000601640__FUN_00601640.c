/* Ghidra address: 00601640 */
/* Ghidra symbol: FUN_00601640 */


ushort FUN_00601640(ushort *param_1)

{
  return *param_1 ^ (ushort)((uint)*(undefined4 *)param_1 >> 0x10) ^ param_1[2] ^ param_1[3] ^
         param_1[4] ^ param_1[5] ^ param_1[6] ^ param_1[7] ^ param_1[8] ^
         (ushort)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
}

