/* Ghidra address: 00788eb0 */
/* Ghidra symbol: FUN_00788eb0 */


undefined8 FUN_00788eb0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d70(*(undefined8 *)(param_1 + 0x18));
  return CONCAT71((int7)((uVar1 & 0x4000) >> 8),(uVar1 & 0x4000) == 0x4000);
}

