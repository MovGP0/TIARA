/* Ghidra address: 012b6b60 */
/* Ghidra symbol: FUN_012b6b60 */


void FUN_012b6b60(char param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  double *pdVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined **local_178;
  char local_159;
  longlong *local_158;
  undefined8 local_150;
  int local_148;
  int local_144;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  char local_125;
  int local_124;
  undefined *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_53;
  undefined1 local_52;
  undefined local_51;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_3c [28];
  
  local_118 = (undefined *)0x0;
  local_110 = (undefined *)0x0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = (undefined *)0x0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = (undefined *)0x0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = (undefined *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = (undefined *)0x0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_159 = param_1;
  local_158 = param_3;
  local_150 = param_4;
  cVar1 = FUN_01b07dd0(param_2);
  if (((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) + 0x18) == '\0')) {
    FUN_01566760(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),
                 *(undefined8 *)(param_2 + 0xa8));
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) + 0x18) = 1;
  }
  local_140 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_130 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_017ccae0(*(undefined8 *)(param_2 + 0xa8),local_150);
  FUN_017cd0b0(*(undefined8 *)(param_2 + 0xa8),local_150,0,0);
  FUN_017cd2d0(*(undefined8 *)(param_2 + 0xa8),local_140,local_130);
  iVar3 = FUN_019954d0(*(undefined8 *)(param_2 + 0xa8));
  local_144 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_017cc990(local_144,local_140);
      if (cVar1 == '\0') {
        local_198 = (undefined *)0x0;
        FUN_017cd4e0(&local_60,*(undefined8 *)(param_2 + 0xa8),local_144,local_150);
        local_198 = &DAT_012b85f8;
        FUN_00416cd0(&local_48,3,&DAT_012b85e4,local_60);
        cVar1 = FUN_01b07dd0(param_2);
        if ((cVar1 == '\0') || (lVar6 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8)), lVar6 == 0))
        {
LAB_012b6ee1:
          cVar1 = FUN_01b07dd0(param_2);
          iVar5 = local_144;
          if ((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
            uVar4 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),local_144);
            iVar5 = FUN_00b905e0(uVar4,0);
          }
          if (local_159 == '\0') {
            local_198 = (undefined *)CONCAT71(local_198._1_7_,1);
            local_190 = (undefined *)((ulonglong)local_190 & 0xffffffffffffff00);
            local_188 = (undefined *)0x0;
            FUN_012b66f0(auStack_1b8,&local_78,iVar5,0);
            FUN_00416ad0(&local_48,local_78);
          }
          else {
            local_198 = (undefined *)0x3cd203af9ee75616;
            FUN_00b8fec0(&local_70,
                         *(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar5 * 8),
                         param_5,0);
            local_198 = &DAT_012b8608;
            FUN_00416cd0(&local_48,3,local_48,local_70);
          }
        }
        else {
          uVar7 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8));
          cVar1 = FUN_01563760(uVar7,local_144);
          if (cVar1 == '\0') goto LAB_012b6ee1;
          uVar7 = FUN_014cdce0(*(undefined8 *)(param_2 + 0xe8));
          uVar4 = FUN_015f8bb0(uVar7,local_144,local_3c);
          FUN_01aa0820(&local_68,uVar4);
          FUN_00416ad0(&local_48,local_68);
        }
        (**(code **)(*local_158 + 0x78))(local_158,local_48);
      }
      local_144 = local_144 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_2 + 0x2d8);
  local_144 = 1;
  if (0 < iVar3) {
    do {
      local_138 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)local_144 * 8);
      plVar10 = *(longlong **)(local_138 + 0x128);
      cVar1 = FUN_0198a580(*(undefined8 *)(local_138 + 0x128));
      if ((cVar1 == '\x04') &&
         (((*(char *)(local_138 + 5) == '\x02' ||
           (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                              (*(longlong **)(local_138 + 0x128)), sVar2 == 0x24)) ||
          (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                             (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)))) {
        FUN_01b20020(&local_50,*(undefined8 *)(local_138 + 0x128),&DAT_012b8618);
        if (local_50 == 0) {
          FUN_0043f750(&local_80,local_144);
          FUN_00416ba0(&local_50,L"no_label_",local_80);
        }
        cVar1 = FUN_017cc9f0(*(undefined8 *)(local_138 + 0x128),local_50,local_130);
        if (cVar1 == '\0') {
          uVar4 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
          local_198 = (undefined *)0x0;
          FUN_017cd4e0(&local_88,*(undefined8 *)(param_2 + 0xa8),uVar4,local_150);
          uVar4 = (**(code **)(*plVar10 + 0x210))(plVar10,1);
          local_198 = (undefined *)0x0;
          FUN_017cd4e0(&local_90,*(undefined8 *)(param_2 + 0xa8),uVar4,local_150);
          local_198 = &DAT_012b865c;
          local_190 = local_88;
          local_188 = &DAT_012b866c;
          local_180 = local_90;
          local_178 = &PTR_DAT_012b867c;
          FUN_00416cd0(&local_48,7,&PTR_u_laFloralwhite_012b8648,local_50);
          local_124 = FUN_01b05600(local_138,1);
          iVar5 = FUN_01b05600(local_138,2);
          cVar1 = FUN_01b07dd0(param_2);
          if ((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
            local_124 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),
                                     local_124);
            iVar5 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),iVar5);
          }
          if (local_159 == '\0') {
            local_198 = (undefined *)CONCAT71(local_198._1_7_,1);
            local_190 = (undefined *)((ulonglong)local_190 & 0xffffffffffffff00);
            local_188 = (undefined *)0x0;
            FUN_012b66f0(auStack_1b8,&local_a0,local_124,iVar5);
            FUN_00416ad0(&local_48,local_a0);
          }
          else {
            local_198 = (undefined *)0x3cd203af9ee75616;
            FUN_00b8fec0(&local_98,
                         *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)local_124 * 8) -
                         *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8),param_5,0
                        );
            local_198 = &DAT_012b8608;
            FUN_00416cd0(&local_48,3,local_48,local_98);
          }
          if (param_6 != '\0') {
            FUN_017ff4f0(*(undefined8 *)(local_138 + 0x128),&local_a8);
            local_198 = local_a8;
            local_190 = &DAT_012b86a0;
            FUN_00416cd0(&local_48,4,local_48,&DAT_012b8690);
          }
          (**(code **)(*local_158 + 0x78))(local_158,local_48);
        }
        sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                          (*(longlong **)(local_138 + 0x128));
        if ((((sVar2 == 10) ||
             (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                (*(longlong **)(local_138 + 0x128)), sVar2 == 0x4f)) ||
            ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6d ||
             ((((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0xca ||
                (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0xcb)) ||
               (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd4)) ||
              ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd5 ||
               (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xde)))))))) ||
           (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                              (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdf)) {
          if (*(char *)(param_2 + 0x339) == '\0') {
            local_125 = '\0';
          }
          else {
            uVar7 = *(undefined8 *)(local_138 + 0x128);
            uVar4 = FUN_01cfd2d0(uVar7);
            local_198 = &local_53;
            local_190 = &local_51;
            pcVar8 = (char *)FUN_01cfde70(uVar7,uVar4,0,&local_52);
            local_125 = *pcVar8;
          }
        }
        sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                          (*(longlong **)(local_138 + 0x128));
        if (((((sVar2 == 0x10) ||
              (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                 (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd9)) ||
             (((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xda ||
               (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xe)) ||
              ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 10 &&
               (local_125 == '\x02')))))) ||
            ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                (*(longlong **)(local_138 + 0x128)), sVar2 == 0x4f &&
             (local_125 == '\x02')))) ||
           ((((((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6d &&
                (local_125 == '\x02')) ||
               ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0xca &&
                (local_125 == '\x02')))) ||
              ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xcb &&
               (local_125 == '\x02')))) ||
             ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                 (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd4 &&
              (local_125 == '\x02')))) ||
            ((((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd5 &&
               (local_125 == '\x02')) ||
              ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xde &&
               (local_125 == '\x02')))) ||
             ((((((((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                       (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdf &&
                    (local_125 == '\x02')) ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0xb)) ||
                  ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x50 ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6e)))) ||
                 (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0xcc)) ||
                (((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xcd ||
                  (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd6)) ||
                 ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd7 ||
                  (((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                       (*(longlong **)(local_138 + 0x128)), sVar2 == 0xe0 ||
                    (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                       (*(longlong **)(local_138 + 0x128)), sVar2 == 0xe1)) ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 9)))))))) ||
               ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6b ||
                (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 200)))) ||
              ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128)), sVar2 == 0xc9 ||
               (((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd2 ||
                 (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd3)) ||
                ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdc ||
                 (((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdd ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x24)) ||
                  (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)))))))))))))
            ))) {
          FUN_01b20020(&local_50,*(undefined8 *)(local_138 + 0x128),&DAT_012b8618);
          if (local_50 == 0) {
            FUN_0043f750(&local_b0,local_144);
            FUN_00416ba0(&local_50,L"no_label_",local_b0);
          }
          cVar1 = FUN_017cc9f0(*(undefined8 *)(local_138 + 0x128),local_50,local_130);
          if (cVar1 == '\0') {
            uVar4 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
            local_198 = (undefined *)0x0;
            FUN_017cd4e0(&local_b8,*(undefined8 *)(param_2 + 0xa8),uVar4,local_150);
            uVar4 = (**(code **)(*plVar10 + 0x210))(plVar10,1);
            local_198 = (undefined *)0x0;
            FUN_017cd4e0(&local_c0,*(undefined8 *)(param_2 + 0xa8),uVar4,local_150);
            local_198 = &DAT_012b865c;
            local_190 = local_b8;
            local_188 = &DAT_012b866c;
            local_180 = local_c0;
            local_178 = &PTR_DAT_012b867c;
            FUN_00416cd0(&local_48,7,&PTR_DAT_012b86b0,local_50);
            sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                              (*(longlong **)(local_138 + 0x128));
            if ((((sVar2 == 9) ||
                 (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6b)) ||
                ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 200 ||
                 ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xc9 ||
                  (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd2)))))) ||
               ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                   (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd3 ||
                ((((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdc ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdd)) ||
                  (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0x24)) ||
                 (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)))))) {
              local_124 = FUN_01b05600(local_138,1);
              iVar5 = FUN_01b05600(local_138,2);
              sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                (*(longlong **)(local_138 + 0x128));
              if ((sVar2 == 0x24) ||
                 (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                    (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)) {
                local_148 = FUN_01b05600(local_138,3);
              }
              sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                (*(longlong **)(local_138 + 0x128));
              if (((sVar2 == 0xc9) ||
                  (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xd3)) ||
                 ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                     (*(longlong **)(local_138 + 0x128)), sVar2 == 0xdd ||
                  ((sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x24 ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)))))) {
                local_198 = &local_53;
                local_190 = &local_51;
                pdVar9 = (double *)FUN_01cfde70(*(undefined8 *)(local_138 + 0x128),3,0,&local_52);
                dVar13 = *pdVar9 / 100.0;
              }
              else {
                dVar13 = 1.0;
              }
              if (*(char *)(param_2 + 0x339) == '\0') {
                local_125 = '\0';
              }
              else {
                uVar7 = *(undefined8 *)(local_138 + 0x128);
                uVar4 = FUN_01cfd2d0(uVar7);
                local_198 = &local_53;
                local_190 = &local_51;
                pcVar8 = (char *)FUN_01cfde70(uVar7,uVar4,0,&local_52);
                local_125 = *pcVar8;
              }
              if (local_125 == '\0') {
LAB_012b7f31:
                sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                  (*(longlong **)(local_138 + 0x128));
                if ((sVar2 == 0x24) ||
                   (sVar2 = (**(code **)(**(longlong **)(local_138 + 0x128) + 0xf8))
                                      (*(longlong **)(local_138 + 0x128)), sVar2 == 0x6c)) {
                  dVar11 = 0.0;
                  dVar12 = 0.0;
                  if (local_124 != local_148) {
                    dVar11 = dVar13 * **(double **)(local_138 + 0x48);
                  }
                  if (iVar5 != local_148) {
                    dVar12 = (1.0 - dVar13) * **(double **)(local_138 + 0x48);
                  }
                  local_120 = (undefined *)(dVar11 + dVar12);
                }
                else {
                  local_120 = (undefined *)(**(double **)(local_138 + 0x48) * dVar13);
                }
              }
              else if (local_125 == '\x01') {
                local_120 = (undefined *)0x41cdcd6500000000;
              }
              else if (local_125 == '\x02') {
                local_120 = (undefined *)0x3eb0c6f7a0b5ed8d;
              }
              else if (local_125 == '\x03') goto LAB_012b7f31;
              if (local_159 == '\0') {
                local_198 = (undefined *)((ulonglong)local_198 & 0xffffffffffffff00);
                local_190 = (undefined *)CONCAT71(local_190._1_7_,1);
                local_188 = local_120;
                FUN_012b66f0(auStack_1b8,&local_d8,local_124,iVar5);
                FUN_00416ad0(&local_48,local_d8);
              }
              else if ((double)local_120 == 0.0) {
                local_198 = (undefined *)0x3cd203af9ee75616;
                FUN_00b8fec0(&local_d0,0x54b249ad2594c37d,param_5,0);
                local_198 = &DAT_012b86c4;
                FUN_00416cd0(&local_48,3,local_48,local_d0);
              }
              else {
                local_198 = (undefined *)0x3cd203af9ee75616;
                FUN_00b8fec0(&local_c8,
                             (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)local_124 * 8)
                             - *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8)) /
                             (double)local_120,param_5,0);
                local_198 = &DAT_012b86c4;
                FUN_00416cd0(&local_48,3,local_48,local_c8);
              }
            }
            else if (local_159 == '\0') {
              uVar4 = FUN_01b05690(local_138,1,1);
              local_198 = (undefined *)((ulonglong)local_198 & 0xffffffffffffff00);
              local_190 = (undefined *)((ulonglong)local_190 & 0xffffffffffffff00);
              local_188 = (undefined *)0x0;
              FUN_012b66f0(auStack_1b8,&local_e8,uVar4,0);
              FUN_00416ad0(&local_48,local_e8);
            }
            else {
              iVar5 = FUN_01b05690(local_138,1,1);
              local_198 = (undefined *)0x3cd203af9ee75616;
              FUN_00b8fec0(&local_e0,
                           *(undefined8 *)(*(longlong *)(param_2 + 0x148) + (longlong)iVar5 * 8),
                           param_5,0);
              local_198 = &DAT_012b86c4;
              FUN_00416cd0(&local_48,3,local_48,local_e0);
            }
            if (param_6 != '\0') {
              FUN_017ff4f0(*(undefined8 *)(local_138 + 0x128),&local_f0);
              local_198 = local_f0;
              local_190 = &DAT_012b86a0;
              FUN_00416cd0(&local_48,4,local_48,&DAT_012b8690);
            }
            (**(code **)(*local_158 + 0x78))(local_158,local_48);
          }
        }
      }
      cVar1 = FUN_0199c7c0(*(undefined8 *)(local_138 + 0x128));
      if (cVar1 != '\0') {
        FUN_01b20020(&local_50,*(undefined8 *)(local_138 + 0x128),&DAT_012b8618);
        if (local_50 == 0) {
          FUN_0043f750(&local_f8,local_144);
          FUN_00416ba0(&local_50,L"no_label_",local_f8);
        }
        cVar1 = FUN_017cc9f0(*(undefined8 *)(local_138 + 0x128),local_50,local_130);
        if (cVar1 == '\0') {
          FUN_00416ba0(&local_48,local_50,&DAT_012b85f8);
          if (local_159 == '\0') {
            plVar10 = (longlong *)FUN_0138ea30(*(undefined8 *)(local_138 + 0x128),param_2);
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_108,0);
            FUN_00416ad0(&local_48,local_108);
            iVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
            if (1 < iVar5) {
              (**(code **)(*plVar10 + 0x18))(plVar10,&local_110,1);
              local_198 = local_110;
              FUN_00416cd0(&local_48,3,local_48,&DAT_012b86d4);
            }
          }
          else {
            plVar10 = (longlong *)FUN_0131e140(*(undefined8 *)(local_138 + 0x128),param_2);
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_100,0);
            FUN_00416ad0(&local_48,local_100);
          }
          if (param_6 != '\0') {
            FUN_017ff4f0(*(undefined8 *)(local_138 + 0x128),&local_118);
            local_198 = local_118;
            local_190 = &DAT_012b86a0;
            FUN_00416cd0(&local_48,4,local_48,&DAT_012b8690);
          }
          (**(code **)(*local_158 + 0x78))(local_158,local_48);
        }
      }
      local_144 = local_144 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(local_140 + 0x10);
  local_144 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar7 = FUN_004aeac0(local_140,local_144);
      FUN_004095f0(uVar7);
      local_144 = local_144 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_140);
  FUN_00410f20(local_130);
  FUN_00414560(&local_118,0x18);
  FUN_00414560(&local_50,2);
  return;
}

