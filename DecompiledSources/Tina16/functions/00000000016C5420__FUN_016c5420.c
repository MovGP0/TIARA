/* Ghidra address: 016c5420 */
/* Ghidra symbol: FUN_016c5420 */


undefined8
FUN_016c5420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_b8;
  local_50 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_90 = param_4;
  local_60 = param_1;
  local_18 = local_50;
  if (param_7 == '\0') {
    local_98 = *(undefined8 *)(param_1 + 0x9e0);
    local_88 = param_5;
    local_80 = 0;
    local_78 = 0;
    local_70 = param_6;
    local_68 = 0;
    local_58 = param_8;
    local_10 = FUN_016a6500(&DAT_016a2760,1,param_2,param_3);
    local_20 = FUN_016a9290(local_10);
    FUN_00410f20(local_10);
  }
  else if (param_7 == '\x01') {
    local_98 = *(undefined8 *)(param_1 + 0x9e0);
    local_88 = param_5;
    local_80 = 0;
    local_78 = 0;
    local_70 = param_6;
    local_68 = 1;
    local_58 = param_8;
    local_10 = FUN_016a6500(&DAT_016a2760,1,param_2,param_3);
    local_20 = FUN_016a9290(local_10);
    FUN_00410f20(local_10);
  }
  else {
    local_98 = *(undefined8 *)(param_1 + 0x9e0);
    local_88 = param_5;
    local_80 = 0;
    local_78 = 0;
    local_70 = param_6;
    local_68 = 0;
    local_58 = param_8;
    local_10 = FUN_016a6500(&DAT_016a2760,1,param_2,param_3);
    local_20 = FUN_016a9290(local_10);
    uVar1 = local_10;
    local_30 = local_10;
    local_10 = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00410f20(local_18);
  return local_20;
}

