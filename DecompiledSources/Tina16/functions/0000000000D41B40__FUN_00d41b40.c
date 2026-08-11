/* Ghidra address: 00d41b40 */
/* Ghidra symbol: FUN_00d41b40 */


bool FUN_00d41b40(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  return (uVar1 & 0xb) == 0xb;
}

