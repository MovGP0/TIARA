/* Ghidra address: 01869bb0 */
/* Ghidra symbol: FUN_01869bb0 */


longlong * FUN_01869bb0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_70 [16];
  undefined1 *local_60;
  byte *local_48;
  byte *local_40;
  int local_38;
  undefined4 local_34;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_20,1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_20 + 0x88))(local_20,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_20 + 0x70))(local_20,uVar1);
  uVar4 = FUN_00609e10(local_20);
  FUN_005fdf10(uVar4);
  lVar5 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0xffffff);
  plVar6 = (longlong *)FUN_00609e10(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar1);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_70);
  plVar6 = (longlong *)FUN_00609e10(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar1);
  (**(code **)(*plVar6 + 0x110))(plVar6,local_70,param_2);
  uVar4 = FUN_00609e10(local_20);
  FUN_005fe090(uVar4);
  FUN_0060bbf0(local_28,1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_28 + 0x88))(local_28,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_28 + 0x70))(local_28,uVar1);
  uVar4 = FUN_00609e10(local_28);
  FUN_005fdf10(uVar4);
  lVar5 = FUN_00609e10(local_28);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0);
  plVar6 = (longlong *)FUN_00609e10(local_28);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar1);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_70);
  plVar6 = (longlong *)FUN_00609e10(local_28);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar1);
  (**(code **)(*plVar6 + 0x110))(plVar6,local_70,param_2);
  uVar4 = FUN_00609e10(local_28);
  FUN_005fe090(uVar4);
  iVar2 = (**(code **)(*local_20 + 0x48))();
  local_38 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_40 = (byte *)FUN_0060a050(local_20,local_38);
      local_48 = (byte *)FUN_0060a050(local_28,local_38);
      iVar3 = (**(code **)(*local_20 + 0x60))();
      iVar3 = (iVar3 + 7) / 8;
      local_34 = 0;
      if (-1 < iVar3 + -1) {
        do {
          *local_40 = ~*local_40 | *local_48;
          local_40 = local_40 + 1;
          local_48 = local_48 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_38 = local_38 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_28);
  return local_20;
}

