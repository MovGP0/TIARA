/* Ghidra address: 00787ad0 */
/* Ghidra symbol: FUN_00787ad0 */


undefined8 FUN_00787ad0(undefined8 param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00787d50(param_1);
  uVar1 = uVar1 & 0x800000;
  if (uVar1 != 0x800000) {
    uVar1 = FUN_00787d70(param_1);
    uVar1 = uVar1 & 0x200;
    if (uVar1 != 0x200) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}

