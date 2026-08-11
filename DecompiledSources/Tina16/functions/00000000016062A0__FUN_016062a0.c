/* Ghidra address: 016062a0 */
/* Ghidra symbol: FUN_016062a0 */


longlong *
FUN_016062a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  bVar1 = false;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  local_ac = 0;
  bVar2 = false;
  if (iVar7 - 1U < 0x80000000) {
    do {
      bVar1 = bVar2;
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_ac);
      FUN_00414b50(&local_38,*(undefined8 *)(lVar5 + 0x30));
      FUN_0043e1a0(local_60,L"{$SHARED}");
      iVar3 = FUN_004170c0(local_60[0],local_38,1);
      if (0 < iVar3) {
        bVar1 = true;
      }
      local_ac = local_ac + 1;
      iVar7 = iVar7 + -1;
      bVar2 = bVar1;
    } while (iVar7 != 0);
  }
  if (param_8 == 1) {
    if (bVar1) {
      FUN_00b96df0(local_res18);
    }
    FUN_00b96df0(local_res20);
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  local_ac = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_ac);
      FUN_00414b50(&local_38,*(undefined8 *)(lVar5 + 0x30));
      FUN_0043e1a0(&local_68,L"{$PRJ}");
      iVar3 = FUN_004170c0(local_68,local_38,1);
      if (iVar3 < 1) {
        FUN_0043e1a0(&local_78,L"{$SHARED}");
        iVar3 = FUN_004170c0(local_78,local_38,1);
        if (iVar3 < 1) {
          if (param_8 == 0) {
            FUN_00441920(&local_88,local_38);
            FUN_00414b50(&local_38,local_88);
          }
          else if (param_8 == 1) {
            FUN_00441920(&local_90,local_38);
            FUN_00416cd0(&local_38,3,local_res10,&DAT_016068ac,local_90);
          }
        }
        else {
          FUN_00450070(&local_80,local_38,L"{$SHARED}",local_res18,2);
          FUN_00414b50(&local_38,local_80);
        }
      }
      else {
        FUN_00450070(&local_70,local_38,L"{$PRJ}",local_res20,2);
        FUN_00414b50(&local_38,local_70);
      }
      FUN_00441710(&local_30,local_38);
      if (param_8 == 1) {
        FUN_00b96df0(local_30);
        plVar6 = (longlong *)FUN_010af3b0(lVar5);
        (**(code **)(*plVar6 + 0x100))(plVar6,local_38);
      }
      (**(code **)(*plVar4 + 0x78))(plVar4,local_38);
      local_ac = local_ac + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00416cd0(&local_40,3,local_res20,&DAT_016068ac,param_6);
  FUN_00441920(&local_98,param_7);
  FUN_00416cd0(&local_48,3,local_40,&DAT_016068ac,local_98);
  FUN_00414b50(&local_50,param_7);
  FUN_00441710(&local_30,local_48);
  if (param_8 == 1) {
    FUN_00b96df0(local_30);
    FUN_015f21c0(local_50,local_48);
  }
  (**(code **)(*plVar4 + 0x78))(plVar4,local_48);
  FUN_004414c0(&local_a0,local_48,L".hex");
  FUN_00414b50(&local_48,local_a0);
  FUN_004414c0(&local_a8,local_50,L".hex");
  FUN_00414b50(&local_50,local_a8);
  if (param_8 == 1) {
    FUN_015f21c0(local_50,local_48);
  }
  (**(code **)(*plVar4 + 0x78))(plVar4,local_48);
  FUN_00414560(&local_a8,10);
  FUN_00414560(&local_50,5);
  FUN_00414560(&local_res10,6);
  return plVar4;
}

