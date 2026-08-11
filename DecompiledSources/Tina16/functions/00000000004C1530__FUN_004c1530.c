/* Ghidra address: 004c1530 */
/* Ghidra symbol: FUN_004c1530 */


longlong * FUN_004c1530(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_110;
  undefined4 local_f4;
  longlong local_f0;
  longlong local_e8;
  int local_cc;
  longlong local_c8;
  int local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_2d;
  uint local_2c;
  longlong *local_28;
  longlong local_20;
  
  local_120 = auStack_178;
  local_148 = (undefined8 *)0x0;
  local_150 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_004c1d40(param_1);
  local_28 = (longlong *)0x0;
  (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  (**(code **)(*param_1 + 0x50))(param_1,&local_2d,&local_2c);
  if (param_2 == (longlong *)0x0) {
    FUN_004c1d80(param_1,&local_128);
    lVar2 = FUN_004a0a10(local_128);
    local_28 = (longlong *)(**(code **)(lVar2 + 0x78))(lVar2,1,0);
    FUN_004c1d80(param_1,&local_130);
    (**(code **)(*local_28 + 0x50))(local_28,local_130);
  }
  else {
    local_28 = param_2;
    FUN_004c1d80(param_1,&local_138);
    if ((*(ushort *)((longlong)local_28 + 0x34) & 0x10) == 0) {
      *(ushort *)((longlong)local_28 + 0x34) = *(ushort *)((longlong)local_28 + 0x34) | 1;
      *(ushort *)((longlong)local_28 + 0x34) = *(ushort *)((longlong)local_28 + 0x34) | 2;
      FUN_004c1d80(param_1,&local_150);
      FUN_004c14b0(auStack_178,&local_148,local_150);
      (**(code **)(*local_28 + 0x50))(local_28,local_148);
    }
    else {
      FUN_004c1d80(param_1,&local_140);
    }
  }
  param_1[6] = (longlong)local_28;
  local_40 = *local_28;
  lVar2 = FUN_004a03f0(&DAT_0047e548,1,local_40,1);
  param_1[0x21] = lVar2;
  param_1[7] = (longlong)local_28;
  lVar2 = FUN_0041f930();
  local_20 = *(longlong *)(lVar2 + 0x238);
  if (local_20 == 0) {
    lVar2 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
    param_1[0xd] = lVar2;
  }
  else {
    param_1[0xd] = local_20;
  }
  local_48 = param_1[0xd];
  local_58 = param_1[6];
  local_c8 = local_48 + 8;
  local_50 = local_58;
  local_cc = FUN_00596a10(local_c8,&local_58);
  local_5c = local_cc;
  if (local_cc < 0) {
    local_e8 = param_1[0xd];
    local_f0 = param_1[6];
    local_f4 = FUN_00597e50(local_e8 + 8,&local_f0);
  }
  param_1[10] = param_1[6];
  *(ushort *)(param_1[6] + 0x34) = *(ushort *)(param_1[6] + 0x34) | 1;
  *(ushort *)(param_1[6] + 0x34) = *(ushort *)(param_1[6] + 0x34) | 2;
  (**(code **)(*(longlong *)param_1[6] + 0x30))((longlong *)param_1[6],param_1);
  *(ushort *)(param_1[6] + 0x34) = *(ushort *)(param_1[6] + 0x34) & 0xfffd;
  if (local_20 == 0) {
    iVar3 = *(int *)(param_1[0xd] + 0x10);
    local_2c = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_110 = param_1[0xd];
        if (*(uint *)(local_110 + 0x10) <= local_2c) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)(*(longlong *)(local_110 + 8) + (longlong)(int)local_2c * 8);
        (**(code **)(*plVar1 + 0x20))(plVar1);
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (local_20 == 0) {
    FUN_00410f20(param_1[0xd]);
  }
  param_1[0xd] = 0;
  FUN_00410f20(param_1[0x21]);
  FUN_004bd9f0();
  (**(code **)(*DAT_020115f0 + 0x30))(DAT_020115f0);
  FUN_00414560(&local_150,6);
  return local_28;
}

