/* Ghidra address: 017cd7f0 */
/* Ghidra symbol: FUN_017cd7f0 */


void FUN_017cd7f0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong local_res10 [3];
  longlong local_a0;
  int local_94;
  int local_90;
  char local_89;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  short *local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  if (((*(char *)(param_1 + 0x33b) != '\0') && (*PTR_DAT_02002b78 == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) != 0)) {
    plVar10 = *(longlong **)(param_1 + 0xa0);
    if (((undefined **)*plVar10 == &PTR_FUN_014db5f8) || ((undefined1 *)*plVar10 == &LAB_014db6c8))
    {
      local_a0 = plVar10[0x1ce];
      local_89 = *(char *)(local_a0 + 0x9ac);
      cVar5 = *(char *)(local_a0 + 0x9ad);
    }
    else {
      local_a0 = 0;
      local_89 = '\x01';
      cVar5 = '\x01';
    }
    uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
    plVar10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    FUN_017ccae0(uVar1,uVar9);
    FUN_017cd0b0(uVar1,uVar9,0,0);
    FUN_017cd2d0(uVar1,*(undefined8 *)(param_1 + 0x1368),*(undefined8 *)(param_1 + 0x1370));
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8);
    local_90 = 0;
    if (local_89 != '\0') {
      iVar7 = FUN_019954d0(uVar1);
      local_94 = 1;
      if (0 < iVar7) {
        do {
          cVar4 = FUN_017cc990(local_94,*(undefined8 *)(param_1 + 0x1368));
          if ((cVar4 == '\0') &&
             ((iVar8 = FUN_019954e0(uVar1), local_94 <= iVar8 || (local_89 != '\x02')))) {
            if (local_a0 == 0) {
              FUN_017cd4e0(&local_48,uVar1,local_94,uVar9,0);
              FUN_00416ba0(&local_38,&DAT_017ce0f8,local_48);
            }
            else {
              FUN_017cd460(&local_40,*(undefined8 *)(local_a0 + 0xa50),local_94);
              FUN_00416ba0(&local_38,&DAT_017ce0f8,local_40);
            }
            if (local_res10[0] == 0) {
              (**(code **)(*plVar10 + 0x80))(plVar10,local_38,1);
            }
            else {
              FUN_00416cd0(&local_50,4,local_38,&DAT_017ce10c,local_res10[0],&DAT_017ce11c);
              (**(code **)(*plVar10 + 0x80))(plVar10,local_50,1);
            }
            local_90 = local_90 + 1;
          }
          local_94 = local_94 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    local_80 = 0;
    if (local_89 != '\0') {
      iVar7 = *(int *)(param_1 + 0x2d8);
      local_94 = 1;
      if (0 < iVar7) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_94 * 8);
          cVar4 = FUN_0198a580(*(undefined8 *)(lVar3 + 0x128));
          if ((cVar4 == '\x04') && (*(char *)(lVar3 + 5) == '\x02')) {
            FUN_01b20020(&local_30,*(undefined8 *)(lVar3 + 0x128),&DAT_017ce12c);
            if (local_30 == (short *)0x0) {
              FUN_0043f750(&local_58,local_94);
              FUN_00416ba0(&local_30,L"no_label_",local_58);
            }
            cVar4 = FUN_017cc9f0(*(undefined8 *)(lVar3 + 0x128),local_30,
                                 *(undefined8 *)(param_1 + 0x1370));
            if (cVar4 == '\0') {
              if (local_res10[0] == 0) {
                FUN_00416ba0(&local_68,&PTR_u_laFloralwhite_017ce15c,local_30);
                (**(code **)(*plVar10 + 0x80))(plVar10,local_68,1);
              }
              else {
                FUN_00416cd0(&local_60,5,&PTR_u_laFloralwhite_017ce15c,local_30,&DAT_017ce10c,
                             local_res10[0],&DAT_017ce11c);
                (**(code **)(*plVar10 + 0x80))(plVar10,local_60,1);
              }
              local_80 = local_80 + 1;
            }
          }
          local_94 = local_94 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    local_7c = 0;
    if (cVar5 != '\0') {
      iVar7 = *(int *)(param_1 + 0x2d8);
      local_94 = 1;
      if (0 < iVar7) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_94 * 8);
          cVar5 = FUN_0198a580(*(undefined8 *)(lVar3 + 0x128));
          if (((cVar5 == '\x04') &&
              ((((**(code **)(**(longlong **)(lVar3 + 0x128) + 0x288))
                           (*(longlong **)(lVar3 + 0x128),&local_30), local_30 == (short *)0x0 ||
                (*local_30 != 0x58)) || (local_89 == '\x01')))) &&
             ((((sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar3 + 0x128)), sVar6 == 0x10 ||
                (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xd9)) ||
               (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                  (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xda)) ||
              (((sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xe ||
                (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xb)) ||
               (((sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                    (*(longlong **)(lVar3 + 0x128)), sVar6 == 0x6e ||
                 ((((sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                       (*(longlong **)(lVar3 + 0x128)), sVar6 == 0x6e ||
                    (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                       (*(longlong **)(lVar3 + 0x128)), sVar6 == 9)) ||
                   (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar3 + 0x128)), sVar6 == 0x6b)) ||
                  ((sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar3 + 0x128)), sVar6 == 200 ||
                   (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                      (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xd2)))))) ||
                (sVar6 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0xf8))
                                   (*(longlong **)(lVar3 + 0x128)), sVar6 == 0xdc)))))))) {
            FUN_01b20020(&local_30,*(undefined8 *)(lVar3 + 0x128),&DAT_017ce12c);
            if (local_30 == (short *)0x0) {
              FUN_0043f750(&local_70,local_94);
              FUN_00416ba0(&local_30,L"no_label_",local_70);
            }
            cVar5 = FUN_017cc9f0(*(undefined8 *)(lVar3 + 0x128),local_30,
                                 *(undefined8 *)(param_1 + 0x1370));
            if (cVar5 == '\0') {
              if (local_a0 == 0) {
                FUN_00416ba0(&local_38,&LAB_017ce170,local_30);
              }
              else {
                FUN_00416ba0(&local_38,&LAB_017ce170,local_30);
              }
              if (local_res10[0] == 0) {
                (**(code **)(*plVar10 + 0x80))(plVar10,local_38,2);
              }
              else {
                FUN_00416cd0(&local_78,4,local_38,&DAT_017ce10c,local_res10[0],&DAT_017ce11c);
                (**(code **)(*plVar10 + 0x80))(plVar10,local_78,2);
              }
              local_7c = local_7c + 1;
            }
          }
          local_94 = local_94 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    local_7c = local_90 + local_80 + local_7c;
    if (0 < local_7c) {
      FUN_01cc3330(uVar2,local_7c,plVar10,param_3,param_4,param_5,param_6);
    }
    FUN_00410f20(plVar10);
    FUN_00410f20(uVar9);
  }
  FUN_00414560(&local_78,10);
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return;
}

