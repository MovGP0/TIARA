/* Ghidra address: 01ce5440 */
/* Ghidra symbol: FUN_01ce5440 */


void FUN_01ce5440(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,char *param_6)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  uVar6 = FUN_006d8710(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) + 0x490)
                       ,0);
  FUN_006d85c0(uVar6,0);
  cVar3 = *(char *)(param_1 + 0x58);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      if (param_5 == '\0') {
        bVar1 = false;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                          (*(longlong **)(param_1 + 0x70));
        local_74 = 1;
        if (0 < iVar4) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                              (*(longlong **)(param_1 + 0x70),local_74 + -1);
            plVar8 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
            lVar7 = plVar8[2];
            if (bVar1) {
              (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
            }
            else {
              cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
              if (cVar3 == '\0') {
                (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
              }
              else {
                bVar1 = true;
              }
            }
            if ((*param_6 == '\0') || ((char)lVar7 != (char)plVar8[2])) {
              cVar3 = '\0';
            }
            else {
              cVar3 = '\x01';
            }
            *param_6 = cVar3;
            local_74 = local_74 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))
                          (*(longlong **)(param_1 + 0x78));
        local_74 = 1;
        if (0 < iVar4) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),local_74 + -1);
            plVar8 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
            lVar7 = plVar8[2];
            if (bVar1) {
              (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
            }
            else {
              cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
              if (cVar3 == '\0') {
                (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
              }
              else {
                bVar1 = true;
              }
            }
            if ((*param_6 == '\0') || ((char)lVar7 != (char)plVar8[2])) {
              cVar3 = '\0';
            }
            else {
              cVar3 = '\x01';
            }
            *param_6 = cVar3;
            local_74 = local_74 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_74 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))
                             (*(longlong **)(param_1 + 0x80));
        if (0 < local_74) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                              (*(longlong **)(param_1 + 0x80),local_74 + -1);
            plVar8 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01aaff18);
            lVar7 = plVar8[2];
            if (bVar1) {
              (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
            }
            else {
              cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
              if (cVar3 == '\0') {
                (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
              }
              else {
                bVar1 = true;
                FUN_01ab6de0(plVar8,local_50);
                iVar4 = 0;
                if (local_50[0] != 0) {
                  iVar4 = *(int *)(local_50[0] + -4);
                }
                if (iVar4 < 1) {
                  uVar6 = FUN_006d8710(*(undefined8 *)
                                        (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) +
                                        0x490),0);
                  uVar9 = FUN_00b89270();
                  FUN_00b8e520(uVar9,&local_68,0x823);
                  uVar9 = FUN_00b89270();
                  FUN_00b8e520(uVar9,&local_70,0x824);
                  FUN_00416ad0(&local_68,local_70);
                  FUN_006d85c0(uVar6,local_68);
                }
                else {
                  uVar6 = FUN_006d8710(*(undefined8 *)
                                        (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) +
                                        0x490),0);
                  uVar9 = FUN_00b89270();
                  FUN_00b8e520(uVar9,&local_58,0x823);
                  FUN_01ab6de0(plVar8,&local_60);
                  FUN_00416ad0(&local_58,local_60);
                  FUN_006d85c0(uVar6,local_58);
                }
              }
            }
            if ((*param_6 == '\0') || ((char)lVar7 != (char)plVar8[2])) {
              cVar3 = '\0';
            }
            else {
              cVar3 = '\x01';
            }
            *param_6 = cVar3;
            local_74 = local_74 + -1;
          } while (local_74 != 0);
        }
      }
      goto code_r0x01ce5da8;
    }
    if (5 < (byte)(cVar3 - 2U)) goto code_r0x01ce5da8;
  }
  if (param_5 == '\0') {
    bVar1 = false;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_74 = 1;
    if (0 < iVar4) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_74 + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
        lVar7 = plVar8[2];
        if (bVar1) {
          (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
        }
        else {
          cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
          if (cVar3 == '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
          }
          else {
            bVar1 = true;
          }
        }
        if ((*param_6 == '\0') || ((char)lVar7 != (char)plVar8[2])) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        *param_6 = cVar3;
        local_74 = local_74 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    local_74 = 1;
    if (0 < iVar4) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_74 + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar6,&DAT_01ccbf00);
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_74 + -1);
        cVar3 = *(char *)(lVar7 + 0x10);
        if (bVar1) {
          (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
        }
        else {
          cVar2 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
          if (cVar2 == '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
          }
          else {
            bVar1 = true;
          }
        }
        if ((*param_6 == '\0') || (cVar3 != (char)plVar8[2])) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        *param_6 = cVar3;
        iVar5 = local_74 + -1;
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar5);
        if (*(longlong *)(lVar7 + 0x118) != 0) {
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar5);
          plVar8 = *(longlong **)(lVar7 + 0x118);
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar5);
          cVar3 = *(char *)(*(longlong *)(lVar7 + 0x118) + 0x10);
          if (bVar1) {
            (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
          }
          else {
            cVar2 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
            if (cVar2 == '\0') {
              (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
            }
            else {
              bVar1 = true;
            }
          }
          if ((*param_6 == '\0') || (cVar3 != (char)plVar8[2])) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
          *param_6 = cVar3;
        }
        local_74 = local_74 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_74 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80))
    ;
    if (0 < local_74) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),local_74 + -1);
        plVar8 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01d282a8);
        lVar7 = plVar8[2];
        if (bVar1) {
          (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
        }
        else {
          cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_3,param_4);
          if (cVar3 == '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,param_2);
          }
          else {
            bVar1 = true;
          }
        }
        if ((*param_6 == '\0') || ((char)lVar7 != (char)plVar8[2])) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        *param_6 = cVar3;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
  }
  else if (param_5 == '\x03') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_74 = 1;
    if (0 < iVar4) {
      do {
        plVar8 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                           (*(longlong **)(param_1 + 0x70),local_74 + -1);
        cVar3 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2,param_3,param_4);
        if ((cVar3 != '\0') &&
           (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))
                              (*(longlong **)(param_1 + 0x88)), iVar5 == 1)) {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                            (*(longlong **)(param_1 + 0x88),0);
          uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                            (*(longlong **)(param_1 + 0x70),local_74 + -1);
          FUN_01cd9880(uVar6,uVar9);
        }
        local_74 = local_74 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    local_74 = 1;
    if (0 < iVar4) {
      do {
        plVar8 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                           (*(longlong **)(param_1 + 0x78),local_74 + -1);
        cVar3 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2,param_3,param_4);
        if (((cVar3 != '\0') && (cVar3 = FUN_01ce33d0(param_1), cVar3 == '\0')) &&
           (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))
                              (*(longlong **)(param_1 + 0x88)), iVar5 == 1)) {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                            (*(longlong **)(param_1 + 0x88),0);
          uVar9 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),local_74 + -1);
          FUN_01cd98a0(uVar6,uVar9);
        }
        local_74 = local_74 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
code_r0x01ce5da8:
  FUN_00414560(&local_70,5);
  FUN_00414480(local_40);
  return;
}

