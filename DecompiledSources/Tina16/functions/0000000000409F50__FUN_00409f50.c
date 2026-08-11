/* Ghidra address: 00409f50 */
/* Ghidra symbol: FUN_00409f50 */


void FUN_00409f50(uint param_1,char param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 != '\0') {
      uVar1 = FUN_0040a090((param_1 & 0x3f) << 7);
      if (uVar1 != 0) {
        uVar1 = uVar1 >> 7 & 0x3f;
        param_1 = param_1 & ~uVar1;
        FUN_00409f10(0,uVar1);
      }
    }
    if (param_1 != 0) {
      if ((param_1 & 0x20) != 0) {
        FUN_00409f10(0,0x20);
        FUN_004098e0(6);
      }
      if ((param_1 & 0x10) != 0) {
        FUN_00409f10(0,0x10);
        FUN_004098e0(9);
      }
      if ((param_1 & 8) != 0) {
        FUN_00409f10(0,8);
        FUN_004098e0(8);
      }
      if ((param_1 & 4) != 0) {
        FUN_00409f10(0,4);
        FUN_004098e0(7);
      }
      if ((param_1 & 1) != 0) {
        FUN_00409f10(0,1);
        FUN_004098e0(6);
      }
    }
  }
  return;
}

