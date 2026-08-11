/* Ghidra address: 00aff670 */
/* Ghidra symbol: FUN_00aff670 */


void FUN_00aff670(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a0;
  undefined4 local_98;
  undefined1 *local_80;
  undefined4 local_70;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5d;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_80 = auStack_d8;
  if ((*(ushort *)(*(longlong *)(param_1 + 0x4b0) + 0x8a0) & 2) == 0) {
    local_20 = 0;
    local_28 = 0;
    local_38 = 0;
    local_30 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0x20))
              (*(longlong **)(param_1 + 0x490),&local_48);
    local_4c = local_48;
    local_50 = local_44;
    local_54 = local_40 - local_48;
    local_58 = local_3c - local_44;
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_28 = thunk_FUN_04137b5f(uVar2);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_38 = thunk_FUN_04181813(uVar2,local_54,local_58);
    if (((local_38 == 0) && (local_54 != 0)) && (local_58 != 0)) {
      uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,L"Out of Resources");
      FUN_004134c0(uVar2);
    }
    thunk_FUN_041a19a1(local_28,local_38);
    thunk_FUN_0418c361(local_28,local_4c,local_50,0);
    FUN_005ff880(local_30,*(undefined8 *)(param_1 + 0xb8));
    local_5c = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28);
    local_5d = (*(byte *)(param_1 + 0x2c8) & 1) != 0;
    if (((bool)local_5d) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar2 = FUN_00781840();
      local_64 = FUN_007793c0(uVar2,local_5c);
    }
    else {
      local_64 = local_5c;
    }
    local_64 = FUN_005fbf20(local_64);
    FUN_005fc860(local_30[0xe],local_64);
    FUN_005ffb10(local_30,local_28);
    local_68 = *(undefined4 *)(param_1 + 200);
    local_69 = (*(byte *)(param_1 + 0x2c8) & 2) != 0;
    if (((bool)local_69) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar2 = FUN_00781840();
      local_70 = FUN_007793c0(uVar2,local_68);
    }
    else {
      local_70 = local_68;
    }
    local_70 = FUN_005fbf20(local_70);
    FUN_005fdab0(local_30[0x10],local_70);
    FUN_005fdcb0(local_30[0x10],0);
    FUN_00afe370(*(undefined8 *)(param_1 + 0x4b0));
    FUN_00af7b90(*(undefined8 *)(param_1 + 0x4b0),local_30,&local_48);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_20 = thunk_FUN_0418f5de(uVar2,*(undefined8 *)PTR_DAT_020036e8,0);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    thunk_FUN_03a5de49(uVar2);
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    local_b8 = local_58;
    local_b0 = local_28;
    local_a8 = local_4c;
    local_a0 = local_50;
    local_98 = 0xcc0020;
    thunk_FUN_0415fcd2(uVar2,local_4c,local_50,local_54);
    if (local_20 != 0) {
      thunk_FUN_0418f5de(local_28,local_20,0);
    }
    FUN_005ffb10(local_30,0);
    (**(code **)(*local_30 + -0x20))(local_30,1);
    thunk_FUN_041a2fd8(local_28);
    thunk_FUN_0416f828(local_38);
    return;
  }
  return;
}

