/* Ghidra address: 01cc0f10 */
/* Ghidra symbol: FUN_01cc0f10 */


void FUN_01cc0f10(longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01cc0730(param_1,param_2,param_3);
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x38,1);
    FUN_01d30f00(param_2,param_1 + 0x3a,1);
    if (0x13 < param_3) {
      FUN_01d30f00(param_2,param_1 + 0x3b,1);
    }
    FUN_01d312f0(param_2,&local_10);
    FUN_01cc1590(param_1,local_10);
    if (param_3 == 0x10) {
      FUN_01d30f00(param_2,param_1 + 0x48,0x66);
      FUN_01d30f00(param_2,param_1 + 0xd0,0x60);
    }
    else if (param_3 == 0x11) {
      FUN_01d30f00(param_2,param_1 + 0x48,0x77);
      FUN_01d30f00(param_2,param_1 + 0xd0,0x70);
    }
    else {
      FUN_01d30f00(param_2,param_1 + 0x48,0x88);
      FUN_01d30f00(param_2,param_1 + 0xd0,0x80);
    }
    if (param_3 < 0x16) {
      FUN_01d30f00(param_2,param_1 + 0x160,4);
      FUN_01d30f00(param_2,param_1 + 0x150,2);
      FUN_01d30f00(param_2,param_1 + 0x154,2);
      FUN_01d30f00(param_2,param_1 + 0x158,2);
    }
    else {
      FUN_01d30f00(param_2,param_1 + 0x160,8);
      FUN_01d30f00(param_2,param_1 + 0x150,4);
      FUN_01d30f00(param_2,param_1 + 0x154,4);
      FUN_01d30f00(param_2,param_1 + 0x158,4);
    }
    FUN_01d30f00(param_2,param_1 + 0x39,1);
  }
  FUN_00414480(&local_10);
  return;
}

