/* Ghidra address: 01663780 */
/* Ghidra symbol: FUN_01663780 */


void FUN_01663780(longlong param_1,undefined8 param_2,int param_3,longlong param_4,char param_5,
                 undefined1 param_6,longlong param_7,int param_8)

{
  *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) - param_3;
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x8d);
  FUN_0165dfb0(param_1,0x8c);
  FUN_0165dfb0(param_1,0x24);
  FUN_0165e0c0(param_1,*(int *)(param_1 + 0x13ac0) * 8);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xba);
  FUN_0165e030(param_1,(longlong)(param_3 + -1));
  if (param_4 != 0) {
    FUN_0165dfb0(param_1,0x49);
    FUN_0165dfb0(param_1,0xb8);
    FUN_0165e150(param_1,param_4);
    if (param_7 != 1) {
      FUN_0165dfb0(param_1,0x49);
      FUN_0165dfb0(param_1,0xb9);
      FUN_0165e150(param_1,param_7);
    }
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xb8);
    FUN_0165e150(param_1,param_1 + 0x110);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0x8b);
    FUN_0165dfb0(param_1,0);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0x89);
    FUN_0165dfb0(param_1,0x44);
    FUN_0165dfb0(param_1,0x24);
    FUN_0165dfb0(param_1,0x20);
    if (param_8 != -1) {
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0xb8);
      FUN_0165e030(param_1,(longlong)param_8);
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x89);
      FUN_0165dfb0(param_1,0x44);
      FUN_0165dfb0(param_1,0x24);
      FUN_0165dfb0(param_1,0x28);
    }
  }
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xbb);
  FUN_0165e150(param_1,param_2);
  FUN_0165dfb0(param_1,0xff);
  FUN_0165dfb0(param_1,0xd3);
  if (param_5 == '\0') {
    FUN_0165dfb0(param_1,0xf2);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xf);
    FUN_0165dfb0(param_1,0x11);
    FUN_0165dfb0(param_1,4);
    FUN_0165dfb0(param_1,0x24);
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xdd);
    FUN_0165dfb0(param_1,4);
    FUN_0165dfb0(param_1,0x24);
    FUN_01663480(param_1);
  }
  else {
    FUN_01663c80(param_1,param_6);
  }
  return;
}

