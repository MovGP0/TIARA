/* Ghidra address: 00d8a710 */
/* Ghidra symbol: FUN_00d8a710 */


void FUN_00d8a710(longlong param_1,char param_2,longlong param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  local_60 = auStack_98;
  local_30 = *param_4;
  uStack_28 = param_4[1];
  uStack_20 = *(undefined4 *)(param_4 + 2);
  local_50 = *param_5;
  uStack_48 = param_5[1];
  uStack_40 = param_5[2];
  uStack_38 = param_5[3];
  FUN_004179d0(&local_50,&DAT_00d623c8);
  local_68 = *(longlong *)(param_3 + 0x70);
  local_1c = *(undefined4 *)(local_68 + 0x28);
  if (param_2 == '\x01') {
    if (uStack_20._1_1_ == '\0') {
      lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x3e);
      FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
    }
    else if (uStack_20._1_1_ == '\x01') {
      lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x40);
      FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
    }
    else if (uStack_20._1_1_ == '\x02') {
      lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x3f);
      FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
    }
    else if (uStack_20._1_1_ == '\x03') {
      lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x41);
      FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
    }
    else {
      lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x3e);
      FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
    }
  }
  else if (uStack_20._1_1_ == '\0') {
    lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x22);
    FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
  }
  else if (uStack_20._1_1_ == '\x01') {
    lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x24);
    FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
  }
  else if (uStack_20._1_1_ == '\x02') {
    lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x23);
    FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
  }
  else if (uStack_20._1_1_ == '\x03') {
    lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x25);
    FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
  }
  else {
    lVar1 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x22);
    FUN_005fc860(local_68,*(undefined4 *)(lVar1 + 0x28));
  }
  local_78 = &local_50;
  local_70 = param_6;
  FUN_00d826f0(param_1,param_2,param_3,&local_30);
  FUN_005fc860(*(undefined8 *)(param_3 + 0x70),local_1c);
  FUN_00417740(&local_50,&DAT_00d623c8);
  return;
}

