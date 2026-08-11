/* Ghidra address: 014a3d50 */
/* Ghidra symbol: FUN_014a3d50 */


void FUN_014a3d50(longlong *param_1)

{
  int iVar1;
  undefined1 local_9e8 [731];
  undefined8 local_70d;
  undefined8 local_705;
  undefined8 local_6fd;
  undefined8 local_6f5;
  undefined8 local_6ed;
  undefined8 local_6e5;
  undefined8 local_6dd;
  undefined8 local_6d5;
  undefined8 local_6cd;
  undefined8 local_6c5;
  undefined8 local_6bd;
  undefined8 local_6b5;
  undefined8 local_6ad;
  undefined8 local_6a5;
  undefined8 local_69d;
  undefined8 local_695;
  undefined8 local_68d;
  undefined8 local_685;
  undefined8 local_67d;
  undefined8 local_675;
  undefined8 local_66d;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_00417580(local_9e8,&DAT_01d0d0b8);
  FUN_01d31180(*param_1,0xf28b,0x10,0xa8);
  if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
    FUN_00417c40(local_9e8,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_9e8,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
  }
  local_b0 = local_70d;
  local_a8 = local_705;
  local_a0 = local_6fd;
  local_98 = local_6f5;
  local_90 = local_6ed;
  local_88 = local_6e5;
  local_80 = local_6dd;
  local_78 = local_6d5;
  local_70 = local_6cd;
  local_68 = local_6c5;
  local_60 = local_6bd;
  local_58 = local_6b5;
  local_50 = local_6ad;
  local_48 = local_6a5;
  local_40 = local_69d;
  local_38 = local_695;
  local_30 = local_68d;
  local_28 = local_685;
  local_20 = local_67d;
  local_18 = local_675;
  local_10 = local_66d;
  FUN_01d311c0(*param_1,&local_b0,0xa8);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 != 0) {
    FUN_00b047e0(0xfffffff3);
  }
  FUN_00417740(local_9e8,&DAT_01d0d0b8);
  return;
}

