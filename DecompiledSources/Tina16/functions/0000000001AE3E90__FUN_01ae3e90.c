/* Ghidra address: 01ae3e90 */
/* Ghidra symbol: FUN_01ae3e90 */


void FUN_01ae3e90(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_60 [4];
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_40[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(param_1,local_40);
  if (cVar1 == '\b') {
    iVar10 = *(int *)(local_40[0] + 0x10);
    local_74 = 0;
    if (-1 < iVar10 + -1) {
      do {
        uVar4 = FUN_004aeac0(local_40[0],local_74);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xc0))
                          (*(longlong **)(param_1 + 0xe0),uVar4);
        if (-1 < iVar2) {
          (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x98))
                    (*(longlong **)(param_1 + 0xe0),iVar2);
          uVar4 = FUN_004aeac0(local_40[0],local_74);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01a5c280);
          if (cVar1 == '\0') {
            uVar4 = FUN_004aeac0(local_40[0],local_74);
            cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010ecd58);
            if (cVar1 == '\0') {
              uVar4 = FUN_004aeac0(local_40[0],local_74);
              cVar1 = FUN_004113d0(uVar4,&LAB_00f10748);
              if (cVar1 == '\0') {
                uVar4 = FUN_004aeac0(local_40[0],local_74);
                cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010ef9a8);
                if (cVar1 != '\0') {
                  plVar5 = (longlong *)FUN_004aeac0(local_40[0],local_74);
                  uVar3 = (**(code **)(*plVar5 + 0xd0))(plVar5);
                  uVar8 = (**(code **)(*plVar5 + 0xd0))(plVar5);
                  local_50[0] = FUN_00498310(uVar3,uVar8 >> 0x20);
                  (**(code **)(*plVar5 + 0xd8))
                            (plVar5,*(undefined8 *)(param_1 + 0x78),local_50,
                             *(undefined8 *)(param_1 + 0x80));
                }
              }
              else {
                plVar5 = (longlong *)FUN_004aeac0(local_40[0],local_74);
                FUN_00f11460(plVar5,local_60);
                FUN_00f11460(plVar5,local_70);
                local_50[0] = FUN_00498310(local_60[0],local_6c);
                (**(code **)(*plVar5 + 0xd8))
                          (plVar5,*(undefined8 *)(param_1 + 0x78),local_50,
                           *(undefined8 *)(param_1 + 0x80));
                plVar5 = (longlong *)plVar5[0x10];
                if (plVar5 != (longlong *)0x0) {
                  uVar4 = FUN_004aeac0(local_40[0],local_74);
                  (**(code **)(*plVar5 + 0x108))(plVar5,uVar4);
                }
              }
            }
            else {
              plVar5 = (longlong *)FUN_004aeac0(local_40[0],local_74);
              local_50[0] = FUN_00498310((int)plVar5[0xd],*(undefined4 *)((longlong)plVar5 + 0x6c));
              (**(code **)(*plVar5 + 0xd8))
                        (plVar5,*(undefined8 *)(param_1 + 0x78),local_50,
                         *(undefined8 *)(param_1 + 0x80));
              plVar5 = (longlong *)plVar5[0x10];
              if (plVar5 != (longlong *)0x0) {
                uVar4 = FUN_004aeac0(local_40[0],local_74);
                (**(code **)(*plVar5 + 0x108))(plVar5,uVar4);
              }
            }
          }
          else {
            plVar5 = (longlong *)FUN_004aeac0(local_40[0],local_74);
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))();
            iVar9 = 0;
            if (-1 < iVar2 + -1) {
              do {
                uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                  (*(longlong **)(param_1 + 0xe0),iVar9);
                cVar1 = FUN_004113d0(uVar4,&LAB_00f12330);
                if (cVar1 != '\0') {
                  lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                    (*(longlong **)(param_1 + 0xe0),iVar9);
                  lVar7 = FUN_004aeac0(local_40[0],local_74);
                  if (*(longlong *)(lVar6 + 0xf0) == lVar7) {
                    lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                      (*(longlong **)(param_1 + 0xe0),iVar9);
                    *(undefined8 *)(lVar6 + 0xf0) = 0;
                  }
                }
                uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                  (*(longlong **)(param_1 + 0xe0),iVar9);
                cVar1 = FUN_004113d0(uVar4,&LAB_00f12330);
                if (cVar1 != '\0') {
                  lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                    (*(longlong **)(param_1 + 0xe0),iVar9);
                  lVar7 = FUN_004aeac0(local_40[0],local_74);
                  if (*(longlong *)(lVar6 + 0xf8) == lVar7) {
                    lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                      (*(longlong **)(param_1 + 0xe0),iVar9);
                    *(undefined8 *)(lVar6 + 0xf8) = 0;
                  }
                }
                iVar9 = iVar9 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            local_50[0] = (**(code **)(*plVar5 + 0xd0))(plVar5);
            (**(code **)(*plVar5 + 0xd8))
                      (plVar5,*(undefined8 *)(param_1 + 0x78),local_50,
                       *(undefined8 *)(param_1 + 0x80));
            plVar5 = (longlong *)plVar5[0x15];
            if (plVar5 != (longlong *)0x0) {
              uVar4 = FUN_004aeac0(local_40[0],local_74);
              (**(code **)(*plVar5 + 0x108))(plVar5,uVar4);
            }
          }
          uVar4 = FUN_004aeac0(local_40[0],local_74);
          FUN_00410f20(uVar4);
        }
        local_74 = local_74 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    FUN_00410f20(local_40[0]);
  }
  else {
    FUN_00410f20(local_40[0]);
  }
  return;
}

