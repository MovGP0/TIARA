/* Ghidra address: 01ce4cf0 */
/* Ghidra symbol: FUN_01ce4cf0 */


char FUN_01ce4cf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  char local_31;
  int local_30;
  int local_2c;
  
  local_31 = '\0';
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))();
    local_30 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                           (*(longlong **)(param_1 + 0x70),local_30);
        cVar1 = FUN_01cd6b50(plVar5);
        if (cVar1 != '\0') {
          local_31 = '\x01';
          (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
          iVar8 = *(int *)(plVar5[0x1f] + 0x10);
          local_2c = 0;
          if (-1 < iVar8 + -1) {
            do {
              uVar6 = FUN_004aeac0(plVar5[0x1f],local_2c);
              iVar3 = FUN_004aeba0(lVar4,uVar6);
              if (iVar3 == -1) {
                uVar6 = FUN_004aeac0(plVar5[0x1f],local_2c);
                FUN_004ae7e0(lVar4,uVar6);
              }
              local_2c = local_2c + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
    local_30 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                           (*(longlong **)(param_1 + 0x78),local_30);
        cVar1 = FUN_01cd6b50(plVar5);
        if (cVar1 != '\0') {
          local_31 = '\x01';
          (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
          iVar8 = *(int *)(plVar5[0x1f] + 0x10);
          local_2c = 0;
          if (-1 < iVar8 + -1) {
            do {
              uVar6 = FUN_004aeac0(plVar5[0x1f],local_2c);
              iVar3 = FUN_004aeba0(lVar4,uVar6);
              if (iVar3 == -1) {
                uVar6 = FUN_004aeac0(plVar5[0x1f],local_2c);
                FUN_004ae7e0(lVar4,uVar6);
              }
              local_2c = local_2c + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    local_30 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)FUN_004aeac0(lVar4,local_30);
        (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_31 != '\0') {
      cVar1 = FUN_01ce33d0(param_1);
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))
                          (*(longlong **)(param_1 + 0x88));
        local_30 = 1;
        if (0 < iVar2) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                              (*(longlong **)(param_1 + 0x88),local_30 + -1);
            plVar5 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01cd9128);
            (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else if (cVar1 == '\x01') {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))
                          (*(longlong **)(param_1 + 0x88));
        local_30 = 1;
        if (0 < iVar2) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                              (*(longlong **)(param_1 + 0x88),local_30 + -1);
            plVar5 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01cd9128);
            (**(code **)(*plVar5 + 0x68))(plVar5);
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))();
        local_30 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar5 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                               (*(longlong **)(param_1 + 0x88),local_30);
            cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
            if (cVar1 != '\0') {
              plVar5 = (longlong *)
                       (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                                 (*(longlong **)(param_1 + 0x88),local_30);
              (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
            }
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
        local_30 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar5 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                               (*(longlong **)(param_1 + 0x78),local_30);
            cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5);
            if (cVar1 != '\0') {
              lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                                (*(longlong **)(param_1 + 0x78),local_30);
              lVar7 = *(longlong *)(lVar7 + 0xf8);
              iVar8 = *(int *)(lVar7 + 0x10);
              local_2c = 1;
              if (0 < iVar8) {
                do {
                  plVar5 = (longlong *)FUN_004aeac0(lVar7,local_2c + -1);
                  (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
                  local_2c = local_2c + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                                (*(longlong **)(param_1 + 0x78),local_30);
              if (*(longlong *)(lVar7 + 0x118) != 0) {
                lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                                  (*(longlong **)(param_1 + 0x78),local_30);
                lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x118) + 0xf8);
                iVar8 = *(int *)(lVar7 + 0x10);
                local_2c = 1;
                if (0 < iVar8) {
                  do {
                    plVar5 = (longlong *)FUN_004aeac0(lVar7,local_2c + -1);
                    (**(code **)(*plVar5 + 0xc0))(plVar5,param_2,param_3);
                    local_2c = local_2c + 1;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
            }
            local_30 = local_30 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    FUN_00410f20(lVar4);
  }
  return local_31;
}

