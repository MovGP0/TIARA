/* Ghidra address: 00998520 */
/* Ghidra symbol: FUN_00998520 */


undefined8 FUN_00998520(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  int local_a8;
  int local_a4;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_39;
  
  local_c0 = auStack_108;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = (undefined *)0x0;
  local_c8 = 0;
  local_a0 = (undefined8 *)0x0;
  local_58 = 0;
  plVar6 = *(longlong **)(param_1 + 0x18);
  cVar1 = FUN_004113d0(plVar6,&PTR_FUN_0092bf50);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092c5a0), cVar1 == '\0')) {
    cVar1 = FUN_004113d0(plVar6,&PTR_FUN_0092c5a0);
    if (cVar1 == '\0') {
      uVar7 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      FUN_004134c0(uVar7);
    }
    else {
      local_58 = (**(code **)(*plVar6 + 0x40))(plVar6,param_2,param_3,param_4);
    }
    goto LAB_00998c09;
  }
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,param_2,param_3,param_4);
  local_48 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                       (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
  cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926660);
  plVar6 = local_50;
  if (cVar1 != '\0') {
    local_60 = local_50;
    local_50 = local_48;
    local_48 = plVar6;
  }
  cVar1 = FUN_004113d0(local_50,&PTR_FUN_00926660);
  if (cVar1 != '\0') {
    cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926660);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_48,&PTR_FUN_00927180);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926d78);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(local_48,&PTR_FUN_00927588);
          if (cVar1 == '\0') goto code_r0x00998b8a;
        }
      }
      local_68 = (longlong *)FUN_00948d80(local_48);
      iVar3 = (**(code **)(*local_50 + 0x118))();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar6 = (longlong *)(**(code **)(*local_50 + 0x110))(local_50,local_a4);
          (**(code **)(*plVar6 + 0x198))(plVar6,&local_d0);
          (**(code **)(*local_68 + 0x108))(local_68,&local_d8);
          iVar4 = FUN_00416420(local_d0,local_d8);
          if (iVar4 == 0) {
            local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
            local_48 = local_68;
            goto LAB_00998ba4;
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
      local_48 = local_68;
    }
    else {
      iVar3 = (**(code **)(*local_50 + 0x118))();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar6 = (longlong *)(**(code **)(*local_50 + 0x110))(local_50,local_a4);
          (**(code **)(*plVar6 + 0x198))(plVar6,&local_a0);
          iVar4 = (**(code **)(*local_48 + 0x118))();
          local_a8 = 0;
          if (-1 < iVar4 + -1) {
            do {
              plVar6 = (longlong *)(**(code **)(*local_48 + 0x110))(local_48,local_a8);
              (**(code **)(*plVar6 + 0x198))(plVar6,&local_c8);
              iVar5 = FUN_00416420(local_c8,local_a0);
              if (iVar5 == 0) {
                local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
                goto LAB_00998ba4;
              }
              local_a8 = local_a8 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
    }
LAB_00998ba4:
    FUN_00998c60(0,local_c0);
    goto LAB_00998c09;
  }
  cVar1 = FUN_004113d0(local_50,&PTR_FUN_00926d78);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926d78);
    if (cVar1 != '\0') goto LAB_00998933;
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_00927180);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_48,&PTR_FUN_00927180);
      if (cVar1 != '\0') goto LAB_00998a11;
      local_90 = (longlong *)FUN_00948d80(local_50);
      local_98 = (longlong *)FUN_00948d80(local_48);
      (**(code **)(*local_90 + 0x108))(local_90,&local_e0);
      (**(code **)(*local_98 + 0x108))(local_98,&local_e8);
      iVar3 = FUN_00416420(local_e0,local_e8);
      if (iVar3 == 0) {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
      }
      else {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
      }
      local_50 = local_90;
      local_48 = local_98;
    }
    else {
LAB_00998a11:
      local_80 = (longlong *)FUN_00948cc0(local_50);
      local_88 = (longlong *)FUN_00948cc0(local_48);
      local_39 = FUN_005274e0(0x3f);
      dVar8 = (double)(**(code **)(*local_80 + 0x100))(local_80);
      dVar9 = (double)(**(code **)(*local_88 + 0x100))(local_88);
      if (dVar8 == dVar9) {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
      }
      else {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
      }
      FUN_005274e0(local_39);
      local_50 = local_80;
      local_48 = local_88;
    }
  }
  else {
LAB_00998933:
    local_70 = (longlong *)FUN_00948c00(local_50);
    local_78 = (longlong *)FUN_00948c00(local_48);
    cVar1 = (**(code **)(*local_70 + 0xf8))(local_70);
    cVar2 = (**(code **)(*local_78 + 0xf8))(local_78);
    if (cVar1 == cVar2) {
      local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
    }
    else {
      local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
    }
    local_50 = local_70;
    local_48 = local_78;
  }
code_r0x00998b8a:
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
LAB_00998c09:
  FUN_004145c0(&local_e8,5);
  FUN_00414520(&local_a0);
  return local_58;
}

