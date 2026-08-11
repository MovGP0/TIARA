/* Ghidra address: 00977560 */
/* Ghidra symbol: FUN_00977560 */


void FUN_00977560(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined1 local_70;
  longlong **local_68;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_3a;
  char local_39;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_50 = auStack_a8;
  local_58 = 0;
  local_48 = 0;
  plVar6 = (longlong *)param_1[0xf];
  puVar1 = auStack_a8;
  if (plVar6 != (longlong *)0x0) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091e960);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091ef88);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091f3d8);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091fd68);
          if (cVar2 == '\0') {
            cVar2 = FUN_004113d0(param_2,&PTR_FUN_00920750);
            if (cVar2 == '\0') {
              cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091f9d0);
              if (cVar2 == '\0') {
                uVar4 = FUN_004113d0(param_2,&PTR_FUN_00920968);
                if ((char)uVar4 == '\0') {
                  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00920e88);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091af90);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_004113d0(param_2,&PTR_FUN_0091b1a0);
                      if (cVar2 == '\0') {
                        uVar5 = (**(code **)(*param_2 + 0x90))(param_2);
                        puVar1 = local_50;
                        if ((uVar5 & 2) == 0) {
                          uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
                          FUN_004134c0(uVar4);
                          puVar1 = local_50;
                        }
                      }
                      else {
                        (**(code **)(*param_1 + 0xb0))(param_1);
                        puVar1 = local_50;
                      }
                    }
                    else {
                      if ((char)param_1[0x10] == '\x04') {
                        if (*(char *)((longlong)plVar6 + 0x21) == '\x01') {
                          (**(code **)(*plVar6 + 8))(plVar6,5);
                        }
                      }
                      else if ((char)param_1[0x10] == '\x03') {
                        if (*(char *)((longlong)plVar6 + 0x21) == '\x01') {
                          (**(code **)(*plVar6 + 8))(plVar6,6);
                        }
                      }
                      else {
                        uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
                        FUN_004134c0(uVar4);
                      }
                      *(undefined1 *)(param_1 + 0x10) = 0;
                      *(undefined1 *)((longlong)param_1 + 0x81) = 2;
                      puVar1 = local_50;
                    }
                  }
                  else {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                    FUN_00414b90(param_1[0xf] + 0x10,param_2[0x11]);
                    *(char *)((longlong)param_1 + 0x81) = (char)param_2[0x12];
                    *(undefined1 *)(param_1 + 0x10) = 4;
                    puVar1 = local_50;
                  }
                }
                else {
                  if (*(byte *)((longlong)plVar6 + 0x21) < 8) {
                    bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) <<
                             (*(byte *)((longlong)plVar6 + 0x21) & 0x1f) & 0xe1U) != 0;
                  }
                  else {
                    bVar7 = false;
                  }
                  if (bVar7) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                  FUN_00414b90(param_1[0xf] + 8,param_2[0x14]);
                  *(undefined1 *)(param_1 + 0x10) = 3;
                  puVar1 = local_50;
                }
              }
              else if ((char)param_1[0x10] == '\x04') {
                if (*(byte *)((longlong)param_1 + 0x81) < 8) {
                  bVar7 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                           (*(byte *)((longlong)param_1 + 0x81) & 0x1f) & 6U) != 0;
                }
                else {
                  bVar7 = false;
                }
                if (bVar7) {
                  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
                  (**(code **)(*(longlong *)param_1[0xf] + 8))((longlong *)param_1[0xf],3);
                  puVar1 = local_50;
                }
                else {
                  (**(code **)(*plVar6 + 8))(plVar6,2);
                  puVar1 = local_50;
                }
              }
              else {
                uVar4 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
                FUN_004134c0(uVar4);
                puVar1 = local_50;
              }
            }
            else {
              puVar1 = local_50;
              if ((char)param_1[0x10] == '\x04') {
                *(undefined1 *)(plVar6 + 4) = 1;
              }
            }
          }
          else {
            puVar1 = local_50;
            if (*(char *)((longlong)param_1 + 0x82) == '\0') {
              if (((char)param_1[0x10] == '\x03') || ((char)param_2[0x14] != '\0')) {
                local_3a = 1;
              }
              else {
                local_3a = 0;
              }
              local_88 = (undefined8 *)CONCAT71(local_88._1_7_,local_3a);
              local_80 = local_38;
              cVar2 = (**(code **)(*(longlong *)param_1[0xf] + 0x78))
                                ((longlong *)param_1[0xf],param_2[0x11],param_2[0x12],param_2[0x13])
              ;
              puVar1 = local_50;
              if (cVar2 == '\0') {
                if (param_2 == (longlong *)0x0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = param_2 + 0x10;
                }
                local_88 = (undefined8 *)param_2[0x11];
                local_80 = (undefined1 *)0x0;
                (**(code **)(*param_1 + 0x88))(param_1,param_2[7],0x13,plVar6);
                puVar1 = local_50;
              }
            }
          }
        }
        else {
          puVar1 = local_50;
          if (*(char *)((longlong)param_1 + 0x82) == '\0') {
            if (((char)param_1[0x10] == '\x03') || ((char)param_2[0x17] != '\0')) {
              local_3a = 1;
            }
            else {
              local_3a = 0;
            }
            FUN_00947c70(&local_58,param_2[0x12]);
            local_88 = (undefined8 *)param_2[0x16];
            local_80 = (undefined1 *)param_2[0x14];
            local_78 = param_2[0x11];
            local_70 = local_3a;
            local_68 = &local_30;
            cVar2 = (**(code **)(*(longlong *)param_1[0xf] + 0x70))
                              ((longlong *)param_1[0xf],param_2[0x15],local_58,param_2[0x13]);
            if (cVar2 == '\0') {
              if (param_2 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                plVar6 = param_2 + 0x10;
              }
              local_88 = (undefined8 *)param_2[0x15];
              local_80 = (undefined1 *)0x0;
              (**(code **)(*param_1 + 0x88))(param_1,param_2[7],4,plVar6);
              puVar1 = local_50;
            }
            else {
              cVar2 = (**(code **)(*local_30 + 0x18))(local_30);
              puVar1 = local_50;
              if (cVar2 == '\0') {
                if (param_2 == (longlong *)0x0) {
                  plVar6 = (longlong *)0x0;
                }
                else {
                  plVar6 = param_2 + 0x10;
                }
                local_88 = (undefined8 *)param_2[0x15];
                local_80 = (undefined1 *)0x0;
                (**(code **)(*param_1 + 0x88))(param_1,param_2[7],0x5c,plVar6);
                puVar1 = local_50;
              }
            }
          }
        }
      }
      else {
        if (*(char *)((longlong)param_1 + 0x82) == '\0') {
          FUN_00947610(&local_48,param_2[0x11]);
        }
        iVar3 = FUN_00416420(local_48,L"EMPTY");
        if (iVar3 == 0) {
          local_39 = '\x01';
          FUN_00414520(&local_48);
        }
        else {
          iVar3 = FUN_00416420(local_48,&DAT_00977efc);
          if (iVar3 == 0) {
            local_39 = '\0';
            FUN_00414520(&local_48);
          }
          else {
            iVar3 = FUN_00417170(L"#PCDATA",local_48,1);
            if (iVar3 < 1) {
              local_39 = '\x02';
            }
            else {
              local_39 = '\x03';
            }
          }
        }
        if (((char)param_1[0x10] == '\x03') || ((char)param_2[0x13] != '\0')) {
          local_3a = 1;
        }
        else {
          local_3a = 0;
        }
        local_88 = &local_28;
        cVar2 = (**(code **)(*(longlong *)param_1[0xf] + 0x68))
                          ((longlong *)param_1[0xf],param_2[0x12],local_39,local_3a);
        if (cVar2 == '\0') {
          if (param_2 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = param_2 + 0x10;
          }
          local_88 = (undefined8 *)param_2[0x12];
          local_80 = (undefined1 *)0x0;
          (**(code **)(*param_1 + 0x88))(param_1,param_2[7],0xe,plVar6);
          puVar1 = local_50;
        }
        else if (local_39 == '\x02') {
          (**(code **)(*param_1 + 0xa0))(param_1,local_28,param_2[0x11]);
          puVar1 = local_50;
        }
        else {
          puVar1 = local_50;
          if (local_39 == '\x03') {
            (**(code **)(*param_1 + 0x98))(param_1,local_28,param_2[0x11]);
            puVar1 = local_50;
          }
        }
      }
    }
    else {
      puVar1 = local_50;
      if (*(char *)((longlong)param_1 + 0x82) == '\0') {
        if (((char)param_1[0x10] == '\x03') || ((char)param_2[0x16] != '\0')) {
          local_3a = 1;
        }
        else {
          local_3a = 0;
        }
        local_88 = (undefined8 *)param_2[0x14];
        local_80 = (undefined1 *)CONCAT71(local_80._1_7_,(char)param_2[0x12]);
        local_78 = CONCAT71(local_78._1_7_,*(undefined1 *)((longlong)param_2 + 0x91));
        local_70 = local_3a;
        local_68 = local_20;
        cVar2 = (**(code **)(*(longlong *)param_1[0xf] + 0x60))
                          ((longlong *)param_1[0xf],param_2[0x15],param_2[0x11],param_2[0x13]);
        puVar1 = local_50;
        if (cVar2 == '\0') {
          if (param_2 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = param_2 + 0x10;
          }
          local_88 = (undefined8 *)param_2[0x11];
          local_80 = (undefined1 *)0x0;
          (**(code **)(*param_1 + 0x88))(param_1,param_2[7],3,plVar6);
          puVar1 = local_50;
        }
      }
    }
  }
  local_50 = puVar1;
  FUN_00414520(&local_58);
  FUN_00414520(&local_48);
  return;
}

