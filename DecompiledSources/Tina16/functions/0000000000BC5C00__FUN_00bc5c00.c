/* Ghidra address: 00bc5c00 */
/* Ghidra symbol: FUN_00bc5c00 */


void FUN_00bc5c00(undefined8 *param_1,int param_2,char param_3)

{
  uint uVar1;
  
  if (param_2 < 5) {
    if (param_2 == 4) {
      uVar1 = 8;
    }
    else if (param_2 == 1) {
      uVar1 = 1;
    }
    else if (param_2 == 2) {
      uVar1 = 2;
    }
    else {
      if (param_2 != 3) goto LAB_00bc5c60;
      uVar1 = 4;
    }
  }
  else if (param_2 == 5) {
    uVar1 = 0x10;
  }
  else {
    if (param_2 != 6) {
LAB_00bc5c60:
      (**(code **)*param_1)(param_1,0x3f5);
      return;
    }
    uVar1 = 0x20;
  }
  if (param_3 == '\0') {
    *(uint *)((longlong)param_1 + 0x19c) = *(uint *)((longlong)param_1 + 0x19c) & ~uVar1;
  }
  else {
    *(uint *)((longlong)param_1 + 0x19c) = *(uint *)((longlong)param_1 + 0x19c) | uVar1;
  }
  return;
}

