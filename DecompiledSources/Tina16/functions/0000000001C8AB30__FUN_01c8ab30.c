/* Ghidra address: 01c8ab30 */
/* Ghidra symbol: FUN_01c8ab30 */


int FUN_01c8ab30(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *local_res10;
  longlong local_res18;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_3c;
  undefined1 local_3b;
  char local_3a;
  byte local_39;
  longlong local_38;
  longlong local_30;
  undefined8 *local_28;
  int local_1c;
  
  local_c0 = auStack_188;
  local_168 = 0;
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = (undefined4 *)0x0;
  local_1c = -1;
  puVar1 = auStack_188;
  if (*(char *)(param_1 + 0x1891) != '\0') goto LAB_01c8c5f2;
  FUN_01a64180(*(undefined8 *)(param_1 + 0x2510));
  *(undefined1 *)(param_1 + 0x1891) = 1;
  local_3b = 0;
  local_3a = '\0';
  FUN_010e33a0();
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = *(longlong *)(param_1 + 0x2788);
  }
  local_5c = FUN_01c8a290(param_1,param_2,local_res18);
  local_res10 = param_2;
  if (local_5c == -1) {
    if (param_2 == (longlong *)0x0) {
      local_28 = (undefined8 *)FUN_00418560(0x9a8,&DAT_01c4d1b0);
      if (local_28 != (undefined8 *)0x0) {
        FUN_00414ad0(local_28,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
        local_28[1] = *(undefined8 *)(param_1 + 0x27a8);
        local_28[2] = *(undefined8 *)(param_1 + 0x27a8);
        local_res18 = *(longlong *)(param_1 + 0x27a8);
        local_res10 = *(longlong **)(param_1 + 0x2770);
        local_28[4] = *(undefined8 *)(param_1 + 0x2768);
        local_28[5] = *(undefined8 *)(param_1 + 0x2770);
        *(undefined4 *)(local_28 + 3) = *(undefined4 *)(param_1 + 0x17f4);
        plVar6 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x1350));
        FUN_00441920(&local_d0,*local_28);
        FUN_004414c0(&local_c8,local_d0,0);
        uVar3 = (**(code **)(*plVar6 + 0x78))(plVar6,local_c8);
        *(undefined4 *)((longlong)local_28 + 0x3c) = uVar3;
        *(undefined4 *)(local_28 + 7) = *(undefined4 *)((longlong)local_28 + 0x3c);
        *(undefined1 *)(local_28 + 0x12f) = 1;
        *(undefined4 *)((longlong)local_28 + 0x97c) = 0;
        *(undefined4 *)(local_28 + 0x130) = 0;
        *(undefined4 *)((longlong)local_28 + 0x984) = 0x3f800000;
        *(undefined *)(local_28 + 0x131) = *PTR_DAT_02001e78;
        *(undefined1 *)((longlong)local_28 + 0x989) = 0;
LAB_01c8b1d8:
        plVar6 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        uVar7 = FUN_0198d430(local_28[1]);
        (**(code **)(*plVar6 + 8))(plVar6,uVar7);
        local_28[6] = 0;
        if (*(char *)(local_28 + 0x12f) == '\0') {
          local_28[0x134] = 0;
        }
        else {
          uVar7 = FUN_010e1310(&DAT_010e0d10,1,local_28[2],0);
          local_28[0x134] = uVar7;
        }
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x2780),local_28);
        local_3c = '\x01';
        goto LAB_01c8b291;
      }
    }
    else {
      cVar2 = FUN_01d04d40(param_2);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_2[0x35] + 0x30) != 0) {
          FUN_00414480(&local_50);
          cVar2 = FUN_0072f4e0(L"The block is locked.",L"Unlock password",&local_50);
          if (cVar2 == '\0') goto LAB_01c8c514;
          FUN_0043e130(&local_d8,*(undefined8 *)(param_2[0x35] + 0x30));
          FUN_0043e130(&local_e0,local_50);
          iVar4 = FUN_00416db0(local_d8,local_e0);
          local_3b = iVar4 != 0;
          if ((bool)local_3b) {
            FUN_0072d440(L"The Unlock password was not correct.\r\rThe block is opened as read-only. All changes\rwill be discarded when you leave the block."
                         ,2,4,0);
          }
        }
        *(undefined1 *)(param_2[0x35] + 0x80) = local_3b;
        local_28 = (undefined8 *)FUN_00418560(0x9a8,&DAT_01c4d1b0);
        if (local_28 != (undefined8 *)0x0) {
          local_88 = FUN_017ff670(param_2);
          if ((*(char *)(param_2[0x35] + 0x70) != '\x01') ||
             ((*(char *)(param_2[0x35] + 0xb0) == '\0' &&
              ((local_88 == 0 || (*(char *)(*(longlong *)(local_88 + 0x1a8) + 0xb0) == '\0')))))) {
            if ((*(char *)(param_2[0x35] + 0x70) == '\x02') ||
               ((*(char *)(param_2[0x35] + 0x70) == '\x03' ||
                (*(char *)(param_2[0x35] + 0x70) == '\x04')))) {
              local_28[1] = *(undefined8 *)(param_1 + 0x27a8);
            }
            else {
              local_28[1] = *(undefined8 *)(param_2[0x35] + 8);
            }
            local_28[2] = *(undefined8 *)(param_1 + 0x2788);
            local_28[4] = param_2[0x35];
            local_28[5] = param_2;
            *(undefined4 *)(local_28 + 3) = *(undefined4 *)(param_1 + 0x17f4);
            uVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x1350));
            *(undefined4 *)((longlong)local_28 + 0x3c) = uVar3;
            plVar6 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x1350));
            (**(code **)(*param_2 + 0x288))(param_2,&local_e8);
            uVar3 = (**(code **)(*plVar6 + 0x78))(plVar6,local_e8);
            *(undefined4 *)(local_28 + 7) = uVar3;
            *(undefined1 *)(local_28 + 0x12f) = 0;
            *(undefined4 *)((longlong)local_28 + 0x97c) = 0;
            *(undefined4 *)(local_28 + 0x130) = 0;
            *(undefined4 *)((longlong)local_28 + 0x984) = 0x3f800000;
            *(undefined *)(local_28 + 0x131) = *PTR_DAT_02001e78;
            *(undefined1 *)((longlong)local_28 + 0x989) = 0;
            goto LAB_01c8b1d8;
          }
          FUN_0072d440(L"Encrypted macro. Content can\'t be viewed.",2,4,0);
        }
      }
    }
  }
  else {
    local_3c = '\0';
LAB_01c8b291:
    local_5c = FUN_01c8a290(param_1,local_res10,local_res18);
    if (local_5c != -1) {
      local_28 = (undefined8 *)FUN_01c8a330(param_1,*(undefined8 *)(param_1 + 0x27a8));
      local_1c = local_5c;
      if ((*(longlong *)(param_1 + 0x2788) != 0) &&
         (lVar8 = FUN_01c8a3c0(param_1,*(longlong *)(param_1 + 0x2788)), lVar8 != 0)) {
        if ((*(longlong *)(param_1 + 0x2768) != 0) &&
           ((*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x02' &&
            (*(longlong *)PTR_DAT_020057d0 != 0)))) {
          uVar3 = FUN_01c681a0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
          *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x98) = uVar3;
          uVar3 = FUN_00c08890(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
          *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x9c) = uVar3;
          uVar3 = FUN_00c0faf0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
          *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0xa0) = uVar3;
          if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x115) == '\0') {
            local_39 = *(byte *)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x5e0);
            if ((local_39 & *(char *)(*(longlong *)PTR_DAT_020057d0 + 0x896) == '\0') != 0) {
              if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x62) == '\0') {
                if (local_39 != 0) {
                  uVar7 = FUN_00b89270();
                  FUN_0041ddd0(&local_108,&PTR_PTR_01c66090);
                  FUN_00b8e650(uVar7,&local_100,L"Sched_c.Msg_MacroModified",local_108);
                  iVar4 = FUN_0072d440(local_100,3,3,0);
                  if (iVar4 == 6) {
                    local_39 = 1;
                    goto LAB_01c8b510;
                  }
                }
                local_39 = 0;
              }
              else {
                if (local_39 != 0) {
                  uVar7 = FUN_00b89270();
                  FUN_0041ddd0(&local_f8,&PTR_PTR_01c660a0);
                  FUN_00b8e650(uVar7,&local_f0,L"Sched_c.Msg_RefMacroModified",local_f8);
                  iVar4 = FUN_0072d440(local_f0,3,3,0);
                  if (iVar4 == 6) {
                    local_39 = 1;
                    goto LAB_01c8b510;
                  }
                }
                local_39 = 0;
              }
            }
