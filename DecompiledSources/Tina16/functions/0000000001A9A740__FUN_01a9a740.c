/* Ghidra address: 01a9a740 */
/* Ghidra symbol: FUN_01a9a740 */


void FUN_01a9a740(longlong *param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x2c) = param_2;
  (**(code **)(*param_1 + 0xf0))(param_1,(param_2 & 2) != 0);
  return;
}

