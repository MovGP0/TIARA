/* Ghidra address: 00d41bc0 */
/* Ghidra symbol: FUN_00d41bc0 */


undefined8 FUN_00d41bc0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_00787d50(uVar1);
  if (((uVar2 & 4) != 4) && (uVar2 = FUN_00787d50(uVar1), (uVar2 & 9) != 9)) {
    return 0;
  }
  return 1;
}

