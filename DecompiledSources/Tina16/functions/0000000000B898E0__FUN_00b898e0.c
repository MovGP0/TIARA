/* Ghidra address: 00b898e0 */
/* Ghidra symbol: FUN_00b898e0 */


void FUN_00b898e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  int local_1c;
  
  local_40 = auStack_68;
  PTR_DAT_02005bd0[0xc] = 0;
  PTR_DAT_02005bd0[0xd] = 0;
  if (*(char *)((longlong)param_2 + 0xb1) != *(char *)(param_1 + 0x2e)) {
    puVar2 = auStack_68;
    if (*(char *)(param_1 + 0x2c) != '\0') {
      pcVar6 = (code *)FUN_00411550(param_2,0xffb1);
      (*pcVar6)(param_2,1);
      puVar2 = local_40;
    }
    local_40 = puVar2;
    (**(code **)(*param_2 + 0x140))(param_2,*(undefined1 *)(param_1 + 0x2e));
    uVar7 = FUN_0065b870(param_2);
    FUN_00b89620(param_1,uVar7,*(undefined1 *)(param_1 + 0x2e),0);
    iVar4 = FUN_004d3e30();
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_30 = (longlong *)FUN_004d3de0(param_2,local_1c);
        cVar3 = FUN_004113d0(local_30,&PTR_FUN_0063d930);
        if (cVar3 != '\0') {
          (**(code **)(*local_30 + 0x140))(local_30,*(undefined1 *)(param_1 + 0x2e));
        }
        cVar3 = FUN_004113d0(local_30,&PTR_FUN_00733e50);
        if (cVar3 == '\0') {
          cVar3 = FUN_004113d0(local_30,&PTR_FUN_00669e80);
          if (((cVar3 == '\0') && (cVar3 = FUN_004113d0(local_30,&LAB_0067a568), cVar3 == '\0')) &&
             (cVar3 = FUN_004113d0(local_30,&PTR_FUN_006686f0), cVar3 == '\0')) {
            cVar3 = FUN_004113d0(local_30,&PTR_FUN_006747f8);
            plVar1 = local_30;
            if (cVar3 == '\0') {
              cVar3 = FUN_004113d0(local_30,&PTR_FUN_006ae898);
              plVar1 = local_30;
              if (cVar3 == '\0') {
                cVar3 = FUN_004113d0(local_30,&PTR_FUN_006ac6a0);
                if (cVar3 == '\0') {
                  cVar3 = FUN_004113d0(local_30,&PTR_FUN_007db330);
                  if (cVar3 == '\0') {
                    cVar3 = FUN_004113d0(local_30,&PTR_FUN_007dba80);
                    if (cVar3 == '\0') {
                      cVar3 = FUN_004113d0(local_30,&PTR_FUN_006cb0d0);
                      if (cVar3 == '\0') {
                        cVar3 = FUN_004113d0(local_30,&PTR_FUN_008228b0);
                        if (cVar3 == '\0') {
                          cVar3 = FUN_004113d0(local_30,&PTR_FUN_00732f28);
                          if (cVar3 == '\0') {
                            cVar3 = FUN_004113d0(local_30,&PTR_FUN_00670158);
                            if (cVar3 == '\0') {
                              cVar3 = FUN_004113d0(local_30,&PTR_FUN_0073c578);
                              if (cVar3 == '\0') {
                                cVar3 = FUN_004113d0(local_30,&PTR_FUN_00b089c8);
                                if (cVar3 == '\0') {
                                  FUN_004113d0(local_30,&PTR_FUN_0083c350);
                                }
                                else {
                                  FUN_00b89850(local_30);
                                }
                              }
                            }
                            else {
                              FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
                            }
                          }
                          else {
                            FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
                          }
                        }
                        else {
                          FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
                        }
                      }
                      else {
                        FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
                      }
                    }
                    else {
                      FUN_00b897e0(param_1,local_30);
                    }
                  }
                  else {
                    FUN_00b897e0(param_1,local_30);
                  }
                }
                else {
                  uVar7 = FUN_0065b870(local_30);
                  FUN_00b89620(param_1,uVar7,*(undefined1 *)(param_1 + 0x2e),0xffffffff);
                }
              }
              else {
                FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
                uVar7 = FUN_0065b870(plVar1);
                FUN_00b89620(param_1,uVar7,*(undefined1 *)(param_1 + 0x2e),0xffffffff);
                FUN_0064cbf0(plVar1[0xa6],0x96);
              }
            }
            else {
              uVar5 = FUN_00b895f0(param_1,(char)local_30[0x93],*(undefined1 *)(param_1 + 0x2e));
              FUN_00689d60(plVar1,uVar5);
            }
          }
        }
        else {
          FUN_00b894a0(param_1,local_30,*(undefined1 *)(param_1 + 0x2e));
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar7 = FUN_0065b870(param_2);
    thunk_FUN_0401553e(uVar7);
  }
  return;
}

