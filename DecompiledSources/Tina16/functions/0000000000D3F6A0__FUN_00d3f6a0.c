/* Ghidra address: 00d3f6a0 */
/* Ghidra symbol: FUN_00d3f6a0 */


undefined8 FUN_00d3f6a0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_00787d50(uVar1);
  uVar2 = uVar2 & 0xc00000;
  if (uVar2 != 0xc00000) {
    uVar2 = FUN_00787d50(uVar1);
    uVar2 = uVar2 & 0x80000;
    if (uVar2 != 0x80000) {
      uVar2 = FUN_00787d50(uVar1);
      uVar2 = uVar2 & 0x40000;
      if (uVar2 != 0x40000) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

