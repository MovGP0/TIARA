/* Ghidra address: 0189dde0 */
/* Ghidra symbol: FUN_0189dde0 */


undefined1 FUN_0189dde0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_2d;
  int local_2c;
  longlong *local_28;
  
  local_40 = auStack_c8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_2d = 0;
  if ((char)param_1[0x17] == '\0') {
    local_40 = auStack_c8;
    lVar4 = FUN_00723990(&PTR_FUN_007198a0,1,0);
    param_1[0x20] = lVar4;
  }
  else {
    lVar4 = FUN_00723990(&PTR_FUN_0071a1f0,1,0);
    param_1[0x20] = lVar4;
  }
  if (*(char *)((longlong)param_1 + 0x81) != '\0') {
    *(uint *)(param_1[0x20] + 0xd8) = *(uint *)(param_1[0x20] + 0xd8) | 2;
  }
  FUN_00414ad0(param_1[0x20] + 0x100,param_1[0x14]);
  if ((param_1[0x13] == 0) && (param_1[0xf] != 0)) {
    FUN_01810010(&local_58,*(undefined8 *)(param_1[0xf] + 0x1c0));
    FUN_00441920(&local_50,local_58);
    FUN_004414c0(&local_48,local_50,param_1[0x14]);
    FUN_00414ad0(param_1 + 0x13,local_48);
  }
  FUN_00441920(&local_38,param_1[0x13]);
  local_2c = FUN_004413f0(&DAT_0189e5e4,local_38);
  if (0 < local_2c) {
    FUN_00416dc0(&local_38,local_38,1,local_2c + -1);
  }
  FUN_00724380(param_1[0x20],local_38);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = FUN_0189d4b0(*(undefined1 *)((longlong)param_1 + 0xd2));
  FUN_0189d4e0(local_28,uVar2);
  iVar3 = (**(code **)(*local_28 + 0x28))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
      uVar5 = FUN_01979de0(uVar5,*(undefined1 *)((longlong)param_1 + 0xd2));
      (**(code **)(*local_28 + 0x48))(local_28,local_2c,uVar5);
      (**(code **)(*param_1 + 0x88))(param_1,&local_60);
      if (local_60 != 0) {
        (**(code **)(*param_1 + 0x88))(param_1,&local_68);
        FUN_00416ba0(param_1 + 0x16,local_68,&DAT_0189e5f4);
      }
      (**(code **)(*param_1 + 0x88))(param_1,&local_70);
      plVar6 = (longlong *)(**(code **)(*local_28 + 0x30))(local_28,local_2c);
      (**(code **)(*plVar6 + 0x88))(plVar6,&local_78);
      FUN_00416ba0(param_1 + 0x16,local_70,local_78);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_1 + 0x88))(param_1,&local_80);
  FUN_00414ad0(param_1[0x20] + 0xe0,local_80);
  FUN_00441640(&local_88,param_1[0x13]);
  if (local_88 == 0) {
    if (param_1[0x11] != 0) {
      FUN_00724420(param_1[0x20],param_1[0x11]);
    }
  }
  else {
    FUN_00441640(&local_90,param_1[0x13]);
    FUN_00724420(param_1[0x20],local_90);
  }
  cVar1 = (**(code **)(*(longlong *)param_1[0x20] + 0xa8))((longlong *)param_1[0x20]);
  if (cVar1 != '\0') {
    FUN_00724270(param_1[0x20],&local_98);
    FUN_00414ad0(param_1 + 0x13,local_98);
    FUN_00441640(&local_a0,param_1[0x13]);
    FUN_00414ad0(param_1 + 0x12,local_a0);
    local_2d = 1;
    local_2c = FUN_00724300(param_1[0x20]);
    local_2c = local_2c + -2;
    if (-1 < local_2c) {
      lVar4 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
      param_1[0x21] = lVar4;
      *(char *)(lVar4 + 0xb8) = (char)param_1[0x17];
      *(longlong *)(lVar4 + 0x78) = param_1[0xf];
      FUN_004414c0(&local_a8,param_1[0x13],*(undefined8 *)(lVar4 + 0xa0));
      FUN_00414ad0(param_1 + 0x13,local_a8);
      FUN_00414ad0(param_1[0x21] + 0x90,param_1[0x12]);
      FUN_00414ad0(param_1[0x21] + 0x98,param_1[0x13]);
      local_2d = (**(code **)(*(longlong *)param_1[0x21] + 0xe8))((longlong *)param_1[0x21]);
    }
  }
  iVar3 = (**(code **)(*local_28 + 0x28))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
      if (param_1[0x21] != lVar4) {
        uVar5 = (**(code **)(*local_28 + 0x30))(local_28,local_2c);
        FUN_00410f20(uVar5);
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_a8,2);
  FUN_00414480(&local_98);
  FUN_00414560(&local_90,10);
  FUN_00414480(&local_38);
  return local_2d;
}

