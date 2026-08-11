/* Ghidra address: 009751c0 */
/* Ghidra symbol: FUN_009751c0 */


void FUN_009751c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  longlong *local_38;
  longlong *local_30;
  
  local_90 = auStack_108;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091b3a8);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091b7c8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091e218);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091bb20);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091c178);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091c4e0);
            if (cVar1 == '\0') {
              cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091c858);
              if (cVar1 == '\0') {
                cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091cbd0);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091e580);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091cf98);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091d288);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091d740);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091dac8);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091de40);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_004113d0(param_2,&PTR_FUN_0091b1a0);
                              if (cVar1 == '\0') {
                                uVar7 = (**(code **)(*param_2 + 0x90))(param_2);
                                if ((uVar7 & 1) == 0) {
                                  uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,
                                                       L"Internal Parser Exception");
                                  FUN_004134c0(uVar3);
                                }
                              }
                              else {
                                (**(code **)(*param_1 + 0xa0))(param_1);
                              }
                            }
                            else {
                              FUN_009a7d90(&local_a8,param_2[0x11],param_2[0x12]);
                              FUN_009a8fa0(param_1[0x11],*(int *)(param_1[0x11] + 0x10) + 1,
                                           &local_a8);
                            }
                          }
                          else if (param_1[0x10] != 0) {
                            uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x188))
                                              ((longlong *)param_1[0x10]);
                            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0090f580);
                            if (cVar1 == '\0') {
                              uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x188))
                                                ((longlong *)param_1[0x10]);
                              uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0090eed0);
                              local_80 = FUN_00950fb0(&PTR_FUN_0090a420,1,uVar3,param_2[0x11]);
                              (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))
                                        ((longlong *)param_1[0x10],local_80);
                              param_1[0x10] = local_80;
                            }
                            else {
                              uVar3 = FUN_00414520(&local_60);
                              uVar5 = FUN_00414520(&local_68);
                              FUN_009479a0(param_2[0x11],uVar3,uVar5);
                              FUN_00975080(param_1,&local_78,local_60);
                              uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x188))
                                                ((longlong *)param_1[0x10]);
                              uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0090f580);
                              local_e8 = param_2[0x11];
                              local_80 = FUN_009511a0(&PTR_FUN_0090a420,1,uVar3,local_78);
                              (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))
                                        ((longlong *)param_1[0x10],local_80);
                              param_1[0x10] = local_80;
                            }
                          }
                        }
                        else {
                          FUN_009a91a0(param_1[0x11]);
                        }
                      }
                      else {
                        FUN_009a91a0(param_1[0x11]);
                        plVar4 = (longlong *)param_1[0x10];
                        if (plVar4 != (longlong *)0x0) {
                          cVar1 = (**(code **)(*plVar4 + 0x168))(plVar4);
                          if (cVar1 == '\b') {
                            lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090df78);
                            FUN_00414b90(lVar6 + 0xa8,param_2[0x12]);
                            lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090df78);
                            FUN_00414b90(lVar6 + 0xc0,param_2[0x11]);
                            lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090df78);
                            *(char *)(lVar6 + 200) = (char)param_2[0x13];
                            lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090df78);
                            FUN_00414b90(lVar6 + 0xd0,param_2[0x14]);
                            lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090df78);
                            (**(code **)(*param_2 + 0x68))(param_2,&local_98);
                            FUN_00414b90(lVar6 + 0x98,local_98);
                          }
                          lVar6 = param_1[0x10];
                          cVar1 = FUN_004113d0(lVar6,&PTR_FUN_0090f580);
                          if (cVar1 != '\0') {
                            lVar6 = FUN_004113f0(lVar6,&PTR_FUN_0090f580);
                            (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x90))
                                      (*(longlong **)(lVar6 + 0x130));
                          }
                        }
                      }
                    }
                  }
                  else {
                    plVar4 = (longlong *)param_1[0x10];
                    if (plVar4 != (longlong *)0x0) {
                      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4);
                      local_b0 = param_2;
                      local_58 = (longlong *)FUN_009535d0(&PTR_FUN_0090be88,1,uVar3,param_2[0x12]);
                      (**(code **)(*local_58 + 0x2c8))(local_58,local_b0[0x11]);
                      (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))
                                ((longlong *)param_1[0x10],local_58);
                    }
                  }
                }
                else {
                  plVar4 = (longlong *)param_1[0x10];
                  if (plVar4 != (longlong *)0x0) {
                    cVar1 = (**(code **)(*plVar4 + 0x168))(plVar4);
                    if (cVar1 != '\b') {
                      if (param_2 == (longlong *)0x0) {
                        plVar4 = (longlong *)0x0;
                      }
                      else {
                        plVar4 = param_2 + 0x10;
                      }
                      local_e8 = CONCAT71(local_e8._1_7_,(char)param_2[0x11]);
                      (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,param_2[0x12]);
                    }
                  }
                }
              }
              else if (param_1[0x10] != 0) {
                if (*(char *)((longlong)param_1 + 0x7d) == '\0') {
                  cVar1 = FUN_00900280(param_2[0x11]);
                  if (cVar1 != '\0') {
                    iVar2 = FUN_00416420(param_2[0x11],&PTR_DAT_00976640);
                    if (iVar2 == 0) {
                      if (param_2 == (longlong *)0x0) {
                        plVar4 = (longlong *)0x0;
                      }
                      else {
                        plVar4 = param_2 + 0x10;
                      }
                      local_e8 = local_e8 & 0xffffffffffffff00;
                      (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,&DAT_0097664c);
                    }
                    else {
                      iVar2 = FUN_00416420(param_2[0x11],&PTR_DAT_00976654);
                      if (iVar2 == 0) {
                        if (param_2 == (longlong *)0x0) {
                          plVar4 = (longlong *)0x0;
                        }
                        else {
                          plVar4 = param_2 + 0x10;
                        }
                        local_e8 = local_e8 & 0xffffffffffffff00;
                        (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,&DAT_00976660);
                      }
                      else {
                        iVar2 = FUN_00416420(param_2[0x11],&DAT_00976668);
                        if (iVar2 == 0) {
                          if (param_2 == (longlong *)0x0) {
                            plVar4 = (longlong *)0x0;
                          }
                          else {
                            plVar4 = param_2 + 0x10;
                          }
                          local_e8 = local_e8 & 0xffffffffffffff00;
                          (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,&DAT_00976674);
                        }
                        else {
                          iVar2 = FUN_00416420(param_2[0x11],L"apos");
                          if (iVar2 == 0) {
                            if (param_2 == (longlong *)0x0) {
                              plVar4 = (longlong *)0x0;
                            }
                            else {
                              plVar4 = param_2 + 0x10;
                            }
                            local_e8 = local_e8 & 0xffffffffffffff00;
                            (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,&DAT_0097668c);
                          }
                          else {
                            iVar2 = FUN_00416420(param_2[0x11],L"quot");
                            if (iVar2 == 0) {
                              if (param_2 == (longlong *)0x0) {
                                plVar4 = (longlong *)0x0;
                              }
                              else {
                                plVar4 = param_2 + 0x10;
                              }
                              local_e8 = local_e8 & 0xffffffffffffff00;
                              (**(code **)(*param_1 + 0x98))
                                        (param_1,param_2[7],plVar4,&DAT_009766a4);
                            }
                          }
                        }
                      }
                    }
                    goto code_r0x009763a3;
                  }
                }
                uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x188))((longlong *)param_1[0x10])
                ;
                local_50 = FUN_00953c10(&PTR_FUN_0090d088,1,uVar3,param_2[0x11]);
                (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))
                          ((longlong *)param_1[0x10],local_50);
              }
            }
            else {
              FUN_009a9020(param_1[0x11],*(undefined4 *)(param_1[0x11] + 0x10));
            }
          }
          else {
            plVar4 = (longlong *)param_1[0x10];
            if (plVar4 != (longlong *)0x0) {
              lVar6 = (**(code **)(*plVar4 + 0x170))(plVar4);
              param_1[0x10] = lVar6;
            }
          }
        }
        else {
          plVar4 = (longlong *)param_1[0x10];
          if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x79) != '\0')) {
            uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4);
            local_e8 = param_2[0x17];
            local_e0 = param_2[0x18];
            local_d8 = param_2[0x11];
            local_c8 = param_2;
            local_48 = FUN_00953980(&PTR_FUN_0090c850,1,uVar3,param_2[0x12]);
            *(longlong *)(local_48 + 0x98) = local_c8[0x13];
            *(longlong *)(local_48 + 0x90) = local_c8[0x14];
            *(longlong *)(local_48 + 0x88) = local_c8[0x15];
            *(longlong *)(local_48 + 0xa0) = local_c8[0x16];
            (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))((longlong *)param_1[0x10],local_48);
            lVar6 = param_1[0x10];
            cVar1 = FUN_004113d0(lVar6,&PTR_FUN_0090eed0);
            if (cVar1 != '\0') {
              if (*(char *)((longlong)param_1 + 0x79) == '\x01') {
                lVar6 = FUN_004113f0(lVar6,&PTR_FUN_0090eed0);
                local_c0 = *(longlong **)(lVar6 + 0x130);
                local_39 = (undefined1)local_c0[5];
                (**(code **)(*local_c0 + 0x78))(local_c0,*(undefined1 *)((longlong)param_1 + 0x7a));
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                (**(code **)(**(longlong **)(lVar6 + 0x130) + 0xa8))
                          (*(longlong **)(lVar6 + 0x130),0);
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                if (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x130) + 8) + 0x21) == '\x04') {
                  uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Non-wellformed DTD.");
                  FUN_004134c0(uVar3);
                }
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x78))
                          (*(longlong **)(lVar6 + 0x130),local_39);
              }
              else if (*(char *)((longlong)param_1 + 0x79) == '\x02') {
                lVar6 = FUN_004113f0(lVar6,&PTR_FUN_0090eed0);
                local_b8 = *(longlong **)(lVar6 + 0x130);
                local_39 = (undefined1)local_b8[5];
                (**(code **)(*local_b8 + 0x78))(local_b8,*(undefined1 *)((longlong)param_1 + 0x7a));
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                (**(code **)(**(longlong **)(lVar6 + 0x130) + 0xa8))
                          (*(longlong **)(lVar6 + 0x130),1);
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                if (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x130) + 8) + 0x21) == '\x04') {
                  uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Non-wellformed or invalid DTD.");
                  FUN_004134c0(uVar3);
                }
                lVar6 = FUN_004113f0(param_1[0x10],&PTR_FUN_0090eed0);
                (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x78))
                          (*(longlong **)(lVar6 + 0x130),local_39);
              }
            }
          }
        }
      }
      else if ((*(char *)((longlong)param_1 + 0x7c) != '\0') &&
              (plVar4 = (longlong *)param_1[0x10], plVar4 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4);
        local_38 = (longlong *)FUN_009534b0(&PTR_FUN_0090ba08,1,uVar3);
        (**(code **)(*local_38 + 0x2c0))(local_38,param_2[0x11]);
        (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))((longlong *)param_1[0x10],local_38);
      }
    }
    else {
      plVar4 = (longlong *)param_1[0x10];
      if (plVar4 != (longlong *)0x0) {
        if (*(char *)((longlong)param_1 + 0x7b) == '\0') {
          if (param_2 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = param_2 + 0x10;
          }
          local_e8 = local_e8 & 0xffffffffffffff00;
          (**(code **)(*param_1 + 0x98))(param_1,param_2[7],plVar4,param_2[0x11]);
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4);
          local_30 = (longlong *)FUN_00953870(&PTR_FUN_0090c3b8,1,uVar3);
          (**(code **)(*local_30 + 0x2c0))(local_30,param_2[0x11]);
          (**(code **)(*(longlong *)param_1[0x10] + 0x1b0))((longlong *)param_1[0x10],local_30);
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)param_1[0x10];
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0090f580);
      if (cVar1 == '\0') {
        plVar4 = (longlong *)FUN_004113f0(param_1[0x10],&PTR_FUN_0090a420);
        (**(code **)(*plVar4 + 0x330))(plVar4,param_2[0x12],param_2[0x13]);
      }
      else {
        iVar2 = FUN_00416420(param_2[0x12],L"xmlns");
        if (iVar2 == 0) {
          plVar4 = (longlong *)FUN_004113f0(param_1[0x10],&PTR_FUN_0090a420);
          (**(code **)(*plVar4 + 0x348))
                    (plVar4,L"http://www.w3.org/2000/xmlns/",L"xmlns",param_2[0x13]);
        }
        else {
          uVar3 = FUN_00414520(&local_60);
          uVar5 = FUN_00414520(&local_68);
          FUN_009479a0(param_2[0x12],uVar3,uVar5);
          iVar2 = FUN_00416420(local_60,0);
          if (iVar2 == 0) {
            FUN_00414520(&local_70);
          }
          else {
            iVar2 = FUN_00416420(local_60,&DAT_00976564);
            if (iVar2 == 0) {
              FUN_00414be0(&local_70,L"http://www.w3.org/XML/1998/namespace");
            }
            else {
              iVar2 = FUN_00416420(local_60,L"xmlns");
              if (iVar2 == 0) {
                FUN_00414be0(&local_70,L"http://www.w3.org/2000/xmlns/");
              }
              else {
                FUN_00975080(param_1,&local_70,local_60);
              }
            }
          }
          plVar4 = (longlong *)FUN_004113f0(param_1[0x10],&PTR_FUN_0090a420);
          (**(code **)(*plVar4 + 0x348))(plVar4,local_70,param_2[0x12],param_2[0x13]);
        }
        if (((char)param_1[0xf] != '\0') && ((char)param_2[0x11] == '\x02')) {
          uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x188))((longlong *)param_1[0x10]);
          lVar6 = FUN_004113f0(uVar3,&PTR_FUN_0090f580);
          (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x70))
                    (*(longlong **)(lVar6 + 0x130),param_2[0x13],param_1[0x10]);
        }
      }
    }
  }
code_r0x009763a3:
  FUN_00417740(&local_a8,&DAT_009427f8);
  FUN_00414520(&local_98);
  FUN_004145c0(&local_78,4);
  return;
}

