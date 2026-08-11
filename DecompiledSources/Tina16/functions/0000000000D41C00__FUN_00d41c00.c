/* Ghidra address: 00d41c00 */
/* Ghidra symbol: FUN_00d41c00 */


undefined8 FUN_00d41c00(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  if (((uVar1 & 0xc) != 0xc) &&
     (uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18)), (uVar1 & 0xd) != 0xd)) {
    return 0;
  }
  return 1;
}

