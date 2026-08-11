/* Ghidra address: 014c13f0 */
/* Ghidra symbol: FUN_014c13f0 */


undefined8 FUN_014c13f0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0x30) || (0x39 < param_2)) {
    if ((param_2 < 0x41) || (0x5a < param_2)) {
      if ((param_2 < 0x61) || (0x7a < param_2)) {
        if (param_2 == 0x21) {
          uVar1 = 1;
        }
        else if ((param_2 < 0x27) || (0x2a < param_2)) {
          if ((param_2 < 0x2d) || (0x2e < param_2)) {
            if (param_2 == 0x5f) {
              uVar1 = 1;
            }
            else if (param_2 == 0x7e) {
              uVar1 = 1;
            }
            else {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

