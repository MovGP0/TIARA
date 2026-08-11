/* Ghidra address: 0165e1e0 */
/* Ghidra symbol: FUN_0165e1e0 */


void FUN_0165e1e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  
  if (param_2 < 6) {
    if (param_2 == 5) {
      uVar1 = 0xdc08;
    }
    else if (param_2 == 1) {
      uVar1 = 0xdd00;
    }
    else if (param_2 == 2) {
      uVar1 = 0xdd18;
    }
    else if (param_2 == 3) {
      uVar1 = 0xdc00;
    }
    else {
      if (param_2 != 4) {
        return;
      }
      uVar1 = 0xdc20;
    }
  }
  else if (param_2 == 6) {
    uVar1 = 0xdc30;
  }
  else if (param_2 == 7) {
    uVar1 = 0xdc28;
  }
  else {
    if (param_2 != 100) {
      return;
    }
    uVar1 = 0xdd10;
  }
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xb8);
  FUN_0165e150(param_1,param_3);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,uVar1 >> 8);
  FUN_0165dfb0(param_1,uVar1);
  return;
}

