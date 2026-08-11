/* Ghidra address: 0099a300 */
/* Ghidra symbol: FUN_0099a300 */


undefined8 FUN_0099a300(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  int local_80;
  int local_7c;
  undefined8 *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_39;
  
  local_90 = auStack_d8;
  local_b0 = 0;
  local_b8 = (undefined *)0x0;
  local_a0 = 0;
  local_a8 = (undefined *)0x0;
  local_98 = 0;
  local_78 = (undefined8 *)0x0;
  plVar5 = *(longlong **)(param_1 + 0x18);
  cVar1 = FUN_004113d0(plVar5,&PTR_FUN_0092c5a0);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x20),&PTR_FUN_0092d050), cVar1 == '\0')) {
    cVar1 = FUN_004113d0(plVar5,&PTR_FUN_0092d050);
    if (cVar1 == '\0') {
      uVar6 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
      FUN_004134c0(uVar6);
    }
    else {
      local_58 = (**(code **)(*plVar5 + 0x40))(plVar5,param_2,param_3,param_4);
    }
    goto LAB_0099a92f;
  }
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,param_2,param_3,param_4);
  local_48 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                       (*(longlong **)(param_1 + 0x20),param_2,param_3,param_4);
  cVar1 = FUN_004113d0(local_50,&PTR_FUN_00926660);
  if (cVar1 == '\0') {
LAB_0099a553:
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_00926660);
    if (cVar1 == '\0') {
LAB_0099a6a6:
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_00927180);
      if ((cVar1 == '\0') && (cVar1 = FUN_004113d0(local_50,&PTR_FUN_00926d78), cVar1 == '\0')) {
        cVar1 = FUN_004113d0(local_50,&PTR_FUN_00927588);
        if (cVar1 != '\0') goto LAB_0099a6ef;
      }
      else {
LAB_0099a6ef:
        cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926660);
        if (cVar1 != '\0') {
          local_60 = (longlong *)FUN_00948d80(local_50);
          iVar2 = (**(code **)(*local_48 + 0x118))();
          local_7c = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*local_60 + 0x108))(local_60,&local_b0);
              plVar5 = (longlong *)(**(code **)(*local_48 + 0x110))(local_48,local_7c);
              (**(code **)(*plVar5 + 0x198))(plVar5,&local_b8);
              iVar3 = FUN_00416350(local_b0,local_b8);
              if (0 < iVar3) {
                local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
                local_50 = local_60;
                goto LAB_0099a8ca;
              }
              local_7c = local_7c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
          local_50 = local_60;
          goto LAB_0099a8ca;
        }
      }
      local_68 = (longlong *)FUN_00948cc0(local_50);
      local_70 = (longlong *)FUN_00948cc0(local_48);
      local_39 = FUN_005274e0(0x3f);
      dVar7 = (double)(**(code **)(*local_68 + 0x100))(local_68);
      dVar8 = (double)(**(code **)(*local_70 + 0x100))(local_70);
      if (dVar7 <= dVar8) {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
      }
      else {
        local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
      }
      FUN_005274e0(local_39);
      local_50 = local_68;
      local_48 = local_70;
      FUN_00410f20(local_70);
      FUN_00410f20(local_50);
      goto LAB_0099a92f;
    }
    cVar1 = FUN_004113d0(local_48,&PTR_FUN_00927180);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926d78);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_48,&PTR_FUN_00927588);
        if (cVar1 == '\0') goto LAB_0099a6a6;
      }
    }
    local_60 = (longlong *)FUN_00948d80(local_48);
    iVar2 = (**(code **)(*local_50 + 0x118))();
    local_7c = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*local_50 + 0x110))(local_50,local_7c);
        (**(code **)(*plVar5 + 0x198))(plVar5,&local_a0);
        (**(code **)(*local_60 + 0x108))(local_60,&local_a8);
        iVar3 = FUN_00416350(local_a0,local_a8);
        if (0 < iVar3) {
          local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
          local_48 = local_60;
          goto LAB_0099a8ca;
        }
        local_7c = local_7c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
    local_48 = local_60;
  }
  else {
    cVar1 = FUN_004113d0(local_48,&PTR_FUN_00926660);
    if (cVar1 == '\0') goto LAB_0099a553;
    iVar2 = (**(code **)(*local_50 + 0x118))();
    local_7c = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*local_50 + 0x110))(local_50,local_7c);
        (**(code **)(*plVar5 + 0x198))(plVar5,&local_78);
        iVar3 = (**(code **)(*local_48 + 0x118))();
        local_80 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar5 = (longlong *)(**(code **)(*local_48 + 0x110))(local_48,local_80);
            (**(code **)(*plVar5 + 0x198))(plVar5,&local_98);
            iVar4 = FUN_00416350(local_98,local_78);
            if (0 < iVar4) {
              local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,1);
              goto LAB_0099a8ca;
            }
            local_80 = local_80 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_7c = local_7c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_58 = FUN_009902a0(&PTR_FUN_00926d78,1,0);
  }
LAB_0099a8ca:
  FUN_0099a990(0,local_90);
LAB_0099a92f:
  FUN_004145c0(&local_b8,5);
  FUN_00414520(&local_78);
  return local_58;
}

