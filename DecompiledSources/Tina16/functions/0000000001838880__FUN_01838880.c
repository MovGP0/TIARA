/* Ghidra address: 01838880 */
/* Ghidra symbol: FUN_01838880 */


longlong FUN_01838880(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  longlong local_b8;
  longlong local_b0;
  char local_a2;
  char local_a1;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_41;
  longlong local_40 [4];
  
  local_d0 = auStack_178;
  local_140 = 0;
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_90 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_68 = FUN_0184b540(&PTR_FUN_018467e8,1,param_3);
  iVar2 = FUN_0181e3e0();
  local_84 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = FUN_0181e3c0(param_2,local_84);
      FUN_01837010(param_1,uVar5);
      lVar6 = FUN_0181e3c0(param_2,local_84);
      FUN_0043e1a0(&local_58,*(undefined8 *)(lVar6 + 0x18));
      uVar5 = FUN_0181e3c0(param_2,local_84);
      FUN_0181e5f0(uVar5,&local_50,L"text");
      iVar3 = FUN_00416db0(local_58,L"node");
      if (iVar3 == 0) {
        local_60 = FUN_018472d0(&PTR_FUN_01846538,1);
        FUN_01847420(local_68,local_60);
        FUN_00414ad0(local_60 + 0x20,*(undefined8 *)(param_1 + 8));
        iVar3 = FUN_01847410(local_68);
        if (iVar3 == 1) {
          cVar1 = FUN_01838260(auStack_178,local_50,local_68,local_60);
          if (cVar1 == '\0') {
            uVar5 = FUN_01837350(param_1,param_3,local_50);
            *(undefined8 *)(local_60 + 0x18) = uVar5;
          }
          if (local_41 != '\0') goto LAB_01839800;
          if (param_4 == '\x01') {
            cVar1 = FUN_004113d0(*(undefined8 *)(local_60 + 0x18),&PTR_FUN_01845a18);
            if (cVar1 == '\0') {
              uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02003288);
              FUN_004134c0(uVar5);
            }
            local_98 = *(longlong *)(local_60 + 0x18);
            local_60 = FUN_018472d0(&PTR_FUN_01846538,1);
            FUN_01847420(local_68,local_60);
            uVar5 = FUN_0184b380(local_98,L"Create",1);
            *(undefined8 *)(local_60 + 0x18) = uVar5;
          }
        }
        else {
          iVar3 = FUN_01847410(local_68);
          local_78 = FUN_0184b910(local_68,iVar3 + -2);
          lVar6 = *(longlong *)(local_78 + 0x18);
          cVar1 = FUN_004113d0(lVar6,&PTR_FUN_01844e48);
          if (((cVar1 == '\0') || (*(char *)(lVar6 + 200) == '\0')) ||
             (*(char *)(local_78 + 0x10) != '\0')) {
            local_a2 = '\0';
          }
          else {
            local_a2 = '\x01';
          }
          local_a1 = *(char *)(lVar6 + 0x48);
          if ((local_a1 == '\a') && (local_a2 == '\0')) {
            (**(code **)(**(longlong **)(local_78 + 0x18) + 0x10))
                      (*(longlong **)(local_78 + 0x18),local_40);
            cVar1 = FUN_0046c3d0(local_40);
            if (cVar1 != '\0') {
              FUN_01847440(local_68,local_60);
              FUN_00410f20(local_60);
              FUN_0184b750(local_68);
              uVar5 = FUN_00410e60(&DAT_0181ce38,1);
              *(undefined8 *)(local_68 + 0xb0) = uVar5;
              FUN_0181ec30(uVar5,param_2);
              goto LAB_01839800;
            }
            if (((ushort)local_40[0] == 0x100) || ((ushort)local_40[0] == 0x102)) {
              local_a1 = '\x04';
            }
            else {
              if ((ushort)local_40[0] == 9) {
                FUN_01847440(local_68,local_60);
                FUN_00410f20(local_60);
                FUN_01838540(auStack_178,local_84);
                FUN_0184b750(local_68);
                goto LAB_01839800;
              }
              if (((ushort)local_40[0] & 0x2000) == 0x2000) {
                iVar3 = FUN_00416db0(local_50,&DAT_0183995c);
                if (iVar3 == 0) {
                  uVar5 = FUN_01837350(param_1,param_3,L"__ArrayHelper");
                  *(undefined8 *)(local_60 + 0x18) = uVar5;
                }
                else {
                  uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02004f78);
                  FUN_004134c0(uVar5);
                }
                goto LAB_01839385;
              }
              local_a1 = '\x05';
              (**(code **)(**(longlong **)(local_78 + 0x18) + 0x10))
                        (*(longlong **)(local_78 + 0x18),&local_e8);
              puVar7 = (undefined8 *)FUN_004634b0(&local_e8);
              FUN_00410ae0(*puVar7,*(longlong *)(local_78 + 0x18) + 0x50);
            }
          }
          if (local_a2 == '\0') {
            if (local_a1 == '\x04') {
              iVar3 = FUN_00416db0(local_50,&DAT_0183995c);
              if (iVar3 == 0) {
                uVar5 = FUN_01837350(param_1,param_3,L"__StringHelper");
                *(undefined8 *)(local_60 + 0x18) = uVar5;
              }
              else {
                uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02004768);
                FUN_004134c0(uVar5);
              }
            }
            else if (local_a1 == '\x05') {
              FUN_00414b50(&local_90,*(undefined8 *)(*(longlong *)(local_78 + 0x18) + 0x50));
              local_98 = FUN_01837140(param_1,local_90);
              iVar3 = FUN_00416db0(local_50,&DAT_0183995c);
              if (iVar3 == 0) {
                *(undefined1 *)(local_60 + 0x10) = 1;
                lVar6 = *(longlong *)(local_98 + 0x98);
                *(longlong *)(local_60 + 0x18) = lVar6;
                if (lVar6 == 0) {
                  local_f8 = local_90;
                  local_f0 = 0x11;
                  local_158 = (longlong *)((ulonglong)local_158 & 0xffffffff00000000);
                  uVar5 = FUN_0044d530(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02001a50,&local_f8
                                      );
                  FUN_004134c0(uVar5);
                }
              }
              else {
                lVar6 = FUN_0184b380(local_98,local_50,0);
                *(longlong *)(local_60 + 0x18) = lVar6;
                if (lVar6 == 0) {
                  (**(code **)(**(longlong **)(local_78 + 0x18) + 0x10))
                            (*(longlong **)(local_78 + 0x18),local_40);
                  cVar1 = FUN_0046c3d0(local_40);
                  if (cVar1 == '\0') {
                    FUN_00468530(&local_110,0,1);
                    cVar1 = FUN_0046f320(local_40,&local_110);
                    if (cVar1 != '\0') goto LAB_01838fbb;
                  }
                  else {
LAB_01838fbb:
                    if ((*(char *)(param_3 + 0xb0) == '\0') && (*(char *)(param_3 + 0x150) != '\0'))
                    {
                      FUN_01847440(local_68,local_60);
                      FUN_00410f20(local_60);
                      while (iVar2 = FUN_01847410(local_68), 1 < iVar2) {
                        iVar2 = FUN_01847410(local_68);
                        local_60 = FUN_0184b910(local_68,iVar2 + -1);
                        FUN_01847440(local_68,local_60);
                        FUN_00410f20(local_60);
                      }
                      local_60 = FUN_0184b910(local_68,0);
                      FUN_0184b750(local_68);
                      *(undefined1 *)(local_68 + 0x48) = 7;
                      uVar5 = FUN_00410e60(&DAT_0181ce38,1);
                      *(undefined8 *)(local_68 + 0xb0) = uVar5;
                      FUN_0181ec30(uVar5,param_2);
                      goto LAB_01839800;
                    }
                  }
                  uVar5 = FUN_004634b0(local_40);
                  cVar1 = FUN_004113d0(uVar5,&PTR_FUN_00486f38);
                  if ((cVar1 != '\0') && (local_b8 = FUN_004d3a80(uVar5,local_50), local_b8 != 0)) {
                    uVar5 = FUN_0184aea0(local_98,local_b8);
                    *(undefined8 *)(local_60 + 0x18) = uVar5;
                  }
                  if (*(longlong *)(local_60 + 0x18) == 0) {
                    local_158 = local_50;
                    local_150 = &DAT_018399c0;
                    FUN_00416cd0(&local_118,4,*(undefined8 *)PTR_DAT_02002878,&DAT_018399c0);
                    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_118);
                    FUN_004134c0(uVar5);
                  }
                }
              }
            }
            else if (local_a1 == '\x06') {
              *(undefined8 *)(local_60 + 0x18) =
                   *(undefined8 *)(*(longlong *)(local_78 + 0x18) + 0x30);
            }
            else {
              uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02002a20);
              FUN_004134c0(uVar5);
            }
          }
          else {
            *(undefined1 *)(local_78 + 0x10) = 1;
            FUN_01847440(local_68,local_60);
            FUN_00410f20(local_60);
            FUN_00414ad0(param_1 + 8,*(undefined8 *)(local_78 + 0x20));
            iVar3 = FUN_00416db0(local_50,&DAT_0183995c);
            if (iVar3 != 0) {
              uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02004f78);
              FUN_004134c0(uVar5);
            }
          }
        }
      }
      else {
        iVar3 = FUN_00416db0(local_58,L"expr");
        if (iVar3 == 0) {
          uVar5 = FUN_0181e3c0(param_2,local_84);
          local_70 = FUN_0183a030(param_1,uVar5,param_3);
          iVar3 = FUN_01847410(local_68);
          uVar5 = FUN_0184b910(local_68,iVar3 + -1);
          FUN_01847420(uVar5,local_70);
        }
        else {
          iVar3 = FUN_00416db0(local_58,L"addr");
          if (iVar3 == 0) {
            iVar2 = FUN_0181e3e0(param_2);
            if (iVar2 != 2) {
              uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02001b98);
              FUN_004134c0(uVar5);
            }
            local_60 = FUN_018472d0(&PTR_FUN_01846538,1);
            FUN_01847420(local_68,local_60);
            uVar5 = FUN_0181e3c0(param_2,1);
            FUN_01837010(param_1,uVar5);
            FUN_00414ad0(local_60 + 0x20,*(undefined8 *)(param_1 + 8));
            local_158 = (longlong *)0x0;
            local_a0 = (longlong *)FUN_01847460(&PTR_FUN_01843978,1,0,4);
            uVar5 = FUN_0181e3c0(param_2,1);
            FUN_0181e5f0(uVar5,&local_120,L"text");
            FUN_00468a10(&local_138,local_120);
            (**(code **)(*local_a0 + 8))(local_a0,&local_138);
            FUN_0184caa0(param_3,0,local_a0);
            *(longlong **)(local_60 + 0x18) = local_a0;
            break;
          }
        }
      }
