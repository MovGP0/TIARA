/* Ghidra address: 00c3bf30 */
/* Ghidra symbol: FUN_00c3bf30 */


longlong FUN_00c3bf30(undefined8 param_1)

{
  longlong lVar1;
  int local_35;
  int local_31;
  int local_2d;
  
  FUN_01d30f00(param_1,&local_35,0xc);
  if ((local_31 < 0x105) && (local_35 == 100)) {
    lVar1 = FUN_004095c0(0x3a);
    if (lVar1 != 0) {
      FUN_0040d200(lVar1,0x3a,0);
      FUN_01d30f00(param_1,lVar1 + 0xc,local_2d);
      FUN_00409a70(&local_35,lVar1,0xc);
      *(undefined4 *)(lVar1 + 8) = 0x2e;
      if (local_31 < 0x102) {
        *(undefined8 *)(lVar1 + 0x2e) = 0x4020000000000000;
      }
      *(undefined4 *)(lVar1 + 0x36) = 0x80;
    }
  }
  else if ((local_31 < 0x103) && (local_35 == 0x65)) {
    lVar1 = FUN_004095c0(0x28);
    if (lVar1 != 0) {
      FUN_0040d200(lVar1,0x28,0);
      FUN_01d30f00(param_1,lVar1 + 0xc,local_2d);
      FUN_00409a70(&local_35,lVar1,0xc);
      *(undefined4 *)(lVar1 + 8) = 0x1c;
      *(undefined1 *)(lVar1 + 0x1a) = 0;
      *(undefined2 *)(lVar1 + 0x1b) = 100;
      *(undefined4 *)(lVar1 + 0x1d) = 0xfffffffe;
      *(undefined1 *)(lVar1 + 0x21) = 0;
      *(undefined2 *)(lVar1 + 0x22) = 100;
      *(undefined4 *)(lVar1 + 0x24) = 0xfffffffe;
    }
  }
  else if ((local_31 < 0x104) && (local_35 == 0x6a)) {
    lVar1 = FUN_004095c0((longlong)(local_2d + 0x10));
    if (lVar1 != 0) {
      FUN_0040d200(lVar1,(longlong)(local_2d + 0x10),0);
      FUN_01d30f00(param_1,lVar1 + 0xc,local_2d);
      FUN_00409a70(&local_35,lVar1,0xc);
      FUN_00409a70(lVar1 + 0x1c,lVar1 + 0x20,
                   (longlong)(*(int *)(lVar1 + 0x14) + *(int *)(lVar1 + 0x18)));
      *(undefined4 *)(lVar1 + 0x1c) = 0x3f800000;
      *(int *)(lVar1 + 8) = local_2d + 4;
    }
  }
  else {
    lVar1 = FUN_004095c0((longlong)(local_2d + 0xc));
    if (lVar1 != 0) {
      FUN_00409a70(&local_35,lVar1,0xc);
      FUN_01d30f00(param_1,lVar1 + 0xc,local_2d);
    }
  }
  *(undefined4 *)(lVar1 + 4) = 0x105;
  return lVar1;
}

