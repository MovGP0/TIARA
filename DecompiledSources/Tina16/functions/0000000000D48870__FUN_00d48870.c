/* Ghidra address: 00d48870 */
/* Ghidra symbol: FUN_00d48870 */


undefined8 FUN_00d48870(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  return CONCAT71((int7)((uVar1 & 0x8000) >> 8),(uVar1 & 0x8000) == 0x8000);
}