LAB_01839385:
      local_84 = local_84 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_4 == '\x02') {
    iVar2 = FUN_01847410(local_68);
    local_78 = FUN_0184b910(local_68,iVar2 + -1);
    cVar1 = *(char *)(*(longlong *)(local_78 + 0x18) + 0x48);
    if ((cVar1 != '\x05') && (cVar1 != '\a')) {
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02003288);
      FUN_004134c0(uVar5);
    }
    local_60 = FUN_018472d0(&PTR_FUN_01846538,1);
    FUN_01847420(local_68,local_60);
    local_98 = FUN_01837140(param_1,L"TObject");
    uVar5 = FUN_0184b380(local_98,L"Free",1);
    *(undefined8 *)(local_60 + 0x18) = uVar5;
  }
  FUN_0184b750(local_68);
  cVar1 = *(char *)(local_68 + 0x88);
  if (cVar1 != '\0') {
    local_b0 = 0;
    if (cVar1 == '\x01') {
      local_b0 = FUN_0184b540(&PTR_FUN_01846bd8,1,param_3);
    }
    else if (cVar1 == '\x02') {
      local_b0 = FUN_0184b540(&PTR_FUN_01846d28,1,param_3);
    }
    else if (cVar1 == '\x03') {
      local_b0 = FUN_0184b540(&PTR_FUN_01846e70,1,param_3);
    }
    FUN_0184b6d0(local_b0,local_68);
    FUN_00410f20(local_68);
    local_68 = local_b0;
  }
  iVar2 = FUN_01847410();
  local_84 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_60 = FUN_0184b910(local_68,local_84);
      FUN_00414ad0(param_1 + 8,*(undefined8 *)(local_60 + 0x20));
      cVar1 = FUN_004113d0(*(undefined8 *)(local_60 + 0x18),&PTR_FUN_018467e8);
      if (cVar1 == '\0') {
        iVar3 = FUN_01847410(local_60);
        iVar4 = FUN_01847870(*(undefined8 *)(local_60 + 0x18));
        if (iVar3 < iVar4) {
          uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02003f50);
          FUN_004134c0(uVar5);
        }
        else {
          iVar3 = FUN_01847410(local_60);
          iVar4 = FUN_01847410(*(undefined8 *)(local_60 + 0x18));
          if (iVar4 < iVar3) {
            uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02002a78);
            FUN_004134c0(uVar5);
          }
          else {
            iVar3 = FUN_01847410(local_60);
            iVar4 = FUN_01847410(*(undefined8 *)(local_60 + 0x18));
            if (iVar3 != iVar4) {
              iVar3 = FUN_01847410(local_60);
              iVar4 = FUN_01847410(*(undefined8 *)(local_60 + 0x18));
              local_88 = iVar3;
              if (iVar3 <= iVar4 + -1) {
                iVar3 = ((iVar4 + -1) - iVar3) + 1;
                do {
                  local_70 = FUN_01831ef0(&PTR_FUN_0182de80,1,*(undefined8 *)(param_1 + 0x38));
                  FUN_01847420(local_60,local_70);
                  lVar6 = FUN_01847630(*(undefined8 *)(local_60 + 0x18),local_88);
                  lVar8 = FUN_01847630(*(undefined8 *)(local_60 + 0x18),local_88);
                  FUN_01832990(local_70,lVar6 + 0x88,*(undefined1 *)(lVar8 + 0x48));
                  FUN_01832da0(local_70,&local_140);
                  local_88 = local_88 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
          }
        }
        iVar3 = FUN_01847410();
        local_88 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar6 = FUN_0184b520(local_60,local_88);
            FUN_00414ad0(param_1 + 8,*(undefined8 *)(lVar6 + 0x38));
            uVar5 = FUN_01847630(*(undefined8 *)(local_60 + 0x18),local_88);
            uVar9 = FUN_0184b520(local_60,local_88);
            FUN_01837210(param_1,uVar5,uVar9);
            local_88 = local_88 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_84 = local_84 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_01839800:
  FUN_00414480(&local_140);
  FUN_00460ba0(&local_138);
  FUN_00414560(&local_120,2);
  FUN_00460ba0(&local_110);
  FUN_00460ba0(&local_e8);
  FUN_00414480(&local_90);
  FUN_00414560(&local_58,2);
  FUN_00460ba0(local_40);
  return local_68;
}

