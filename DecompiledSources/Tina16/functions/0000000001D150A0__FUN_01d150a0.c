/* Ghidra address: 01d150a0 */
/* Ghidra symbol: FUN_01d150a0 */


undefined8 FUN_01d150a0(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  if ((ushort)(param_2 - 0x40U) < 0x40) {
    uVar1 = CONCAT71(0x7fffffe07ffff,
                     (1L << ((byte)(param_2 - 0x40U) & 0x3f) & 0x7fffffe07fffffeU) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

