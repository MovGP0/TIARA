/* Ghidra address: 00f04020 */
/* Ghidra symbol: FUN_00f04020 */


void FUN_00f04020(longlong param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
  *puVar1 = *puVar1 | 0x100;
  FUN_004b1830(*(undefined8 *)(param_1 + 8),1);
  return;
}

