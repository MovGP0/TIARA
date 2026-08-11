/* Ghidra address: 01ad1090 */
/* Ghidra symbol: FUN_01ad1090 */


undefined1 FUN_01ad1090(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_50;
  int local_38;
  int local_34;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01abefa0);
  local_50 = param_2;
  if ((cVar2 == '\0') || (local_50 = *(longlong *)(param_2 + 0x58), local_50 != 0)) {
    cVar2 = FUN_004113d0(local_50,&PTR_FUN_01aae560);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(local_50,&PTR_FUN_01aaff18);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(local_50,&DAT_01ccbf00);
        if (cVar2 != '\0') {
          plVar1 = *(longlong **)(param_1 + 0xd8);
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          local_38 = 1;
          if (0 < iVar3) {
            do {
              iVar5 = local_38 + -1;
              lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
              iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0xc0))
                                (*(longlong **)(lVar6 + 0x70),local_50);
              if (iVar4 != -1) {
                uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
                *param_3 = uVar7;
                return 1;
              }
              lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
              iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x28))
                                (*(longlong **)(lVar6 + 0x78));
              local_34 = 1;
              if (0 < iVar4) {
                do {
                  iVar5 = local_38 + -1;
                  lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
                  lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                                    (*(longlong **)(lVar6 + 0x78),local_34 + -1);
                  if (lVar6 == local_50) {
LAB_01ad1413:
                    uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
                    *param_3 = uVar7;
                    return 1;
                  }
                  lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
                  lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                                    (*(longlong **)(lVar6 + 0x78),local_34 + -1);
                  if (*(longlong *)(lVar6 + 0x118) == local_50) goto LAB_01ad1413;
                  local_34 = local_34 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              local_38 = local_38 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0xd8);
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        local_38 = 1;
        if (0 < iVar3) {
          do {
            lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
            iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x28))
                              (*(longlong **)(lVar6 + 0x80));
            if (0 < iVar4) {
              do {
                lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
                iVar5 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0xc0))
                                  (*(longlong **)(lVar6 + 0x80),local_50);
                if (iVar5 != -1) {
                  uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
                  *param_3 = uVar7;
                  return 1;
                }
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_38 = local_38 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0xd8);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      local_38 = 1;
      if (0 < iVar3) {
        do {
          lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
          iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x28))(*(longlong **)(lVar6 + 0x80));
          if (0 < iVar4) {
            do {
              lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
              iVar5 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0xc0))
                                (*(longlong **)(lVar6 + 0x80),local_50);
              if (iVar5 != -1) {
                uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,local_38 + -1);
                *param_3 = uVar7;
                return 1;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_38 = local_38 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    *param_3 = 0;
  }
  return 0;
}

