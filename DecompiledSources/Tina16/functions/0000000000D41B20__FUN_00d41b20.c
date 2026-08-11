/* Ghidra address: 00d41b20 */
/* Ghidra symbol: FUN_00d41b20 */


bool FUN_00d41b20(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  return (uVar1 & 7) == 7;
}

