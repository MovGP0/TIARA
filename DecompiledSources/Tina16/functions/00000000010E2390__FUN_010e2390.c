/* Ghidra address: 010e2390 */
/* Ghidra symbol: FUN_010e2390 */


void FUN_010e2390(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x7fa);
  if (uVar4 < 8) {
    if (uVar4 == 7) {
      cVar7 = '\x01';
      local_30 = 2;
      local_2c = 2;
    }
    else if (uVar4 < 4) {
      if (uVar4 == 3) goto LAB_010e2507;
      if (uVar4 == 1) {
        cVar7 = '\x01';
        local_30 = 1;
        local_2c = 1;
      }
      else {
        if (uVar4 != 2) goto LAB_010e251e;
        cVar7 = '\x03';
        local_30 = 2;
        local_2c = 2;
      }
    }
    else {
      if (uVar4 == 4) goto LAB_010e24ab;
      if (uVar4 - 5 < 2) goto LAB_010e24c2;
LAB_010e251e:
      cVar7 = '\0';
      local_30 = 1;
      local_2c = 1;
    }
  }
  else if (uVar4 < 0xb) {
    if (uVar4 == 8) {
LAB_010e24ab:
      cVar7 = '\x02';
      local_30 = 2;
      local_2c = 1;
    }
    else {
      if (1 < uVar4 - 9) goto LAB_010e251e;
LAB_010e2507:
      cVar7 = '\0';
      local_30 = 1;
      local_2c = 1;
    }
  }
  else {
    if (1 < uVar4 - 0xb) {
      if (1 < uVar4 - 0xd) {
        if (uVar4 - 0xd != 2) goto LAB_010e251e;
        goto LAB_010e24ab;
      }
      goto LAB_010e2507;
    }
LAB_010e24c2:
    cVar7 = '\x04';
    local_30 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                         (*(longlong **)(param_1[0xfb] + 0x4f0));
    local_2c = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                         (*(longlong **)(param_1[0xfb] + 0x4f0));
  }
  iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar2 != 0) {
    local_3c = 0;
    bVar1 = false;
    local_34 = -1;
    iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
    local_38 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),local_38);
        lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
        *(undefined1 *)(lVar6 + 0x11) = 0;
        if ((((*(longlong *)(lVar6 + 0x18) != 0) && (local_38 % 2 == local_3c)) &&
            ((local_34 == -1 || (local_34 / 2 != local_38 / 2)))) &&
           (*(char *)(lVar6 + 0x2b) == cVar7)) {
          bVar1 = true;
          local_34 = local_38;
          *(undefined1 *)(lVar6 + 0x11) = 1;
          if (local_3c == 0) {
            (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_38);
            param_1[0x10e] = lVar6;
          }
          local_3c = local_3c + 1;
          if (local_3c == local_30) break;
        }
        local_38 = local_38 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (!bVar1) {
      local_3c = 0;
      bVar1 = false;
      local_34 = -1;
      iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))();
      local_38 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                            (*(longlong **)(param_1[0xfb] + 0x4f0),local_38);
          lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
          *(undefined1 *)(lVar6 + 0x11) = 0;
          if (((*(longlong *)(lVar6 + 0x18) != 0) && (local_38 % 2 == local_3c)) &&
             ((local_34 == -1 || (local_34 / 2 != local_38 / 2)))) {
            bVar1 = true;
            local_34 = local_38;
            *(undefined1 *)(lVar6 + 0x11) = 1;
            if (local_3c == 0) {
              (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_38);
              param_1[0x10e] = lVar6;
            }
            local_3c = local_3c + 1;
            if (local_3c == local_2c) break;
          }
          local_38 = local_38 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (!bVar1) {
      (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
      uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),0);
      lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
      param_1[0x10e] = lVar6;
      *(undefined1 *)(lVar6 + 0x11) = 1;
    }
    goto LAB_010e2a0e;
  }
  uVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x7fa);
  if (uVar4 < 8) {
    if (uVar4 == 7) {
      lVar6 = FUN_01107790(&PTR_FUN_011061a0,1);
      param_1[0x10e] = lVar6;
    }
    else if (uVar4 < 4) {
      if (uVar4 == 3) goto LAB_010e2991;
      if (uVar4 == 1) {
        lVar6 = FUN_01106d50(&PTR_FUN_011057c0,1);
        param_1[0x10e] = lVar6;
      }
      else {
        if (uVar4 != 2) goto LAB_010e29ad;
        lVar6 = FUN_01107340(&PTR_FUN_01105a20,1);
        param_1[0x10e] = lVar6;
      }
    }
    else {
      if (uVar4 == 4) goto LAB_010e2959;
      if (uVar4 - 5 < 2) goto LAB_010e2975;
LAB_010e29ad:
      lVar6 = FUN_01106eb0(&PTR_FUN_011051a8,1);
      param_1[0x10e] = lVar6;
    }
  }
  else if (uVar4 < 0xb) {
    if (uVar4 == 8) {
LAB_010e2959:
      lVar6 = FUN_01106eb0(&PTR_FUN_011051a8,1);
      param_1[0x10e] = lVar6;
    }
    else {
      if (1 < uVar4 - 9) goto LAB_010e29ad;
LAB_010e2991:
      lVar6 = FUN_01107520(&PTR_FUN_01105d80,1);
      param_1[0x10e] = lVar6;
    }
  }
  else {
    if (1 < uVar4 - 0xb) {
      if (1 < uVar4 - 0xd) {
        if (uVar4 - 0xd != 2) goto LAB_010e29ad;
        goto LAB_010e2959;
      }
      goto LAB_010e2991;
    }
LAB_010e2975:
    lVar6 = FUN_01107b90(&PTR_FUN_01106728,1);
    param_1[0x10e] = lVar6;
  }
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x80))
            (*(longlong **)(param_1[0xfb] + 0x4f0),0,param_1[0x10e]);
  (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],0);
LAB_010e2a0e:
  uVar3 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  iVar2 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  if (iVar2 != 0) {
    local_38 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                         (*(longlong **)(param_1[0xfb] + 0x4f0));
    local_38 = local_38 + -1;
    if (-1 < local_38) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                          (*(longlong **)(param_1[0xfb] + 0x4f0),local_38);
        lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
        if (*(char *)(lVar6 + 0x11) != '\0') {
          (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],local_38);
          param_1[0x10e] = lVar6;
          (**(code **)(*param_1 + 0x3f0))(param_1,param_1);
        }
        local_38 = local_38 + -1;
      } while (local_38 != -1);
    }
  }
  (**(code **)(*(longlong *)param_1[0xfb] + 0x268))((longlong *)param_1[0xfb],uVar3);
  uVar5 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                    (*(longlong **)(param_1[0xfb] + 0x4f0),uVar3);
  lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
  param_1[0x10e] = lVar6;
  *(undefined1 *)(lVar6 + 0x11) = 1;
  FUN_0082a6c0(param_1[0xfa],CONCAT71((int7)((ulonglong)param_1 >> 8),1) & 0xffffffff);
  return;
}

