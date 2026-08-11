/* Ghidra address: 012a53b0 */
/* Ghidra symbol: FUN_012a53b0 */


void FUN_012a53b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  int local_60;
  int local_5c;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar6 = 0;
  local_5c = 0;
  lVar7 = 0;
  dVar8 = -1e+30;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  local_60 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),local_60);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
      if (((*(int *)(lVar5 + 0xbc) != -1) && (*(longlong *)(lVar5 + 0x40) != 0)) &&
         (*(longlong *)(lVar5 + 0x70) != 0)) {
        lVar5 = FUN_004113f0(*(longlong *)(lVar5 + 0x70),&PTR_FUN_010fe770);
        dVar8 = *(double *)(lVar5 + 0x168);
        break;
      }
      local_60 = local_60 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  local_60 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),local_60);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
      if (((*(int *)(lVar5 + 0xbc) != -1) && (*(longlong *)(lVar5 + 0x40) != 0)) &&
         (*(int *)(lVar5 + 0xb8) == 0)) {
        local_5c = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                             (*(longlong **)(param_1 + 0x90),*(undefined8 *)(lVar5 + 0x40),0);
        FUN_01cc80c0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
        lVar7 = *(longlong *)(lVar5 + 0x98);
        if (*(longlong *)(param_1 + 0x100) != 0) {
          FUN_01cc5c60(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8));
          lVar5 = FUN_01cc5cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8));
          if (lVar5 != 0) {
            if (dVar8 <= -1e+29) {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
                                (*(longlong **)(param_1 + 0x100),lVar5);
              if (iVar3 != local_5c) {
                return;
              }
              lVar6 = FUN_004095c0((longlong)local_5c);
            }
            else {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x28))
                                (*(longlong **)(param_1 + 0x100),lVar5,dVar8,0);
              if (iVar3 != local_5c) {
                return;
              }
              lVar6 = FUN_004095c0((longlong)local_5c);
              do {
                cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x40))
                                  (*(longlong **)(param_1 + 0x100),&local_50);
                if (cVar1 == '\0') break;
              } while (local_50 < dVar8);
            }
          }
        }
      }
      local_60 = local_60 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (lVar7 != 0)) {
    while (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x40))
                             (*(longlong **)(param_1 + 0x100),&local_50,lVar6), cVar1 != '\0') {
      if (*(char *)(param_1 + 0x58) == '\0') {
        FUN_01cc4620(lVar7,local_50);
      }
      else {
        FUN_01cc47e0(lVar7,local_50);
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      local_60 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                            (*(longlong **)(param_1 + 8),local_60);
          lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
          if (*(int *)(lVar5 + 0xbc) != -1) {
            if (*(char *)(param_1 + 0x58) == '\0') {
              FUN_01cc46b0(lVar7,*(int *)(lVar5 + 0xb8),
                           *(undefined8 *)(lVar6 + (longlong)*(int *)(lVar5 + 0xb8) * 8));
            }
            else {
              iVar3 = *(int *)(lVar5 + 0xb8) * 2;
              local_48 = *(undefined8 *)(lVar6 + (longlong)iVar3 * 8);
              local_40 = *(undefined8 *)(lVar6 + (longlong)(iVar3 + 1) * 8);
              FUN_01cc4e50(lVar7,*(int *)(lVar5 + 0xb8),local_48,local_40);
            }
          }
          local_60 = local_60 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    local_60 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),local_60);
        lVar7 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
        if (((*(int *)(lVar7 + 0xbc) != -1) &&
            (lVar7 = FUN_004113f0(*(undefined8 *)(lVar7 + 0x70),&PTR_FUN_010fe770), lVar7 != 0)) &&
           (*(longlong *)(lVar7 + 0x188) != 0)) {
          FUN_00410f20(*(undefined8 *)(lVar7 + 0x188));
          *(undefined8 *)(lVar7 + 0x188) = 0;
          FUN_01101640(lVar7,*(undefined8 *)(lVar7 + 0x198),*(undefined8 *)(lVar7 + 400),1,0);
        }
        local_60 = local_60 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (lVar6 != 0) {
    FUN_004095f0(lVar6,(longlong)local_5c);
  }
  return;
}

