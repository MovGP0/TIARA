/* Ghidra address: 013a5c20 */
/* Ghidra symbol: FUN_013a5c20 */


void FUN_013a5c20(ushort *param_1)

{
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 4),(uint)*param_1 * 2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

