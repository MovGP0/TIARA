/* Ghidra address: 00601060 */
/* Ghidra symbol: FUN_00601060 */


void FUN_00601060(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                 uint *param_6)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_110;
  longlong local_108;
  undefined1 *local_f0;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  int local_b0;
  int local_ac;
  ushort local_a8;
  undefined1 local_98 [8];
  int local_90;
  int local_8c;
  ushort local_88;
  undefined1 local_86;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  ushort local_4e;
  int local_4c;
  longlong local_48;
  byte *local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_f0 = auStack_138;
  local_4c = param_3 << 4;
  local_48 = FUN_00409570((longlong)local_4c);
  (**(code **)(*param_1 + 0x18))(param_1,local_48,local_4c);
  if (*param_5 == 0 && param_5[1] == 0) {
    uVar5 = thunk_FUN_0410f747(0xb);
    *param_6 = uVar5;
    uVar5 = thunk_FUN_0410f747(0xc);
    param_6[1] = uVar5;
  }
  else {
    *(undefined8 *)param_6 = *(undefined8 *)param_5;
  }
  local_20 = thunk_FUN_040ef593(0);
  if (local_20 == 0) {
    FUN_005ffeb0();
  }
  sVar3 = thunk_FUN_03e5bd07(local_20,0xe);
  sVar4 = thunk_FUN_03e5bd07(local_20,0xc);
  local_4e = sVar3 * sVar4;
  if (local_4e < 9) {
    local_54 = 1 << ((byte)local_4e & 0x1f);
  }
  else {
    local_54 = 0x7fffffff;
  }
  thunk_FUN_041a9b5c(0,local_20);
  local_64 = 0;
  local_d8 = (uint)*(ushort *)(local_48 + 2);
  local_dc = local_d8;
  if (local_d8 == 0) {
    local_dc = 0x7fffffff;
  }
  local_58 = local_dc;
  param_3 = param_3 + -1;
  local_60 = 1;
  if (0 < param_3) {
    do {
      local_e0 = (uint)*(ushort *)(local_48 + 2 + (longlong)local_60 * 0x10);
      local_e4 = local_e0;
      if (local_e0 == 0) {
        local_e4 = 0x7fffffff;
      }
      local_5c = local_e4;
      if (((int)local_e4 <= local_54) && ((int)local_58 <= (int)local_e4)) {
        cVar2 = FUN_00600f40(auStack_138,local_48 + (longlong)local_64 * 0x10,
                             local_48 + (longlong)local_60 * 0x10);
        if (cVar2 != '\0') {
          local_64 = local_60;
          local_58 = local_5c;
        }
      }
      local_60 = local_60 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  local_40 = (byte *)(local_48 + (longlong)local_64 * 0x10);
  if (*local_40 == 0) {
    *param_6 = 0x100;
  }
  else {
    *param_6 = (uint)*local_40;
  }
  if (local_40[1] == 0) {
    param_6[1] = 0x100;
  }
  else {
    param_6[1] = (uint)local_40[1];
  }
  local_38 = FUN_00409570((longlong)*(int *)(local_40 + 8));
  (**(code **)(*param_1 + 0x48))(param_1,*(int *)(local_40 + 0xc) - (local_4c + param_4),1);
  uVar1 = local_38;
  (**(code **)(*param_1 + 0x18))(param_1,local_38,*(undefined4 *)(local_40 + 8));
  cVar2 = FUN_0043e2c0(local_38,&DAT_01decc99,8);
  if (cVar2 != '\0') {
    FUN_005ffe70();
  }
  FUN_00600cc0(uVar1,&local_70,&local_78,param_6);
  thunk_FUN_03d2c01a(local_78,0x20,local_b8);
  thunk_FUN_03d2c01a(local_70,0x20,local_98);
  local_d0 = local_ac * local_b0 * (uint)local_a8;
  local_cc = local_8c * local_90 * (uint)local_88;
  local_2c = local_d0 + local_cc;
  local_c8 = FUN_00409570((longlong)local_2c);
  local_c0 = local_c8 + local_d0;
  local_28 = local_c8;
  thunk_FUN_04144613(local_78,local_d0,local_c8);
  thunk_FUN_04144613(local_70,local_cc,local_c0);
  thunk_FUN_0416f828(local_70);
  thunk_FUN_0416f828(local_78);
  local_118 = local_86;
  local_110 = local_c8;
  local_108 = local_c0;
  lVar6 = thunk_FUN_041c85cc(PTR_IMAGE_DOS_HEADER_0200c280,*param_6,param_6[1],(undefined1)local_88)
  ;
  *param_2 = lVar6;
  if (*param_2 == 0) {
    FUN_005fff20();
  }
  FUN_004095f0(local_28,(longlong)local_2c);
  FUN_004095f0(local_38,(longlong)*(int *)(local_40 + 8));
  FUN_004095f0(local_48,(longlong)local_4c);
  return;
}

