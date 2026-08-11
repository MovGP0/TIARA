/* Ghidra address: 00f04220 */
/* Ghidra symbol: FUN_00f04220 */


undefined2 FUN_00f04220(longlong param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
  return CONCAT11((char)(uVar1 >> 8),(uVar1 & 0x100) != 0);
}

