/* Ghidra address: 0065de70 */
/* Ghidra symbol: FUN_0065de70 */


void FUN_0065de70(undefined8 param_1,short param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != 9) {
    if (param_2 == 0x12) {
      FUN_0064fca0(lVar1,0x127,0x20002,0);
      return;
    }
    if (3 < (ushort)(param_2 - 0x25U)) {
      return;
    }
  }
  FUN_0064fca0(lVar1,0x127,0x10002,0);
  return;
}

