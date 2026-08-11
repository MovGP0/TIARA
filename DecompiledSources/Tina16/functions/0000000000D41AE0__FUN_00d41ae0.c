/* Ghidra address: 00d41ae0 */
/* Ghidra symbol: FUN_00d41ae0 */


undefined8 FUN_00d41ae0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
  if (((uVar1 & 0xe) != 0xe) &&
     (uVar1 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18)), (uVar1 & 0xf) != 0xf)) {
    return 0;
  }
  return 1;
}

