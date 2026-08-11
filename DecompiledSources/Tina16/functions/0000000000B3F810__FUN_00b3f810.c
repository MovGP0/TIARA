/* Ghidra address: 00b3f810 */
/* Ghidra symbol: FUN_00b3f810 */


void FUN_00b3f810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2f4 [16];
  undefined1 local_2e4;
  undefined1 local_2e3 [39];
  undefined1 local_2bc;
  undefined1 local_2b4 [90];
  undefined1 local_25a [258];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [88];
  undefined1 local_e0 [88];
  undefined1 local_88 [16];
  undefined1 local_78;
  undefined1 local_77 [39];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_48 [24];
  
  thunk_FUN_03e76b53(local_48);
  FUN_0040d200(param_3,0x40,0);
  FUN_00409a70(local_48,param_2,0x10);
  FUN_00409a70(local_48,param_3,0x10);
  FUN_0040d200(param_4,0x10,0);
  FUN_00409a70(param_3,local_2f4,0x40);
  FUN_00b3f3f0(param_1,local_88);
  FUN_00b3ee80(local_e0);
  FUN_00b3eec0(local_e0,local_88,0x40);
  FUN_00b3f2c0(local_e0,local_148);
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 5;
  FUN_00b3ee80(local_2b4);
  do {
    iVar4 = iVar1;
    if (0x40 - iVar2 < 5) {
      iVar4 = 0x40 - iVar2;
    }
    FUN_00409a70(local_148 + iVar3,local_88 + iVar2,(longlong)iVar4);
    iVar2 = iVar2 + iVar4;
    if (iVar2 == 0x40) {
      FUN_00b3eec0(local_2b4,local_88,0x40);
      iVar1 = 5 - iVar4;
      iVar2 = 0;
      iVar3 = iVar4;
    }
    else {
      iVar3 = 0;
      iVar1 = 5;
      FUN_00409a70(param_2,local_88 + iVar2,0x10);
      iVar2 = iVar2 + 0x10;
    }
  } while (iVar2 != 0x10);
  local_78 = 0x80;
  FUN_0040d200(local_77,0x2f,0);
  local_50 = 0x80;
  local_4f = 10;
  FUN_00b3eec0(local_2b4,local_88,0x40);
  FUN_00b3f2c0(local_2b4,param_5);
  FUN_00b3f340(0,local_25a,param_5);
  FUN_00b3f1b0(local_2f4,0x10,local_25a);
  local_2e4 = 0x80;
  FUN_0040d200(local_2e3,0x2f,0);
  local_2bc = 0x80;
  FUN_00b3ee80(local_138);
  FUN_00b3eec0(local_138,local_2f4,0x40);
  FUN_00b3f2c0(local_138,local_158);
  FUN_00409a70(local_158,param_4,0x10);
  FUN_00b3f1b0(param_4,0x10,local_25a);
  return;
}

