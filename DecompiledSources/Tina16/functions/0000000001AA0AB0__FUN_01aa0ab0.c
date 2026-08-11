/* Ghidra address: 01aa0ab0 */
/* Ghidra symbol: FUN_01aa0ab0 */


undefined8 FUN_01aa0ab0(byte param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 3) {
    if (param_1 == 2) {
      uVar1 = 0;
    }
    else if (param_1 == 0) {
      uVar1 = 7;
      if (param_2 == '\x03') {
        uVar1 = 5;
      }
    }
    else if (param_1 == 1) {
      uVar1 = 6;
      if (param_2 == '\x02') {
        uVar1 = 3;
      }
      if (param_2 == '\x05') {
        uVar1 = 4;
      }
    }
  }
  else if (param_1 == 3) {
    uVar1 = 2;
  }
  else if (param_1 == 4) {
    uVar1 = 1;
  }
  return uVar1;
}

