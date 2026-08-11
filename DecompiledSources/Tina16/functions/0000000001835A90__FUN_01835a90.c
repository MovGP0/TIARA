/* Ghidra address: 01835a90 */
/* Ghidra symbol: FUN_01835a90 */


char FUN_01835a90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined8 local_120;
  undefined *local_118;
  longlong local_100;
  char local_f2;
  char local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90 [2];
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  local_90[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = 0;
  local_48 = 0;
  local_f2 = '\x01';
  local_4c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) + 0x84);
  local_100 = param_2;
  local_3c = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))(*(longlong **)(param_1 + 0x68));
  FUN_0043e600(&local_60,*(undefined8 *)(local_100 + 0x18));
  FUN_0181e5f0(local_100,local_90,L"text");
  FUN_0043e600(&local_70,local_90[0]);
  FUN_0181e5f0(local_100,&local_98,L"node");
  FUN_0043e1a0(&local_48,local_98);
  local_f1 = *(longlong *)(local_100 + 0x20) == *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x48);
  cVar9 = '\0';
  cVar3 = '\0';
  bVar2 = false;
  FUN_00414480(&local_68);
  if (local_f1 == '\0') {
    iVar5 = FUN_00416db0(local_60,L"char");
    if (iVar5 == 0) {
      FUN_0181e5f0(local_100,&local_a0,L"skip");
      iVar5 = FUN_00416db0(local_a0,&DAT_0183670c);
      if (iVar5 != 0) {
        FUN_018210c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30));
      }
      FUN_018217f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
      bVar2 = true;
      cVar3 = cVar9;
    }
    else {
      iVar5 = FUN_00416db0(local_60,L"keyword");
      if (iVar5 == 0) {
        FUN_018217d0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
        bVar2 = true;
        cVar3 = cVar9;
      }
      else {
        iVar5 = FUN_00416db0(local_60,L"ident");
        if (iVar5 == 0) {
          FUN_01821790(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
          bVar2 = true;
          cVar3 = cVar9;
        }
        else {
          iVar5 = FUN_00416db0(local_60,L"number");
          if (iVar5 == 0) {
            FUN_018222a0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
            bVar2 = true;
          }
          else {
            iVar5 = FUN_00416db0(local_60,L"string");
            if (iVar5 == 0) {
              FUN_01821e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
              bVar2 = true;
            }
            else {
              iVar5 = FUN_00416db0(local_60,L"frstring");
              if (iVar5 == 0) {
                FUN_018223a0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_68);
                FUN_01822540(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_58);
                local_138 = L"\">";
                FUN_00416cd0(&local_a8,3,L"<dsgn pos=\"",local_58);
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),local_a8);
                local_138 = L"\"/>";
                FUN_00416cd0(&local_b0,3,L"<node text=\"Get\" pos=\"",local_58);
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),local_b0);
                local_138 = L"\">";
                FUN_00416cd0(&local_b8,3,L"<expr pos=\"",local_58);
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),local_b8);
                FUN_0181dff0(&local_c8,local_68);
                local_138 = L"\'\" pos=\"";
                local_130 = local_58;
                local_128 = L"\"/>";
                FUN_00416cd0(&local_c0,5,L"<string text=\"\'",local_c8);
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),local_c0);
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),L"</expr>");
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                          (*(longlong **)(param_1 + 0x68),L"</dsgn>");
                bVar2 = true;
              }
              else {
                iVar5 = FUN_00416db0(local_60,&DAT_018368d8);
                if (iVar5 == 0) {
                  cVar3 = FUN_01821020(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30));
                }
                else {
                  iVar5 = FUN_00416db0(local_60,L"sequence");
                  if (iVar5 == 0) {
                    cVar3 = '\x01';
                  }
                  else {
                    iVar5 = FUN_00416db0(local_60,L"switch");
                    if ((iVar5 == 0) ||
                       (iVar5 = FUN_00416db0(local_60,L"optionalswitch"), iVar5 == 0)) {
                      cVar3 = '\x01';
                      iVar5 = FUN_0181e3e0();
                      iVar8 = 0;
                      if (-1 < iVar5 + -1) {
                        do {
                          uVar6 = FUN_0181e3c0(local_100,iVar8);
                          cVar3 = FUN_01835a90(param_1,uVar6);
                          if (cVar3 != '\0') break;
                          iVar8 = iVar8 + 1;
                          iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                      }
                      if ((cVar3 == '\0') &&
                         (iVar5 = FUN_00416db0(local_60,L"optionalswitch"), iVar5 != 0)) {
                        local_f2 = '\0';
                        FUN_01835830(auStack_158,local_100);
                      }
                      goto LAB_01836613;
                    }
                    iVar5 = FUN_00416db0(local_60,L"loop");
                    if ((iVar5 == 0) || (iVar5 = FUN_00416db0(local_60,L"optionalloop"), iVar5 == 0)
                       ) {
                      iVar5 = 0;
                      do {
                        iVar5 = iVar5 + 1;
                        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) + 0x84)
                        ;
                        iVar4 = FUN_0181e3e0();
                        iVar7 = 0;
                        bVar2 = false;
                        if (-1 < iVar4 + -1) {
                          do {
                            uVar6 = FUN_0181e3c0(local_100,iVar7);
                            local_f2 = FUN_01835a90(param_1,uVar6);
                            if (local_f2 == '\0') {
                              bVar2 = true;
                              break;
                            }
                            iVar7 = iVar7 + 1;
                            iVar4 = iVar4 + -1;
                            bVar2 = false;
                          } while (iVar4 != 0);
                        }
                        uVar1 = *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) + 0x84);
                        if ((local_f2 != '\0') && (local_70 != (undefined8 *)0x0)) {
                          FUN_018210c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30));
                          FUN_018217f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),
                                       &local_d0);
                          iVar4 = FUN_00416db0(local_d0,local_70);
                          if (iVar4 != 0) {
                            FUN_01820ee0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),uVar1
                                        );
                            bVar2 = true;
                          }
                        }
                        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) + 0x84) ==
                            iVar8) {
                          bVar2 = true;
                        }
                      } while (!bVar2);
                      if (1 < iVar5) {
                        FUN_0181e5f0(local_100,&local_d8,L"skip");
                        iVar5 = FUN_00416db0(local_d8,&DAT_01836994);
                        if ((iVar5 == 0) || (*(char *)(param_1 + 0x67) != '\0')) {
                          FUN_00414480(param_1 + 0x78);
                        }
                        FUN_01820ee0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),uVar1);
                        local_f2 = '\x01';
                      }
                      iVar5 = FUN_00416db0(local_60,L"optionalloop");
                      if (iVar5 == 0) {
                        if (local_f2 == '\0') {
                          FUN_01820ee0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),
                                       local_4c);
                        }
                        local_f2 = '\x01';
                      }
                      goto LAB_01836613;
                    }
                    iVar5 = FUN_00416db0(local_60,L"optional");
                    if (iVar5 == 0) {
                      iVar5 = FUN_0181e3e0();
                      iVar8 = 0;
                      if (-1 < iVar5 + -1) {
                        do {
                          uVar6 = FUN_0181e3c0(local_100,iVar8);
                          cVar3 = FUN_01835a90(param_1,uVar6);
                          if (cVar3 == '\0') {
                            FUN_01820ee0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),
                                         local_4c);
                            break;
                          }
                          iVar8 = iVar8 + 1;
                          iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                      }
                      goto LAB_01836613;
                    }
                    iVar5 = FUN_0181e510(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x48),
                                         local_60);
                    if (iVar5 == -1) {
                      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02001ce8);
                      FUN_004134c0(uVar6);
                    }
                    uVar6 = FUN_0181e3c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x48),iVar5
                                        );
                    cVar3 = FUN_01835a90(param_1,uVar6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar2 = false;
    cVar3 = '\x01';
  }
  if (bVar2) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x30) + 8) == '\0') {
      if ((local_68 == 0) ||
         ((local_70 != (undefined8 *)0x0 && (iVar5 = FUN_0043e6d0(local_68,local_70), iVar5 != 0))))
      {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
    }
    else if ((local_68 == 0) ||
            ((local_70 != (undefined8 *)0x0 && (iVar5 = FUN_00416db0(local_68,local_70), iVar5 != 0)
             ))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
  }
  if (cVar3 == '\0') {
    local_f2 = '\0';
    FUN_01835830(auStack_158,local_100);
  }
  else {
    if (local_f1 == '\0') {
      FUN_01835340(auStack_158,1);
    }
    FUN_0181e5f0(local_100,&local_78,&DAT_018369c4);
    FUN_0181e5f0(local_100,&local_80,L"addtext");
    if (local_78 != 0) {
      if (local_80 == 0) {
        FUN_00414b50(&local_58,local_68);
      }
      else {
        FUN_00414b50(&local_58,local_80);
      }
      FUN_0181dff0(&local_e8,local_58);
      FUN_01822540(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),&local_f0);
      local_138 = L" text=\"";
      local_130 = local_e8;
      local_128 = L"\" pos=\"";
      local_120 = local_f0;
      local_118 = &DAT_0183681c;
      FUN_00416cd0(&local_e0,7,&DAT_018369f4,local_78);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),local_e0)
      ;
    }
    iVar5 = FUN_0181e3e0();
    iVar8 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar6 = FUN_0181e3c0(local_100,iVar8);
        local_f2 = FUN_01835a90(param_1,uVar6);
        if (local_f2 == '\0') break;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (local_f2 == '\0') {
    FUN_01820ee0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30),local_4c);
  }
  if (local_f1 != '\0') {
    FUN_01835340(auStack_158,local_f2);
  }
LAB_01836613:
  FUN_00414560(&local_f0,0xd);
  FUN_00414560(&local_80,6);
  FUN_00414480(&local_48);
  return local_f2;
}

