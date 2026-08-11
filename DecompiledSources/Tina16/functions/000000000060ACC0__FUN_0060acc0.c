/* Ghidra address: 0060acc0 */
/* Ghidra symbol: FUN_0060acc0 */


void FUN_0060acc0(longlong *param_1,longlong *param_2,int param_3,undefined2 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *local_res10;
  uint local_res18;
  undefined2 *local_res20;
  undefined1 auStack_158 [32];
  int *local_138;
  undefined8 local_130;
  undefined1 *local_120;
  int *local_110;
  int *local_108;
  int *local_100;
  undefined2 local_f6;
  int local_f4;
  longlong local_e8;
  undefined1 local_e0 [56];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  byte local_75;
  int local_74;
  longlong local_70;
  ushort local_60;
  ushort local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  int *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_120 = auStack_158;
  local_e8 = 0;
  local_50 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x18))(param_2,&local_74,4);
  local_75 = local_74 == 0xc;
  if ((bool)local_75) {
    local_74 = 0x28;
  }
  local_100 = (int *)FUN_004095c0((longlong)(local_74 + 0x40c));
  local_res10 = param_2;
  local_58 = local_100;
  if (local_75 == 0) {
    (**(code **)(*param_2 + 0x18))(param_2,local_100 + 1,local_74 + -4);
    local_res18 = param_3 - local_74;
    if ((local_100[4] != 3) && (local_100[4] != 0)) {
      local_50 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_res20 = param_4;
      if (param_4 == (undefined2 *)0x0) {
        FUN_0040d200(&local_f6,0xe,0);
        local_f6 = 0x4d42;
        local_f4 = local_res18 + local_74;
        local_res20 = &local_f6;
      }
      (**(code **)(*local_50 + 0x20))(local_50,local_res20,0xe);
      (**(code **)(*local_50 + 0x20))(local_50,&local_74,4);
      (**(code **)(*local_50 + 0x20))(local_50,local_58 + 1,local_74 + -4);
      FUN_004b8ba0(local_50,param_2,local_res18);
      (**(code **)(*local_50 + 0x48))(local_50,-local_res18,2);
      local_res10 = local_50;
    }
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,&local_60,8);
    piVar1 = local_100;
    FUN_0040d200(local_100,0x28,0);
    local_108 = piVar1;
    piVar1[1] = (uint)local_60;
    piVar1[2] = (uint)local_5e;
    *(undefined2 *)(piVar1 + 3) = local_5c;
    *(undefined2 *)((longlong)piVar1 + 0xe) = local_5a;
    local_res18 = param_3 + -0xc;
  }
  local_110 = local_100;
  *local_100 = local_74;
  local_70 = (longlong)local_58 + (longlong)local_74;
  if ((short)local_100[3] != 1) {
    FUN_005ffe50();
  }
  if ((local_74 == 0x28) &&
     (((*(short *)((longlong)local_110 + 0xe) == 0x10 ||
       (*(short *)((longlong)local_110 + 0xe) == 0x20)) && (local_110[4] == 3)))) {
    FUN_004b84c0(local_res10,local_70,0xc);
    local_70 = local_70 + 0xc;
    local_res18 = local_res18 + -0xc;
  }
  if (local_110[8] == 0) {
    iVar2 = FUN_00600240(*(undefined2 *)((longlong)local_110 + 0xe));
    local_110[8] = iVar2;
  }
  uVar6 = (ulonglong)local_75;
  if (0x400 < local_110[8] * (uint)(byte)(&DAT_01dee830)[uVar6]) {
    FUN_005ffe20(PTR_PTR_02002850);
  }
  FUN_004b84c0(local_res10,local_70,local_110[8] * (uint)(byte)(&DAT_01dee830)[uVar6]);
  local_res18 = local_res18 - local_110[8] * (uint)(byte)(&DAT_01dee830)[uVar6];
  if ((local_110[5] == 0) || (local_110[4] == 0)) {
    iVar2 = FUN_00600270(local_110[1],*(undefined2 *)((longlong)local_110 + 0xe),0x20);
    uVar5 = local_110[2] >> 0x1f;
    local_110[5] = iVar2 * ((local_110[2] ^ uVar5) - uVar5);
  }
  if ((uint)local_110[5] < local_res18) {
    local_res18 = local_110[5];
  }
  if (local_75 != 0) {
    FUN_006007e0(local_70);
  }
  uVar3 = thunk_FUN_040ef593(0);
  local_48 = FUN_005fffe0(uVar3);
  if (((local_100[4] == 0) || (local_100[4] == 3)) && (DAT_01decc98 == '\0')) {
    local_138 = (int *)0x0;
    local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
    local_40 = thunk_FUN_041c0f30(local_48,local_58,0,&local_38);
    if ((local_40 == 0) || (local_38 == 0)) {
      iVar2 = thunk_FUN_03ce33a6();
      if (iVar2 == 0) {
        FUN_005ffe50();
      }
      else {
        FUN_00451a00();
      }
    }
    FUN_004b84c0(local_res10,local_38,local_res18);
  }
  else {
    local_28 = 0;
    local_38 = FUN_004095c0(local_res18);
    FUN_004b84c0(local_res10,local_38,local_res18);
    uVar3 = thunk_FUN_04137b5f(local_48);
    local_28 = FUN_005fffe0(uVar3);
    uVar3 = thunk_FUN_04181813(local_48,1,1);
    local_30 = thunk_FUN_041a19a1(local_28,uVar3);
    local_20 = 0;
    if (local_100[8] != 0) {
      local_e8 = FUN_00600b60(0,local_70,local_100[8]);
      local_20 = thunk_FUN_0418f5de(local_28,local_e8,0);
      thunk_FUN_03a5de49(local_28);
    }
    local_138 = local_58;
    local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
    local_40 = thunk_FUN_041525f6(local_28,local_58,4,local_38);
    if (local_40 == 0) {
      iVar2 = thunk_FUN_03ce33a6();
      if (iVar2 == 0) {
        FUN_005ffe50();
      }
      else {
        FUN_00451a00();
      }
    }
    if (local_20 != 0) {
      thunk_FUN_0418f5de(local_28,local_20,0xffffffff);
    }
    uVar3 = thunk_FUN_041a19a1(local_28,local_30);
    thunk_FUN_0416f828(uVar3);
    if (local_28 != 0) {
      thunk_FUN_041a2fd8(local_28);
    }
    FUN_004095f0(local_38);
  }
  thunk_FUN_041a9b5c(0,local_48);
  if ((((8 < *(ushort *)((longlong)local_100 + 0xe)) &&
       (*(ushort *)((longlong)local_100 + 0xe) < 0x11)) && (local_100[8] != 0)) && (local_e8 == 0))
  {
    local_e8 = FUN_00600b60(0,local_70,local_100[8]);
  }
  FUN_0040d200(local_e0,0x68,0);
  thunk_FUN_03d2c01a(local_40,0x68,local_e0);
  local_a8 = local_100[6];
  local_a4 = local_100[7];
  local_a0 = local_100[8];
  local_9c = local_100[9];
  FUN_004095f0(local_58);
  local_138 = (int *)CONCAT71(local_138._1_7_,local_75);
  local_130 = local_50;
  FUN_0060ab20(param_1,local_40,local_e8,local_e0);
  if ((*(short *)(param_1[0xc] + 0x6e) == 0x20) && ((char)param_1[0xd] == '\x01')) {
    FUN_0060a120(param_1);
  }
  lVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar4 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

