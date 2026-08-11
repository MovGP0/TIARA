/* Ghidra address: 009739d0 */
/* Ghidra symbol: FUN_009739d0 */


void FUN_009739d0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_60;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  char local_29;
  undefined8 local_28;
  undefined *local_20 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = (undefined *)0x0;
  local_28 = 0;
  local_29 = '\0';
  local_50 = param_2;
  FUN_00414520(local_20);
  FUN_00414520(&local_28);
  cVar1 = (char)param_1[0xf];
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091d288);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091d740);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_50,&PTR_FUN_00920968);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_00920e88);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091b1a0);
            if (cVar1 == '\0') {
              uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
              FUN_004134c0(uVar3);
            }
            else {
              (**(code **)(*param_1 + 0x98))(param_1);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xf) = 4;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xf) = 3;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xf) = 2;
        (**(code **)(*(longlong *)param_1[0x11] + 0x90))((longlong *)param_1[0x11]);
        (**(code **)(*(longlong *)param_1[0x13] + 0x90))((longlong *)param_1[0x13]);
        *(undefined1 *)((longlong)param_1 + 0x79) = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xf) = 1;
      (**(code **)(*(longlong *)param_1[0x11] + 0x90))((longlong *)param_1[0x11]);
      (**(code **)(*(longlong *)param_1[0x13] + 0x90))((longlong *)param_1[0x13]);
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091b7c8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091bb20);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091c178);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091c858);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091cbd0);
            plVar5 = local_50;
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091cf98);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091dac8);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091de40);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091c4e0);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091af90);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091b1a0);
                        if (cVar1 == '\0') {
                          uVar2 = (**(code **)(*local_50 + 0x90))(local_50);
                          if ((uVar2 & 1) == 0) {
                            uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
                            FUN_004134c0(uVar3);
                          }
                        }
                        else {
                          (**(code **)(*param_1 + 0x98))(param_1);
                        }
                      }
                      else {
                        if ((char)param_1[0x12] == '\0') {
                          local_29 = '_';
                          FUN_00414520(local_20);
                        }
                        else if ((char)param_1[0x12] == '\x01') {
                          local_29 = 'Q';
                          FUN_00414520(local_20);
                          FUN_00973960(auStack_88,local_40);
                          FUN_00414be0(&local_28,local_40[0]);
                        }
                        else {
                          *(undefined1 *)((longlong)param_1 + 0x79) = 0;
                          *(undefined1 *)(param_1 + 0x12) = 0;
                        }
                        *(undefined1 *)(param_1 + 0xf) = 0;
                      }
                    }
                    else {
                      FUN_00973850(auStack_88,local_50,&local_29,local_20);
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)param_1[0x11] + 0x68))
                              ((longlong *)param_1[0x11],local_50[0x11]);
                  }
                }
                else if ((char)param_1[0x12] == '\x02') {
                  local_29 = ':';
                  FUN_00414be0(local_20,local_50[0x11]);
                }
                else {
                  *(undefined1 *)(param_1 + 0x12) = 1;
                  (**(code **)(*(longlong *)param_1[0x13] + 0x68))
                            ((longlong *)param_1[0x13],local_50[0x11]);
                }
              }
            }
            else if ((char)param_1[0x12] != '\x01') {
              if ((char)local_50[0x11] == '\0') {
                cVar1 = FUN_008ff640(local_50[0x12]);
                if (cVar1 == '\0') {
                  local_29 = 'W';
                  FUN_00414be0(local_20,plVar5[0x12]);
                }
              }
              else {
                local_29 = 'W';
                FUN_00414be0(local_20,&DAT_009742a4);
              }
            }
          }
          else if ((char)param_1[0x12] != '\x01') {
            local_29 = 'W';
            local_68 = &DAT_0097429c;
            FUN_00416310(local_20,3,&DAT_00974294,local_50[0x11]);
          }
        }
        else {
          FUN_00973720(auStack_88,local_50,&local_29,local_20);
        }
      }
      else {
        FUN_009736c0(auStack_88,local_50,&local_29,local_20);
      }
    }
    else if ((char)param_1[0x12] != '\x01') {
      local_29 = 'W';
      FUN_00414be0(local_20,local_50[0x11]);
    }
  }
  else if (cVar1 == '\x02') {
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091bb20);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091c178);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091cf98);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091dac8);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091de40);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091c4e0);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091af90);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091b1a0);
                  if (cVar1 == '\0') {
                    uVar2 = (**(code **)(*local_50 + 0x90))(local_50);
                    if ((uVar2 & 1) == 0) {
                      uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
                      FUN_004134c0(uVar3);
                    }
                  }
                  else {
                    (**(code **)(*param_1 + 0x98))(param_1);
                  }
                }
                else {
                  if ((char)param_1[0x12] == '\x01') {
                    local_29 = 'Q';
                    FUN_00414520(local_20);
                    FUN_00973960(auStack_88,&local_48);
                    FUN_00414be0(&local_28,local_48);
                  }
                  else {
                    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
                    *(undefined1 *)(param_1 + 0x12) = 0;
                  }
                  *(undefined1 *)(param_1 + 0xf) = 0;
                }
              }
              else {
                FUN_00973850(auStack_88,local_50,&local_29,local_20);
              }
            }
            else {
              (**(code **)(*(longlong *)param_1[0x11] + 0x68))
                        ((longlong *)param_1[0x11],local_50[0x11]);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x12) = 1;
            (**(code **)(*(longlong *)param_1[0x13] + 0x68))
                      ((longlong *)param_1[0x13],local_50[0x11]);
          }
        }
      }
      else {
        FUN_00973720(auStack_88,local_50,&local_29,local_20);
      }
    }
    else {
      FUN_009736c0(auStack_88,local_50,&local_29,local_20);
    }
  }
  else if ((byte)(cVar1 - 3U) < 2) {
    uVar2 = (**(code **)(*local_50 + 0x90))(local_50);
    if ((uVar2 & 2) == 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
      FUN_004134c0(uVar3);
    }
    cVar1 = FUN_004113d0(local_50,&PTR_FUN_0091af90);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  if (local_29 == '\0') {
    uVar3 = FUN_00414520(local_20);
    uVar4 = FUN_00414520(&local_28);
    (**(code **)(*local_50 + 0x80))(local_50,&local_29,uVar3,uVar4);
  }
  if (local_29 == '\0') {
    plVar5 = (longlong *)param_1[0x10];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x90))(plVar5,local_50);
    }
  }
  else {
    if (local_50 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = local_50 + 0x10;
    }
    local_68 = local_20[0];
    local_60 = local_28;
    (**(code **)(*param_1 + 0x88))(param_1,local_50[7],local_29,plVar5);
  }
  FUN_004145c0(&local_48,2);
  FUN_004145c0(&local_28,2);
  return;
}

