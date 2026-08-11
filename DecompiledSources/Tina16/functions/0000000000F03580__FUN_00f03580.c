/* Ghidra address: 00f03580 */
/* Ghidra symbol: FUN_00f03580 */


void FUN_00f03580(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 4;
  FUN_004b1830(param_1,0);
  return;
}