LAB_01c8b510:
            if (local_39 != 0) {
              FUN_01768ff0(*(undefined8 *)(param_1 + 0x2768),0);
              plVar6 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
              (**(code **)(*plVar6 + 0x38))(plVar6,&local_110);
              plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x2768) + 0xb0);
              (**(code **)(*plVar6 + 0x60))(plVar6,local_110);
              if ((*(char *)(*(longlong *)(param_1 + 0x2768) + 0x111) != '\0') &&
                 (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x5e0) != '\0'))
              {
                *(undefined1 *)(*(longlong *)(param_1 + 0x2768) + 0x111) = 0;
              }
            }
          }
        }
        if (((*(longlong *)(param_1 + 0x2768) != 0) &&
            (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x03')) &&
           (*(longlong *)PTR_DAT_02005100 != 0)) {
          local_39 = *(byte *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x5e0);
          if (local_39 != 0) {
            if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x62) == '\0') {
              if (local_39 != 0) {
                uVar7 = FUN_00b89270();
                FUN_0041ddd0(&local_130,&PTR_PTR_01c66090);
                FUN_00b8e650(uVar7,&local_128,L"Sched_c.Msg_MacroModified",local_130);
                iVar4 = FUN_0072d440(local_128,3,3,0);
                if (iVar4 == 6) {
                  local_39 = 1;
                  goto LAB_01c8b6f1;
                }
              }
              local_39 = 0;
            }
            else {
              if (local_39 != 0) {
                uVar7 = FUN_00b89270();
                FUN_0041ddd0(&local_120,&PTR_PTR_01c660a0);
                FUN_00b8e650(uVar7,&local_118,L"Sched_c.Msg_RefMacroModified",local_120);
                iVar4 = FUN_0072d440(local_118,3,3,0);
                if (iVar4 == 6) {
                  local_39 = 1;
                  goto LAB_01c8b6f1;
                }
              }
              local_39 = 0;
            }
          }
LAB_01c8b6f1:
          if (local_39 != 0) {
            FUN_00414b50(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x2768) + 0x48));
            FUN_01768ff0(*(undefined8 *)(param_1 + 0x2768),0);
            FUN_014a0090(*(undefined8 *)(param_1 + 0x2768),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
            FUN_01773f90(*(undefined8 *)(param_1 + 0x2768),0x400,&local_64);
            if ((local_64 & 2) == 0) {
              FUN_015fcb30(&local_138,PTR_DAT_02004770);
              FUN_01771530(*(undefined8 *)(param_1 + 0x2768),local_138,local_58);
            }
          }
        }
        if (((*(longlong *)(param_1 + 0x2768) != 0) &&
            (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x04')) &&
           (*(longlong *)PTR_DAT_02005100 != 0)) {
          local_39 = *(byte *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x5e0);
          if (local_39 != 0) {
            if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x62) == '\0') {
              if (local_39 != 0) {
                uVar7 = FUN_00b89270();
                FUN_0041ddd0(&local_158,&PTR_PTR_01c66090);
                FUN_00b8e650(uVar7,&local_150,L"Sched_c.Msg_MacroModified",local_158);
                iVar4 = FUN_0072d440(local_150,3,3,0);
                if (iVar4 == 6) {
                  local_39 = 1;
                  goto LAB_01c8b8e9;
                }
              }
              local_39 = 0;
            }
            else {
              if (local_39 != 0) {
                uVar7 = FUN_00b89270();
                FUN_0041ddd0(&local_148,&PTR_PTR_01c660a0);
                FUN_00b8e650(uVar7,&local_140,L"Sched_c.Msg_RefMacroModified",local_148);
                iVar4 = FUN_0072d440(local_140,3,3,0);
                if (iVar4 == 6) {
                  local_39 = 1;
                  goto LAB_01c8b8e9;
                }
              }
              local_39 = 0;
            }
          }
LAB_01c8b8e9:
          if (local_39 != 0) {
            FUN_00414b50(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x2768) + 0x48));
            FUN_01768ff0(*(undefined8 *)(param_1 + 0x2768),0);
            FUN_014a0130(*(undefined8 *)(param_1 + 0x2768),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
            FUN_015fcb30(&local_160,PTR_DAT_02004770);
            FUN_01771530(*(undefined8 *)(param_1 + 0x2768),local_160,local_58);
          }
        }
        local_90 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
        if ((local_3c == '\0') &&
           (cVar2 = FUN_01d0fb00(local_90 + 0x40,PTR_DAT_02004010), cVar2 == '\0')) {
          FUN_0199e310(*(undefined8 *)(local_90 + 0x10),0,1,1);
        }
        FUN_00417c40(local_90 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
        if (local_28 != (undefined8 *)0x0) {
          local_98 = (longlong)local_28;
          *(undefined4 *)((longlong)local_28 + 0x97c) = *(undefined4 *)(param_1 + 0x1b60);
          *(undefined4 *)((longlong)local_28 + 0x980) = *(undefined4 *)(param_1 + 0x1b64);
          *(undefined4 *)((longlong)local_28 + 0x984) = *(undefined4 *)(param_1 + 0x1924);
          *(undefined *)((longlong)local_28 + 0x988) = *PTR_DAT_02001e78;
        }
      }
      local_28 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_5c);
      if ((*(longlong *)(param_1 + 0x2788) != local_28[2]) ||
         (*(longlong *)(param_1 + 0x27a8) == local_28[1])) {
        FUN_01c87d20(param_1);
        local_30 = FUN_01c8a3c0(param_1,local_28[2]);
        local_38 = FUN_01c8a3c0(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02001970 + 0x408));
        local_70 = 0;
        local_78 = 0;
        if (local_30 != 0) {
          local_70 = *(undefined8 *)(local_30 + 0x9a0);
        }
        if (local_38 != 0) {
          local_78 = *(undefined8 *)(local_38 + 0x9a0);
        }
        local_3a = '\x01';
        FUN_0135ac00(*(undefined8 *)PTR_DAT_02001f10);
      }
      *(undefined8 *)(param_1 + 0x27a8) = local_28[1];
      *(undefined8 *)(param_1 + 0x2788) = local_28[2];
      *(undefined8 *)(param_1 + 0x2768) = local_28[4];
      *(undefined8 *)(param_1 + 0x2770) = local_28[5];
      local_a0 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
      FUN_00417c40(PTR_DAT_02004010,local_a0 + 0x40,&DAT_01d0d0b8);
      local_a8 = local_28;
      if ((local_28[4] == 0) || (*(char *)(local_28[4] + 0x70) == '\x01')) {
        FUN_007e2d20(*(undefined8 *)(param_1 + 0xce8),*(undefined1 *)((longlong)local_28 + 0x989));
        if ((*(char *)((longlong)local_a8 + 0x989) == '\0') && (*(char *)(local_a8 + 0x131) == '\0')
           ) {
          uVar3 = 0;
        }
        else {
          uVar3 = (undefined4)CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
        }
        FUN_01c83de0(param_1,uVar3);
        FUN_01c67df0(param_1,*(undefined4 *)((longlong)local_a8 + 0x97c),
                     *(undefined4 *)(local_a8 + 0x130),*(undefined4 *)((longlong)local_a8 + 0x984));
        FUN_01c74860(param_1);
      }
      FUN_01c7d780(param_1,*(undefined4 *)(local_28 + 3));
      iVar4 = FUN_00808090();
      local_60 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
          cVar2 = FUN_004113d0(uVar7,&PTR_FUN_010dee68);
          if (cVar2 != '\0') {
            uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
            uVar7 = FUN_0065b870(uVar7);
            iVar5 = thunk_FUN_041de4d6(uVar7);
            if (iVar5 != 0) {
              uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
              uVar7 = FUN_0065b870(uVar7);
              thunk_FUN_0413e052(uVar7,0x1234,0,local_28[2]);
            }
          }
          uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
          cVar2 = FUN_004113d0(uVar7,&PTR_FUN_01bb5178);
          if (cVar2 != '\0') {
            uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
            uVar7 = FUN_0065b870(uVar7);
            iVar5 = thunk_FUN_041de4d6(uVar7);
            if (iVar5 != 0) {
              uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
              uVar7 = FUN_0065b870(uVar7);
              thunk_FUN_0413e052(uVar7,0x1234,0,local_28[1]);
            }
          }
          uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
          cVar2 = FUN_004113d0(uVar7,&PTR_FUN_013aa418);
          if (cVar2 != '\0') {
            uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
            uVar7 = FUN_0065b870(uVar7);
            iVar5 = thunk_FUN_041de4d6(uVar7);
            if (iVar5 != 0) {
              uVar7 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_60);
              uVar7 = FUN_0065b870(uVar7);
              thunk_FUN_0413e052(uVar7,0x1234,local_28[1],local_28[2]);
            }
          }
          local_60 = local_60 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(param_1 + 0x1890) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x1350) + 0x278))
                (*(longlong **)(param_1 + 0x1350),*(undefined4 *)(local_28 + 7));
      *(undefined1 *)(param_1 + 0x1890) = 0;
      FUN_00414480(&local_48);
      if (local_res10 != (longlong *)0x0) {
        FUN_01b20020(&local_48,local_res10,&DAT_01c8c8ec);
      }
      FUN_01c89690(param_1,PTR_DAT_02004010[0x813]);
      if ((*(longlong *)(param_1 + 0x2768) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) != '\x02')) {
        FUN_01c8a4d0(param_1,0,1);
        if ((*(longlong *)PTR_DAT_020057d0 != 0) &&
           (*(char *)(*(longlong *)(param_1 + 0xfd8) + 0x80) != '\0')) {
          FUN_007fdf50(*(undefined8 *)PTR_DAT_020057d0,0);
        }
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
      }
      else {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(longlong *)PTR_DAT_020057d0 == 0) {
          uVar7 = FUN_01aebb40(&PTR_FUN_014b21c0,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_020057d0 = uVar7;
        }
        else {
          FUN_007fdf50(*(undefined8 *)PTR_DAT_020057d0,1);
          FUN_0064e1d0(*(undefined8 *)PTR_DAT_020057d0);
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        FUN_014b49f0(*(undefined8 *)PTR_DAT_020057d0,*(undefined1 *)(local_28 + 0x12f));
        FUN_014b4700(*(undefined8 *)PTR_DAT_020057d0,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x2768) + 0x48));
        if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x115) == '\0') {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x2768) + 0xb0);
          (**(code **)(*plVar6 + 0x38))(plVar6,&local_168);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
          (**(code **)(*plVar6 + 0x60))(plVar6,local_168);
        }
        else {
          local_80 = FUN_01770db0(*(undefined8 *)(*(longlong *)(param_1 + 0x2768) + 0xb0),1,1);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
          (**(code **)(*plVar6 + 0x10))(plVar6,local_80);
          FUN_00410f20(local_80);
        }
        FUN_00c0dad0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860),0);
        FUN_00414ad0(*(longlong *)PTR_DAT_020057d0 + 0x878,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x2768) + 0xf8));
        *(undefined8 **)(param_1 + 0x2790) = local_28;
        FUN_01c8a4d0(param_1,1,1);
        if (*(int *)(*(longlong *)(param_1 + 0x2768) + 0x9c) != -1) {
          FUN_01c8ab00(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x9c),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0xa0));
          FUN_01c8aad0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x98));
        }
      }
      if ((*(longlong *)(param_1 + 0x2768) == 0) ||
         ((cVar2 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar2 != '\x03' &&
          (cVar2 != '\x04')))) {
        if (*(longlong *)PTR_DAT_02005100 != 0) {
          (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x128))
                    (*(longlong **)(*(longlong *)PTR_DAT_02005100 + 0x740),0);
        }
        if ((*(longlong *)PTR_DAT_02005100 != 0) &&
           (cVar2 = (**(code **)(**(longlong **)PTR_DAT_02005100 + 0xf8))
                              (*(longlong **)PTR_DAT_02005100), cVar2 == '\0')) {
          FUN_0064c650(*(undefined8 *)PTR_DAT_02005100,0);
          FUN_0064f700(*(undefined8 *)PTR_DAT_02005100,param_1 + 0x1870);
          FUN_007fdf50(*(undefined8 *)PTR_DAT_02005100,0);
        }
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
      }
      else {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(longlong *)PTR_DAT_02005100 == 0) {
          uVar7 = FUN_01aebb40(&PTR_FUN_0149f0b8,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_02005100 = uVar7;
          FUN_008059a0(*(undefined8 *)PTR_DAT_02005100);
          uVar7 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
          thunk_FUN_041b2403(uVar7,0x435,0,0x7fffffff);
        }
        else {
          FUN_007fdf50(*(undefined8 *)PTR_DAT_02005100,1);
          FUN_0064e1d0(*(undefined8 *)PTR_DAT_02005100);
          uVar7 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
          thunk_FUN_041b2403(uVar7,0x435,0,0x7fffffff);
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x03') {
          FUN_014a0a80(*(undefined8 *)PTR_DAT_02005100,*(undefined8 *)(param_1 + 0x2768));
        }
        else {
          FUN_014a0ec0(*(undefined8 *)PTR_DAT_02005100,*(undefined8 *)(param_1 + 0x2768));
        }
        FUN_014a0260(*(undefined8 *)PTR_DAT_02005100,*(undefined1 *)(local_28 + 0x12f));
        FUN_00c0dad0(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740),0);
        *(undefined8 **)(param_1 + 0x1b38) = local_28;
        FUN_01c8a7e0(param_1,1,1);
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x128))
                  (*(longlong **)(*(longlong *)PTR_DAT_02005100 + 0x740),1);
      }
      puVar9 = (undefined8 *)FUN_01c8a3c0(param_1,0);
      FUN_014a1260(*puVar9,local_48);
      if (local_3a != '\0') {
        FUN_010e1080(local_70,local_78);
      }
      *(undefined1 *)(param_1 + 0x1891) = 0;
      local_39 = 0;
      FUN_01c7ec30(param_1,0,&local_39);
      FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
      if (*(double *)(PTR_DAT_02004010 + 0x7e0) <= 0.0) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
      }
      if (*(double *)(PTR_DAT_02004010 + 0x7e8) <= 0.0) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x7e8) = 0x3ff0000000000000;
      }
      puVar1 = local_c0;
      if (*(double *)(PTR_DAT_02004010 + 0x7f0) <= 0.0) {
        *(undefined8 *)(PTR_DAT_02004010 + 0x7f0) = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
      }
      goto LAB_01c8c5f2;
    }
  }
LAB_01c8c514:
  FUN_01c8c630(0,local_c0);
  puVar1 = local_c0;
LAB_01c8c5f2:
  local_c0 = puVar1;
  FUN_00414560(&local_168,0x15);
  FUN_00414560(&local_58,3);
  return local_1c;
}

