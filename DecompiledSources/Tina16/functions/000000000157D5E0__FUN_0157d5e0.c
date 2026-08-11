/* Ghidra address: 0157d5e0 */
/* Ghidra symbol: FUN_0157d5e0 */


undefined2 FUN_0157d5e0(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 4) & 0x800;
  return CONCAT11((char)(uVar1 >> 8),uVar1 == 0x800);
}

