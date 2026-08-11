/* Ghidra address: 01b1f6c0 */
/* Ghidra symbol: FUN_01b1f6c0 */


undefined8 FUN_01b1f6c0(undefined8 param_1,ushort param_2,ushort param_3)

{
  undefined8 uVar1;
  
  if ((0x60 < param_2) && (param_2 < 0x7b)) {
    param_2 = param_2 - 0x20;
  }
  if ((0x60 < param_3) && (param_3 < 0x7b)) {
    param_3 = param_3 - 0x20;
  }
  if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == param_3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

