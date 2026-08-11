/* Ghidra address: 007e6540 */
/* Ghidra symbol: FUN_007e6540 */


void FUN_007e6540(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_138 [40];
  undefined1 *local_110;
  undefined1 local_100 [160];
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_10;
  
  local_110 = auStack_138;
  if ((PTR_DAT_02005bd0[0xd] != '\0') && (param_1[0x11] != 0)) {
    local_10 = (**(code **)(*param_1 + 0x90))(param_1);
    local_5c = 0x10;
    local_20 = 0x50;
    iVar2 = FUN_0044f060();
    if ((iVar2 == 1) && (iVar2 = FUN_0044f080(), iVar2 < 5)) {
      local_60 = 0x2c;
    }
    else {
      local_60 = 0x50;
    }
    local_28 = local_100;
    iVar2 = thunk_FUN_0410b804(local_10,0,0xffffffff,&local_60);
    if (iVar2 != 0) {
      cVar1 = FUN_007e6b10(param_1);
      if (((local_58 & 0x6000) != 0) == (bool)cVar1) {
        FUN_007e66a0(0,local_110);
      }
      else {
        uVar3 = FUN_007e6b10(param_1);
        local_58 = local_58 & 0xffff9fff | (uVar3 & 0xff) * 0x6000;
        local_5c = 0x10;
        iVar2 = thunk_FUN_03ce555e(local_10,0,0xffffffff,&local_60);
        if (iVar2 != 0) {
          thunk_FUN_0401553e(param_1[0x11]);
        }
      }
    }
  }
  return;
}

