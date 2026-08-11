/* Ghidra address: 00652660 */
/* Ghidra symbol: FUN_00652660 */


void FUN_00652660(longlong param_1)

{
  if (((*(uint *)(param_1 + 0xa4) & 0x4000) == 0) && ((*(ushort *)(param_1 + 0x34) & 2) == 0)) {
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x9c);
  }
  return;
}

