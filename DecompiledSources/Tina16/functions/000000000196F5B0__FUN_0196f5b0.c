/* Ghidra address: 0196f5b0 */
/* Ghidra symbol: FUN_0196f5b0 */


void FUN_0196f5b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  short *local_60;
  longlong local_58;
  longlong local_50;
  int local_44;
  undefined8 local_40;
  undefined1 local_31;
  short *local_30 [2];
  
  local_90 = auStack_d8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_60 = (short *)0x0;
  local_68 = 0;
  local_40 = 0;
  local_30[0] = (short *)0x0;
  FUN_00414ad0(param_1 + 0x1f8,param_2);
  FUN_00414480(local_30);
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x110) = *(undefined8 *)(param_1 + 0x250);
  }
  if (param_2 == 0) {
    local_50 = FUN_01951400(param_1);
    iVar6 = *(int *)(local_50 + 0x10);
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_58 = FUN_004aeac0(local_50,local_44);
        *(undefined1 *)(local_58 + 0x108) = 0;
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  else {
    FUN_00414b50(&local_68,*(undefined8 *)(param_1 + 0x1c0));
    local_70 = *(undefined8 *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x388) == 0) {
      FUN_00414b50(&local_60,param_2);
      iVar6 = FUN_00414cb0(local_60);
      if (((1 < iVar6) && (local_60[1] != 0x3a)) && ((*local_60 != 0x5c || (local_60[1] != 0x5c))))
      {
        FUN_00441640(&local_98,local_68);
        FUN_00416ba0(&local_60,local_98,param_2);
        iVar6 = FUN_00414cb0(local_60);
        if (0x103 < iVar6) {
          FUN_00414b50(local_30,local_60);
          FUN_018d0d60(&local_a0,local_60);
          FUN_00414b50(&local_60,local_a0);
          iVar6 = FUN_00414cb0(local_60);
          if (0x103 < iVar6) {
            FUN_00442050(&local_a8,local_60);
            FUN_00414b50(&local_60,local_a8);
          }
        }
        cVar2 = FUN_00440a20(local_60,1);
        if (cVar2 == '\0') {
          FUN_01972f10(param_1,&local_b0);
          FUN_00416ba0(&local_60,local_b0,param_2);
        }
      }
      local_31 = FUN_01950810(param_1);
      FUN_01972b60(param_1,local_60,0);
      if (local_30[0] != (short *)0x0) {
        FUN_00414ad0(param_1 + 0x1c0,local_30[0]);
      }
      *(undefined1 *)(param_1 + 0xc0) = local_31;
    }
    else {
      (**(code **)(param_1 + 0x388))(*(undefined8 *)(param_1 + 0x390),param_1,param_2);
    }
    local_78 = FUN_0196e3c0(&PTR_FUN_0193aeb8,1,0);
    FUN_0196c500(*(undefined8 *)(local_78 + 0x1a8),*(undefined8 *)(param_1 + 0x1a8));
    FUN_00414ad0(local_78 + 0x1c0,*(undefined8 *)(param_1 + 0x1c0));
    if (*(longlong *)(param_1 + 0x388) != 0) {
      *(undefined8 *)(local_78 + 0x388) = *(undefined8 *)(param_1 + 0x388);
      *(undefined8 *)(local_78 + 0x390) = *(undefined8 *)(param_1 + 0x390);
    }
    lVar5 = *(longlong *)(param_1 + 0x248);
    if (*(longlong *)(lVar5 + 0xe0) != 0) {
      lVar1 = *(longlong *)(local_78 + 0x248);
      *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(lVar5 + 0xe0);
      *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar5 + 0xe8);
    }
    FUN_00414b50(&local_40,*(undefined8 *)(param_1 + 0x1f8));
    FUN_00414480(param_1 + 0x1f8);
    FUN_0194f7b0(local_78,param_1,1);
    FUN_00414ad0(param_1 + 0x1f8,local_40);
    if (*(longlong *)(param_1 + 0x200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x110) = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(local_78 + 0x200) = *(undefined8 *)(param_1 + 0x200);
    }
    *(longlong *)(param_1 + 0x200) = local_78;
    FUN_00414ad0(param_1 + 0x1c0,local_68);
    iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x200) + 0x80) + 0x30))();
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x80);
        uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_44);
        cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01934910);
        if (cVar2 != '\0') {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 0x80);
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_44);
          (**(code **)(*plVar4 + 0x278))(plVar4,0x100);
        }
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = FUN_004b2060();
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar5 = FUN_018163e0(*(undefined8 *)(param_1 + 0x298),local_44);
        *(undefined1 *)(lVar5 + 0x1c) = 1;
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = FUN_004b2060();
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar5 = FUN_0196dcf0(*(undefined8 *)(param_1 + 0x278),local_44);
        *(undefined1 *)(lVar5 + 0x1c) = 1;
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_50 = FUN_01951400(param_1);
    iVar6 = *(int *)(local_50 + 0x10);
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_58 = FUN_004aeac0(local_50,local_44);
        *(undefined1 *)(local_58 + 0x108) = 1;
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined1 *)(param_1 + 0x108) = 1;
    FUN_00414ad0(param_1 + 0x1f8,param_2);
    *(undefined8 *)(param_1 + 0x2a8) = local_70;
  }
  FUN_00414560(&local_b0,4);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  return;
}

