/* Ghidra address: 00d4bf40 */
/* Ghidra symbol: FUN_00d4bf40 */


bool FUN_00d4bf40(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  return (uVar1 & 0x40) != 0x40;
}

