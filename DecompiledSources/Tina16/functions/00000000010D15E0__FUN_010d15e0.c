/* Ghidra address: 010d15e0 */
/* Ghidra symbol: FUN_010d15e0 */


undefined8 FUN_010d15e0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int aiStack_850 [512];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  char local_2a;
  char local_29 [9];
  
  FUN_010d1500(param_3,local_29);
  FUN_010d1500(param_4,&local_2a);
  if ((param_2 == 0x10f) || (param_2 == 0x10e)) {
    uVar1 = 1;
  }
  else {
    if (param_2 == 0x110) {
      local_50 = DAT_01f1a520;
      uStack_48 = DAT_01f1a528;
      uStack_40 = DAT_01f1a530;
      uStack_38 = DAT_01f1a538;
      uStack_30 = DAT_01f1a540;
    }
    else if (param_2 == 0x111) {
      local_50 = DAT_01f1a544;
      uStack_48 = DAT_01f1a54c;
      uStack_40 = DAT_01f1a554;
      uStack_38 = DAT_01f1a55c;
      uStack_30 = DAT_01f1a564;
    }
    else if (param_2 == 0x112) {
      local_50 = DAT_01f1a568;
      uStack_48 = DAT_01f1a570;
      uStack_40 = DAT_01f1a578;
      uStack_38 = DAT_01f1a580;
      uStack_30 = DAT_01f1a588;
    }
    if (*(int *)((longlong)&local_50 + (longlong)local_2a * 4 + (longlong)local_29[0] * 0xc) == 1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

