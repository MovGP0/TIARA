/* Ghidra address: 00f03550 */
/* Ghidra symbol: FUN_00f03550 */


void FUN_00f03550(longlong param_1,int param_2)

{
  if (((*(ushort *)(param_1 + 0x4f) & 1) == 0) || (param_2 != *(int *)(param_1 + 0x18))) {
    *(int *)(param_1 + 0x18) = param_2;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 1;
    FUN_004b1830(param_1,0);
  }
  return;
}

