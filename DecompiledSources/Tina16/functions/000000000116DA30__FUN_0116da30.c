/* Ghidra address: 0116da30 */
/* Ghidra symbol: FUN_0116da30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0116da30(longlong param_1,undefined8 param_2,int param_3,int param_4,longlong *param_5)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 local_res10 [3];
  undefined *in_stack_fffffffffffffd30;
  int *local_288;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_278 = 0;
  local_270 = 0;
  local_260 = 0;
  local_268 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_168 = 0;
  local_170 = 0;
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(PTR_DAT_02005bf0,local_res10[0]);
  bVar2 = true;
  DAT_0203a51c = param_3;
  DAT_0203a520 = param_4;
LAB_0117117b:
  iVar5 = (**(code **)(**(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0) + 0x28))
                    (*(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0));
  if (!(bool)(bVar2 & DAT_0203d950 < iVar5)) {
    iVar5 = (**(code **)(**(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0) + 0x28))
                      (*(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0));
    if (DAT_0203d950 == iVar5) {
      DAT_0203d950 = 0;
    }
    FUN_00414560(&local_278,0x27);
    FUN_00414560(&local_40,3);
    FUN_00414480(local_res10);
    return 7;
  }
  if (DAT_0203ae96 != '\0') {
    DAT_0203ae96 = '\0';
    _DAT_0203a510 = 0;
    DAT_0203a53d = 0;
    DAT_0203a552 = 0;
    if (DAT_0203a514 == 2) {
      if (DAT_0203a508 != '\0') {
        FUN_0116caf0(param_1);
        DAT_0203a508 = '\0';
      }
      DAT_0203a524 = 8;
      FUN_0116d220(param_1);
      DAT_0203a9a4 = 0;
    }
    DAT_0203a6d4 = 0;
    DAT_0203a6d8 = 0;
    DAT_0203a6dc = 0;
    DAT_0203a6e0 = 0;
    DAT_0203a6f4 = 0;
    DAT_0203a6e8 = 0;
    DAT_0203a6ec = 0;
    DAT_0203a6f0 = 0;
    DAT_0203a6e4 = 0;
    DAT_0203d94c = 0;
    DAT_0203a6f8 = 0;
    DAT_0203a6fc = 0;
    DAT_0203a700 = 0;
    DAT_0203a704 = 0;
    DAT_0203a718 = 0;
    DAT_0203a70c = 0;
    DAT_0203a710 = 0;
    DAT_0203a714 = 0;
    DAT_0203a708 = 0;
    DAT_0203a71c = 0;
    DAT_0203a720 = 0;
    DAT_0203ae94 = '\0';
    DAT_0203af18 = 2;
    DAT_0203aec8 = 0;
    DAT_0203aecc = 0;
  }
LAB_01170d74:
  do {
    iVar5 = (**(code **)(**(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0) + 0x28))
                      (*(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0));
    if (!(bool)(bVar2 & DAT_0203d950 < iVar5)) break;
    DAT_0203aec0 = 0;
    DAT_0203aec4 = 0;
    DAT_020412d8 = 1;
    (**(code **)(**(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0) + 0x18))
              (*(longlong **)(DAT_0203d9a8[0xd7] + 0x4a0),&local_30,DAT_0203d950);
    FUN_00414ad0(&DAT_0203add8,local_30);
    DAT_0203d950 = DAT_0203d950 + 1;
    _DAT_0204122c = 0;
    if (DAT_0203add8 != 0) {
      _DAT_0204122c = *(undefined4 *)(DAT_0203add8 + -4);
    }
    FUN_0043e130(&local_38,DAT_0203add8);
    FUN_00414ad0(&DAT_0203add0,local_38);
    DAT_020412d4 = 0;
    DAT_0204121c = FUN_004170c0(L"PROCEDURE",DAT_0203add0,1);
    if (DAT_0204121c != 0) {
      DAT_0204121c = FUN_004170c0(L"{_JO }",DAT_0203add0,1);
      DAT_0203ae94 = DAT_0204121c != 0;
      if ((bool)DAT_0203ae94) {
        DAT_0203d9a0 = 0;
        DAT_0203aec0 = 0;
        DAT_0203aec4 = 0;
        _DAT_02041210 = 0;
        _DAT_02041214 = 0;
        DAT_02041220 = FUN_004170c0(&DAT_011712bc,DAT_0203add0,1);
        DAT_02041224 = FUN_004170c0(&DAT_011712d0,DAT_0203add0,1);
        if (DAT_02041224 == 0) {
          DAT_02041224 = FUN_004170c0(&DAT_011712e0,DAT_0203add0,1);
        }
        FUN_00416dc0(&local_40,DAT_0203add0,DAT_02041220 + 3,(DAT_02041224 - DAT_02041220) + -3);
        FUN_00416910(local_140,local_40,0xff);
        FUN_00415020(&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15,local_140,0x14)
        ;
        FUN_004169a0(&local_148,&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15);
        FUN_0043e130(&local_150,local_res10[0]);
        iVar5 = FUN_00416db0(local_148,local_150);
        if (iVar5 == 0) {
          DAT_0203ae94 = '\x01';
          FUN_0043e130(&local_158,local_res10[0]);
          FUN_00414ad0(&DAT_0203d960,local_158);
          cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x998) + 0x260))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x998));
          if ((((cVar3 != '\0') && (1 < *(int *)PTR_DAT_02005b20)) &&
              ((*(int *)PTR_DAT_02005b20 + -1) % *(int *)PTR_DAT_02001300 == 0)) ||
             ((cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x990) + 0x260))
                                 (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x990)),
              cVar3 != '\0' && (800 < DAT_0203a500)))) {
            FUN_01166e80(param_1,DAT_0203a500,DAT_0203a504 + _DAT_0203d994);
            FUN_01166f10(param_1,DAT_0203a500,DAT_0203a504 + DAT_0203d990 + -0x18);
            FUN_01166f10(param_1,0x10,DAT_0203a504 + DAT_0203d990 + -0x18);
            FUN_01166f10(param_1,0x10,DAT_0203a504 + DAT_0203d990 + _DAT_0203d994);
            FUN_01166f10(param_1,0x18,DAT_0203a504 + DAT_0203d990 + _DAT_0203d994);
            (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                      (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
            DAT_0203a500 = 0;
            iVar5 = 0;
            if (DAT_0203d978 != 0) {
              iVar5 = *(int *)(DAT_0203d978 + -4);
            }
            FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar5 + -1);
            FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
            FUN_01165eb0(&DAT_0203d978);
            if (((DAT_0203a514 == 1) || (*(int *)PTR_DAT_02001300 < *(int *)PTR_DAT_02005b20)) ||
               (DAT_0203a518 == 0x6f)) {
              if (DAT_0203a518 == 0x6f) {
                DAT_0203a518 = 0;
              }
              if (DAT_0203a508 != '\0') {
                FUN_0116caf0(param_1);
              }
              FUN_0116d220(param_1);
              FUN_0064e770(DAT_0203d9a8);
              (**(code **)(*DAT_0203d9a8 + 0x198))(DAT_0203d9a8);
              DAT_0203a9a4 = 0;
              DAT_0203a71c = 0;
              DAT_0203a720 = 0;
              *(undefined4 *)PTR_DAT_02005b20 = 0;
              _DAT_0203a510 = 0;
              DAT_0203a53d = 0;
              DAT_0203a552 = 0;
            }
          }
        }
        else {
          DAT_0203ae94 = '\0';
        }
        FUN_0116d500();
        if (DAT_0203a518 == 0) {
          if ((*(int *)PTR_DAT_02005b20 < 10) && (DAT_0203a514 == 2)) {
            FUN_00416dc0(&local_160,DAT_0203add0,DAT_02041220 + 3,(DAT_02041224 - DAT_02041220) + -3
                        );
            FUN_00416910(local_140,local_160,0xff);
            FUN_00415020(&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15,local_140,
                         0x14);
            FUN_004169a0(&local_168,&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15)
            ;
            FUN_0043e130(&local_170,local_res10[0]);
            iVar5 = FUN_00416db0(local_168,local_170);
            if (iVar5 == 0) {
              DAT_0203ae94 = '\x01';
              FUN_0043e130(&local_178,local_res10[0]);
              FUN_00414ad0(&DAT_0203d960,local_178);
            }
            else {
              DAT_0203ae94 = '\0';
            }
          }
        }
        else {
          DAT_0203a514 = DAT_0203a518;
          DAT_0203a518 = 0x6f;
          *(undefined4 *)PTR_DAT_02005b20 = 0;
        }
      }
    }
    if (DAT_0203ae94 != '\0') {
      DAT_0204121c = FUN_004170c0(L"{_PROCVEG }",DAT_0203add0,1);
      if (DAT_0204121c != 0) {
        FUN_005fc860(*(undefined8 *)(param_1 + 0x70),DAT_0203aea4);
        FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),DAT_0203aea4);
        FUN_005fd4e0(*(undefined8 *)(param_1 + 0x78),DAT_0203aea4);
        FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
        FUN_005fc860(*(undefined8 *)(param_1 + 0x70),DAT_0203aea8);
        FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),DAT_0203aea0);
        FUN_005fd4e0(*(undefined8 *)(param_1 + 0x78),DAT_0203aea0);
        if (DAT_0203a514 == 2) {
          FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),1);
          iVar5 = FUN_01167b10(4);
          FUN_005fce30(*(undefined8 *)(param_1 + 0x70),iVar5 + 6);
          FUN_004169a0(&local_180,&DAT_0203a528);
          FUN_0116d980(0xc,0x20,local_180,param_1);
          FUN_004169a0(&local_188,&DAT_0203a528);
          FUN_0116d8d0(0xc,0x20,local_188);
          iVar5 = FUN_01167b10(4);
          FUN_005fce30(*(undefined8 *)(param_1 + 0x70),iVar5 + 6);
          iVar5 = FUN_01167b10(4);
          FUN_005fce30(*(undefined8 *)(param_1 + 0x70),iVar5 + 6);
          *(int *)PTR_DAT_02005b20 = *(int *)PTR_DAT_02005b20 + 1;
        }
        else {
          FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),1);
          iVar5 = FUN_01167b10(4);
          FUN_005fce30(*(undefined8 *)(param_1 + 0x70),iVar5 + 6);
          FUN_004169a0(&local_190,&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15);
          FUN_0116d980(0xc,0x20,local_190,param_1);
          FUN_004169a0(&local_198,&DAT_0203a513 + (longlong)(*(int *)PTR_DAT_02005b20 + 1) * 0x15);
          FUN_0116d8d0(0xc,0x20,local_198);
        }
        iVar5 = FUN_01167b10(4);
        FUN_005fce30(*(undefined8 *)(param_1 + 0x70),iVar5 + 6);
        DAT_0203ae94 = '\0';
        bVar2 = false;
        DAT_0203d950 = 0;
      }
      DAT_0204121c = FUN_004170c0(L"DEFINEINNERNODES",DAT_0203add0,1);
      DAT_02041220 = FUN_004170c0(L"SETNOOFINNERNODES",DAT_0203add0,1);
      if ((DAT_0204121c != 0) || (DAT_02041220 != 0)) {
        iVar5 = FUN_004170c0(&DAT_011712d0,DAT_0203add8,1);
        DAT_0204121c = iVar5 + 1;
        DAT_02041220 = FUN_004170c0(&DAT_01171374,DAT_0203add8,1);
        FUN_00416dc0(&DAT_0203d980,DAT_0203add8,DAT_0204121c,DAT_02041220 - DAT_0204121c);
        FUN_0043ea00(&local_1a0,DAT_0203d980);
        _DAT_0204120c = FUN_0043fc00(local_1a0);
        if (0 < DAT_0203a9a4) {
          piVar10 = &DAT_0203a9a8;
          piVar12 = &DAT_0203aa48;
          local_288 = &DAT_0203aae8;
          iVar5 = DAT_0203a9a4;
          do {
            DAT_0203a6f0 = DAT_0203a6f0 + 1;
            in_stack_fffffffffffffd30 = &DAT_0203ab88 + (longlong)*local_288 * 6;
            lVar6 = FUN_01167b50(0,&PTR_FUN_01166ca8,DAT_0203a51c + DAT_0203a524 * *piVar10,
                                 DAT_0203a520 + DAT_0203a524 * *piVar12,*local_288,
                                 in_stack_fffffffffffffd30);
            (&DAT_0203d9c0)[DAT_0203a6f0] = lVar6;
            (*(code *)**(undefined8 **)(lVar6 + 0x18))(lVar6,param_1);
            local_288 = local_288 + 1;
            piVar12 = piVar12 + 1;
            piVar10 = piVar10 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (0 < DAT_0203a71c) {
          local_288 = &DAT_0203a864;
          piVar12 = &DAT_0203a724;
          piVar10 = &DAT_0203a7c4;
          iVar5 = DAT_0203a71c;
          do {
            DAT_0203a6f0 = DAT_0203a6f0 + 1;
            FUN_0040e840(local_140,*local_288);
            FUN_00415020(&DAT_0203adc8,local_140,5);
            in_stack_fffffffffffffd30 = (undefined *)0x0;
            lVar6 = FUN_01167b50(0,&PTR_FUN_01166ca8,DAT_0203a51c + DAT_0203a524 * *piVar12,
                                 DAT_0203a520 + DAT_0203a524 * *piVar10,*local_288,&DAT_0203adc8);
            (&DAT_0203d9c0)[DAT_0203a6f0] = lVar6;
            (*(code *)**(undefined8 **)(lVar6 + 0x18))(lVar6,param_1);
            piVar10 = piVar10 + 1;
            piVar12 = piVar12 + 1;
            local_288 = local_288 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (0 < DAT_0203a720) {
          puVar11 = &DAT_0203a864;
          piVar10 = &DAT_0203a904;
          local_288 = &DAT_0203a954;
          iVar5 = DAT_0203a720;
          do {
            DAT_0203a6f4 = DAT_0203a6f4 + 1;
            FUN_0040e840(local_140,*puVar11);
            FUN_00415020(&DAT_0203adc8,local_140,5);
            lVar6 = FUN_01167f50(0,&PTR_FUN_01166cd8,DAT_0203a51c + DAT_0203a524 * *piVar10,
                                 DAT_0203a520 + DAT_0203a524 * *local_288);
            *(longlong *)(&DAT_0203db50 + (longlong)DAT_0203a6f4 * 8) = lVar6;
            (*(code *)**(undefined8 **)(lVar6 + 0x18))(lVar6,param_1);
            local_288 = local_288 + 1;
            piVar10 = piVar10 + 1;
            puVar11 = puVar11 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      DAT_0204121c = FUN_004170c0(L"DEFINEELEMENTS",DAT_0203add0,1);
      DAT_02041220 = FUN_004170c0(L"SETNOOFELEMENTS",DAT_0203add0,1);
      if ((DAT_0204121c != 0) || (DAT_02041220 != 0)) {
        iVar5 = FUN_004170c0(&DAT_011712d0,DAT_0203add8,1);
        DAT_0204121c = iVar5 + 1;
        DAT_02041220 = FUN_004170c0(&DAT_01171374,DAT_0203add8,1);
        FUN_00416dc0(&DAT_0203d980,DAT_0203add8,DAT_0204121c,DAT_02041220 - DAT_0204121c);
        FUN_0043ea00(&local_1a8,DAT_0203d980);
        _DAT_02041208 = FUN_0043fc00(local_1a8);
      }
      do {
        DAT_0204121c = FUN_004170c0(&DAT_011713dc,DAT_0203add0,1);
        if (DAT_0204121c != 0) {
          DAT_02041220 = FUN_004170c0(&DAT_011713f0,DAT_0203add0,1);
          if (DAT_02041220 == 0) {
            DAT_0203aec0 = 0;
            DAT_0203aec4 = 0;
            FUN_00416dc0(&local_1c0,DAT_0203add0,DAT_0204121c + 3,1);
            DAT_0203aec0 = FUN_0040e860(local_1c0,&DAT_0203ae80);
            FUN_00416dc0(&local_1c8,DAT_0203add0,DAT_0204121c + 4,1);
            DAT_0203aec4 = FUN_0040e860(local_1c8,&DAT_0203ae80);
            DAT_0203af18 = DAT_0203af18 + 1;
            (&DAT_0203aec4)[DAT_0203af18] = DAT_0203aec0;
            DAT_0203af18 = DAT_0203af18 + 1;
            (&DAT_0203aec4)[DAT_0203af18] = DAT_0203aec4;
            FUN_00416e20(&DAT_0203add8,DAT_0204121c,5);
            FUN_00416e20(&DAT_0203add0,DAT_0204121c,5);
          }
          else {
            DAT_0203a720 = DAT_0203a720 + 1;
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 3,2);
            FUN_0043ea00(&local_1b0,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_1b0);
            *(undefined4 *)(&DAT_0203a900 + (longlong)DAT_0203a720 * 4) = uVar4;
            if (9 < *(int *)(&DAT_0203a900 + (longlong)DAT_0203a720 * 4)) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 6,2);
            FUN_0043ea00(&local_1b8,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_1b8);
            *(undefined4 *)(&DAT_0203a950 + (longlong)DAT_0203a720 * 4) = uVar4;
            if (9 < *(int *)(&DAT_0203a950 + (longlong)DAT_0203a720 * 4)) {
              DAT_02041220 = DAT_02041220 + 1;
            }
          }
        }
        DAT_0204121c = FUN_004170c0(&DAT_01171404,DAT_0203add0,1);
        if (DAT_0204121c != 0) {
          FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_0204121c + 2,2);
          uVar1 = DAT_0203d980[1];
          if (((uVar1 == 0x3d) || (uVar1 == 0x2c)) || (uVar1 == 0x3b)) {
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_0204121c + 2,1);
          }
          FUN_0043ea00(&local_1d0,DAT_0203d980);
          iVar5 = FUN_0043fc00(local_1d0);
          if (9 < iVar5) {
            DAT_0204121c = DAT_0204121c + 1;
          }
          DAT_02041220 = FUN_004170c0(&DAT_01171418,DAT_0203add0,1);
          if (DAT_02041220 == 0) {
            FUN_0116d5b0(&DAT_0203add8,DAT_0204121c,3,iVar5);
            FUN_0116d5b0(&DAT_0203add0,DAT_0204121c,3,iVar5);
            FUN_00416dc0(&local_1f8,DAT_0203add0,DAT_0204121c + -5,4);
            iVar9 = FUN_00416db0(local_1f8,L"NOFS");
            if (iVar9 != 0) {
              DAT_020412d4 = DAT_020412d4 + 1;
              *(int *)((longlong)&DAT_0203add8 + (longlong)DAT_020412d4 * 4 + 4) = iVar5;
            }
          }
          else {
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + -1,2);
            if (DAT_0203d980[1] == 0x3d) {
              FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + -1,1);
            }
            FUN_0043ea00(&local_1d8,DAT_0203d980);
            iVar5 = FUN_0043fc00(local_1d8);
            if (9 < iVar5) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 1,2);
            if (DAT_0203d980[1] == 0x3b) {
              FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 1,1);
            }
            FUN_0043ea00(&local_1e0,DAT_0203d980);
            _DAT_02041218 = FUN_0043fc00(local_1e0);
            *(int *)(&DAT_02041230 + (longlong)iVar5 * 4) = iVar5;
            DAT_0203a71c = DAT_0203a71c + 1;
            _DAT_02041214 = _DAT_02041214 + 1;
            *(int *)(&DAT_0203a860 + (longlong)DAT_0203a71c * 4) = iVar5;
            DAT_02041220 = FUN_004170c0(&DAT_01171428,DAT_0203add0,1);
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 3,2);
            FUN_0043ea00(&local_1e8,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_1e8);
            (&DAT_0203a720)[DAT_0203a71c] = uVar4;
            if (9 < (&DAT_0203a720)[DAT_0203a71c]) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 6,2);
            FUN_0043ea00(&local_1f0,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_1f0);
            *(undefined4 *)(&DAT_0203a7c0 + (longlong)DAT_0203a71c * 4) = uVar4;
            if (9 < *(int *)(&DAT_0203a7c0 + (longlong)DAT_0203a71c * 4)) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            DAT_0204121c = 0;
          }
        }
      } while ((DAT_0204121c != 0) && (DAT_02041220 == 0));
      do {
        DAT_0204121c = FUN_004170c0(L"NOFS",DAT_0203add0,1);
        if (DAT_0204121c != 0) {
          FUN_00416dc0(&local_200,DAT_0203add0,DAT_0204121c,0xf);
          DAT_02041224 = FUN_004170c0(&DAT_01171454,local_200,1);
          if (DAT_02041224 == 0) {
            FUN_00416dc0(&local_208,DAT_0203add0,DAT_0204121c,0xf);
            DAT_02041224 = FUN_004170c0(&DAT_01171374,local_208,1);
          }
          if (DAT_02041224 == 0) {
            DAT_0204121c = 0;
          }
          else {
            FUN_00416dc0(&local_210,DAT_0203add0,DAT_0204121c,0xf);
            iVar5 = FUN_004170c0(&DAT_01171464,local_210,1);
            if ((iVar5 == 0) || (DAT_02041224 <= iVar5)) {
              DAT_02041228 = 0;
            }
            else {
              DAT_02041228 = 1;
            }
            FUN_00416e20(&DAT_0203add8,DAT_0204121c,DAT_02041228 + 4);
            FUN_00416e20(&DAT_0203add0,DAT_0204121c,DAT_02041228 + 4);
            DAT_020412d4 = DAT_020412d4 + 1;
            FUN_00416dc0(&local_218,DAT_0203add0,DAT_0204121c,(DAT_02041224 - DAT_02041228) + -5);
            uVar4 = FUN_0040e860(local_218,&DAT_0203ae80);
            *(undefined4 *)((longlong)&DAT_0203add8 + (longlong)DAT_020412d4 * 4 + 4) = uVar4;
          }
        }
      } while (DAT_0204121c != 0);
      do {
        uVar4 = 0;
        DAT_0204121c = FUN_0116d650(&DAT_0203add0,DAT_020412d8);
        if (DAT_0204121c != 0) {
          DAT_020412d8 = DAT_0204121c;
          FUN_00416dc0(&local_220,DAT_0203add0,DAT_0204121c,10);
          DAT_02041224 = FUN_004170c0(&DAT_01171454,local_220,1);
          if (DAT_02041224 == 0) {
            FUN_00416dc0(&local_228,DAT_0203add0,DAT_0204121c,10);
            DAT_02041224 = FUN_004170c0(&DAT_01171374,local_228,1);
          }
          if (DAT_02041224 == 0) {
            DAT_02041224 = 3;
          }
          else {
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_0204121c + DAT_02041224 + -2,2);
            if ((DAT_0203d980[1] == 0x2c) || (DAT_0203d980[1] == 0x29)) {
              lVar6 = FUN_00414de0(&DAT_0203d980);
              *(undefined2 *)(lVar6 + 2) = 0x20;
            }
            FUN_0043ea00(&local_230,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_230);
          }
          DAT_02041220 = FUN_004170c0(&DAT_01171418,DAT_0203add0,1);
          if (DAT_02041220 != 0) {
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 1,2);
            if ((DAT_0203d980[1] < 0x30) || (0x39 < DAT_0203d980[1])) {
              lVar6 = FUN_00414de0(&DAT_0203d980);
              *(undefined2 *)(lVar6 + 2) = 0x20;
            }
            FUN_0043ea00(&local_238,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_238);
          }
          if (DAT_02041220 == 0) {
            FUN_0116d5b0(&DAT_0203add8,DAT_0204121c,DAT_02041224 + -1,uVar4);
            FUN_0116d5b0(&DAT_0203add0,DAT_0204121c,DAT_02041224 + -1,uVar4);
            DAT_020412d4 = DAT_020412d4 + 1;
            *(undefined4 *)((longlong)&DAT_0203add8 + (longlong)DAT_020412d4 * 4 + 4) = uVar4;
          }
          else {
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + -2,2);
            if ((*DAT_0203d980 < 0x30) || (0x39 < *DAT_0203d980)) {
              puVar7 = (undefined2 *)FUN_00414de0(&DAT_0203d980);
              *puVar7 = 0x20;
            }
            FUN_0043ea00(&local_240,DAT_0203d980);
            iVar5 = FUN_0043fc00(local_240);
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 1,2);
            if ((DAT_0203d980[1] < 0x30) || (0x39 < DAT_0203d980[1])) {
              lVar6 = FUN_00414de0(&DAT_0203d980);
              *(undefined2 *)(lVar6 + 2) = 0x20;
            }
            FUN_0043ea00(&local_248,DAT_0203d980);
            _DAT_02041218 = FUN_0043fc00(local_248);
            *(int *)(&DAT_02041230 + (longlong)iVar5 * 4) = iVar5;
            DAT_0203a9a4 = DAT_0203a9a4 + 1;
            *(int *)(&DAT_0203aae4 + (longlong)DAT_0203a9a4 * 4) = iVar5;
            DAT_02041220 = FUN_004170c0(&DAT_01171428,DAT_0203add0,1);
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 3,2);
            FUN_0043ea00(&local_250,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_250);
            (&DAT_0203a9a4)[DAT_0203a9a4] = uVar4;
            if (9 < (&DAT_0203a9a4)[DAT_0203a9a4]) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            FUN_00416dc0(&DAT_0203d980,DAT_0203add0,DAT_02041220 + 6,2);
            FUN_0043ea00(&local_258,DAT_0203d980);
            uVar4 = FUN_0043fc00(local_258);
            *(undefined4 *)(&DAT_0203aa44 + (longlong)DAT_0203a9a4 * 4) = uVar4;
            if (9 < *(int *)(&DAT_0203aa44 + (longlong)DAT_0203a9a4 * 4)) {
              DAT_02041220 = DAT_02041220 + 1;
            }
            DAT_02041224 = 0;
            iVar9 = FUN_004170c0(L"GNDB",DAT_0203add0,1);
            if ((iVar9 != 0) &&
               (DAT_0203d990 <
                *(int *)(&DAT_0203aa44 + (longlong)DAT_0203a9a4 * 4) * DAT_0203a524 + 0x30)) {
              DAT_0203d990 = *(int *)(&DAT_0203aa44 + (longlong)DAT_0203a9a4 * 4) * DAT_0203a524 +
                             0x30;
            }
            DAT_02041224 = 0;
            iVar9 = FUN_004170c0(L"GNDF",DAT_0203add0,1);
            if ((iVar9 == 0) && (DAT_0203d9a0 != 1)) {
              DAT_0203d9a0 = 0;
            }
            else {
              if (DAT_0203d9a0 == 0) {
                *(int *)(PTR_DAT_02001ad0 + 0x50) = *(int *)(PTR_DAT_02001ad0 + 0x50) + 0x10;
              }
              DAT_0203d9a0 = 1;
            }
            DAT_02041224 = 0;
            DAT_02041224 = FUN_004170c0(L"OUTP",DAT_0203add0,1);
            if (DAT_02041224 != 0) {
              *(int *)(*param_5 + 0x50) =
                   *(int *)(*param_5 + 0x50) + (&DAT_0203a9a4)[DAT_0203a9a4] * DAT_0203a524;
              _DAT_0203d994 = *(int *)(&DAT_0203aa44 + (longlong)DAT_0203a9a4 * 4) * DAT_0203a524;
              cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x998) + 0x260))
                                (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x998));
              if ((((cVar3 != '\0') && (1 < *(int *)PTR_DAT_02005b20)) &&
                  (*(int *)PTR_DAT_02005b20 % *(int *)PTR_DAT_02001300 == 0)) ||
                 ((cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x990) +
                                       0x260))(*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x990)
                                              ), cVar3 != '\0' && (800 < *(int *)(*param_5 + 0x50)))
                 )) {
                DAT_0203a500 = *(int *)(*param_5 + 0x50);
                DAT_0203a504 = *(int *)(*param_5 + 0x54);
                *(undefined4 *)(*param_5 + 0x50) = 0x18;
                *(int *)(*param_5 + 0x54) = *(int *)(*param_5 + 0x54) + DAT_0203d990;
              }
            }
            DAT_02041224 = FUN_004170c0(&DAT_011714bc,DAT_0203add0,1);
            if (DAT_02041220 + 8 < DAT_02041224) {
              FUN_00416dc0(&local_268,DAT_0203add8,DAT_02041220 + 8,
                           (DAT_02041224 - DAT_02041220) + -8);
              FUN_0043ea00(&local_260,local_268);
              FUN_00416910(local_140,local_260,0xff);
              FUN_00415020(&DAT_0203ab88 + (longlong)iVar5 * 6,local_140,5);
            }
            else {
              FUN_00415020(&DAT_0203ab88 + (longlong)iVar5 * 6,&DAT_0203adc8,5);
            }
          }
        }
      } while (DAT_0204121c != 0);
      DAT_0204121c = FUN_004170c0(L"CREATECONDUCTIVEBRANCH",DAT_0203add0,1);
      if (DAT_0204121c != 0) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
        if (DAT_0203a50a == 'R') {
LAB_0116faf4:
          DAT_0203a6dc = DAT_0203a6dc + 1;
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            FUN_00416910(local_140,*(undefined8 *)(*param_5 + 0x48),0xff);
            FUN_00415020(&DAT_0203a509,local_140,5);
          }
          in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
          uVar8 = FUN_01168700(0,&PTR_FUN_01166d38,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                               in_stack_fffffffffffffd30,DAT_0203ade4,
                               (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                               DAT_0203ae90);
          *(undefined8 *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) = uVar8;
        }
        else {
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            iVar5 = FUN_00416db0(*(undefined8 *)(*param_5 + 0x48),&DAT_01171508);
            uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
            if (iVar5 == 0) goto LAB_0116faf4;
          }
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 != 0) goto LAB_01170d74;
          iVar5 = FUN_00416db0(*(undefined8 *)(*param_5 + 0x48),&DAT_0117151c);
          uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
          if (iVar5 != 0) goto LAB_01170d74;
          DAT_0203a6d8 = DAT_0203a6d8 + 1;
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            FUN_00416910(local_140,*(undefined8 *)(*param_5 + 0x48),0xff);
            FUN_00415020(&DAT_0203a509,local_140,5);
          }
          in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
          uVar8 = FUN_0116aad0(0,&PTR_FUN_01166dc8,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                               in_stack_fffffffffffffd30,DAT_0203ade4,
                               (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                               DAT_0203ae90);
          (&DAT_0203e7d0)[DAT_0203a6d8] = uVar8;
        }
        iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171522,(ulonglong)DAT_0203a509 + 1);
        if (iVar5 == 0) {
LAB_0116fd7d:
          *(undefined8 *)(*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
               *(undefined8 *)*param_5;
        }
        else {
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171525,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) goto LAB_0116fd7d;
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171528,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) goto LAB_0116fd7d;
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_0117152b,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            *(double *)(*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
                 *(double *)*param_5 / 2.0;
          }
          else {
            iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_0117152f,(ulonglong)DAT_0203a509 + 1);
            if (iVar5 != 0) {
              iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171532,(ulonglong)DAT_0203a509 + 1);
              if (iVar5 != 0) {
                iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171535,(ulonglong)DAT_0203a509 + 1);
                if (iVar5 != 0) {
                  iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171538,(ulonglong)DAT_0203a509 + 1);
                  if (iVar5 != 0) {
                    iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1);
                    if ((iVar5 != 0) ||
                       (iVar5 = FUN_00416db0(*(undefined8 *)(*param_5 + 0x48),&DAT_01171508),
                       iVar5 != 0)) {
                      iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_0117153b,(ulonglong)DAT_0203a509 + 1);
                      if (iVar5 != 0) {
                        iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011714fa,(ulonglong)DAT_0203a509 + 1
                                            );
                        if ((iVar5 != 0) ||
                           (iVar5 = FUN_00416db0(*(undefined8 *)(*param_5 + 0x48),&DAT_0117151c),
                           iVar5 != 0)) {
                          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_0117153e,
                                               (ulonglong)DAT_0203a509 + 1);
                          if (iVar5 != 0) {
                            *(undefined8 *)
                             (*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
                                 *(undefined8 *)(*param_5 + 0x38);
                            goto LAB_01170034;
                          }
                        }
                        *(undefined8 *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) =
                             *(undefined8 *)(*param_5 + 0x10);
                        _DAT_0203a509 = 0x4302;
                        DAT_0203a50b = 0x6f;
                        goto LAB_01170034;
                      }
                    }
                    *(undefined8 *)
                     (*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
                         *(undefined8 *)*param_5;
                    _DAT_0203a509 = 0x5202;
                    DAT_0203a50b = 0x6f;
                    goto LAB_01170034;
                  }
                }
                *(undefined8 *)(*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
                     *(undefined8 *)(*param_5 + 0x30);
                goto LAB_01170034;
              }
            }
            *(undefined8 *)(*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x70) =
                 *(undefined8 *)(*param_5 + 0x28);
          }
        }
LAB_01170034:
        if (DAT_0203a50a == 'R') {
          (*(code *)**(undefined8 **)
                      (*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8) + 0x18))
                    (*(longlong *)(&DAT_0203e960 + (longlong)DAT_0203a6dc * 8),param_1);
        }
        else {
          (*(code *)**(undefined8 **)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x18))
                    ((&DAT_0203e7d0)[DAT_0203a6d8],param_1);
        }
        DAT_0203af18 = 2;
      }
      DAT_02041220 = 0;
      DAT_0204121c = FUN_004170c0(L"CREATEVEZETEKOP",DAT_0203add0,1);
      cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
      if (cVar3 == '\0') {
        DAT_02041220 = FUN_004170c0(L"CREATEVEZETEKTAP",DAT_0203add0,1);
      }
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if ((DAT_0204121c != 0) || (DAT_02041220 != 0)) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        DAT_0203a6ec = DAT_0203a6ec + 1;
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_01168110(0,&PTR_FUN_01166d08,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203efa0 + (longlong)DAT_0203a6ec * 8) = uVar8;
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203efa0 + (longlong)DAT_0203a6ec * 8) + 0x18))
                  (*(longlong *)(&DAT_0203efa0 + (longlong)DAT_0203a6ec * 8),param_1);
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"CREATECAPACITIVEBRANCH",DAT_0203add0,1);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if (DAT_0204121c != 0) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        DAT_0203a6d8 = DAT_0203a6d8 + 1;
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_0116aad0(0,&PTR_FUN_01166dc8,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        (&DAT_0203e7d0)[DAT_0203a6d8] = uVar8;
        iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011715da,(ulonglong)DAT_0203a509 + 1);
        if (iVar5 == 0) {
LAB_01170305:
          *(undefined8 *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) = *(undefined8 *)(*param_5 + 0x10);
        }
        else {
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011715dd,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) goto LAB_01170305;
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011715e0,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            *(double *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) = *(double *)(*param_5 + 0x10) * 2.0;
          }
          else {
            iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011715e3,(ulonglong)DAT_0203a509 + 1);
            if (iVar5 == 0) {
              *(undefined8 *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) =
                   *(undefined8 *)(*param_5 + 0x20);
            }
            else {
              iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_011715e6,(ulonglong)DAT_0203a509 + 1);
              if (iVar5 == 0) {
                *(undefined8 *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) =
                     *(undefined8 *)(*param_5 + 0x10);
              }
              else {
                *(undefined8 *)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x70) =
                     *(undefined8 *)(*param_5 + 0x10);
              }
            }
          }
        }
        (*(code *)**(undefined8 **)((&DAT_0203e7d0)[DAT_0203a6d8] + 0x18))
                  ((&DAT_0203e7d0)[DAT_0203a6d8],param_1);
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"CREATEINDUCTIVEBRANCH",DAT_0203add0,1);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if (DAT_0204121c != 0) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        DAT_0203a6e0 = DAT_0203a6e0 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_0116a290(0,&PTR_FUN_01166d98,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8) = uVar8;
        iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171624,(ulonglong)DAT_0203a509 + 1);
        if (iVar5 == 0) {
          *(undefined8 *)(*(longlong *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8) + 0x70) =
               *(undefined8 *)(*param_5 + 0x18);
        }
        else {
          iVar5 = FUN_00414f50(&DAT_0203a509,&DAT_01171627,(ulonglong)DAT_0203a509 + 1);
          if (iVar5 == 0) {
            *(undefined8 *)(*(longlong *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8) + 0x70) =
                 *(undefined8 *)(*param_5 + 8);
          }
          else {
            *(undefined8 *)(*(longlong *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8) + 0x70) =
                 *(undefined8 *)(*param_5 + 8);
          }
        }
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8) + 0x18))
                  (*(longlong *)(&DAT_0203ec80 + (longlong)DAT_0203a6e0 * 8),param_1);
        DAT_0203af18 = 2;
      }
      DAT_02041220 = 0;
      DAT_0204121c = FUN_004170c0(L"CREATEVOLTAGEGENERATOR",DAT_0203add0,1);
      if ((DAT_0204121c == 0) &&
         (cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0)), cVar3 == '\0'))
      {
        DAT_02041220 = FUN_004170c0(L"CREATETAPGENERATOR",DAT_0203add0,1);
      }
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if ((DAT_0204121c != 0) || (DAT_02041220 != 0)) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        DAT_0203a6e4 = DAT_0203a6e4 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_01169050(0,&PTR_FUN_01166d68,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) = uVar8;
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x18))
                  (*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8),param_1);
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"CREATEKIMENET",DAT_0203add0,1);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if (DAT_0204121c != 0) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(2);
        DAT_0203a6e4 = DAT_0203a6e4 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        uVar8 = FUN_01169050(0,&PTR_FUN_01166d68,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             CONCAT44(uVar4,DAT_0203ade0),DAT_0203ade4,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) = uVar8;
        if (*PTR_DAT_02001a98 == '\0') {
          FUN_004169a0(&local_278,*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x34);
          in_stack_fffffffffffffd30 = (undefined *)0x0;
          FUN_011650d0(&DAT_011716e4,local_278,
                       **(int **)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) -
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 100),
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 4) -
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x68),
                       *(undefined4 *)
                        (*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x28),0);
        }
        else {
          FUN_004169a0(&local_270,*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x34);
          in_stack_fffffffffffffd30 = (undefined *)0x0;
          FUN_011650d0(&DAT_011716d0,local_270,
                       **(int **)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) -
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 100),
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 4) -
                       *(int *)(*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x68),
                       *(undefined4 *)
                        (*(longlong *)(&DAT_0203eaf0 + (longlong)DAT_0203a6e4 * 8) + 0x28),0);
        }
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"CREATEIDEALOPAMP",DAT_0203add0,1);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if (DAT_0204121c != 0) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(3);
        DAT_0203a6e8 = DAT_0203a6e8 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_0116c040(0,&PTR_FUN_01166e28,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,DAT_0203ade8,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8) = uVar8;
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8) + 0x18))
                  (*(longlong *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8),param_1);
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"OPAMPDEF",DAT_0203add0,1);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if (DAT_0204121c != 0) {
        FUN_01167890(3);
        DAT_0203a6e8 = DAT_0203a6e8 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_0116c040(0,&PTR_FUN_01166e28,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,DAT_0203ade8,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8) = uVar8;
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8) + 0x18))
                  (*(longlong *)(&DAT_0203ee10 + (longlong)DAT_0203a6e8 * 8),param_1);
        DAT_0203af18 = 2;
      }
      DAT_0204121c = FUN_004170c0(L"CREATEVCVS",DAT_0203add0,1);
      DAT_02041220 = FUN_004170c0(L"CREATEEADTHI",DAT_0203add0,1);
      if (DAT_02041220 == 0) {
        DAT_02041220 = FUN_004170c0(L"CREATEHISZT",DAT_0203add0,1);
      }
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
      if ((DAT_0204121c != 0) || (DAT_02041220 != 0)) {
        _DAT_02041210 = _DAT_02041210 + 1;
        FUN_01167590(4);
        DAT_0203a6d4 = DAT_0203a6d4 + 1;
        FUN_01167200(DAT_0203a51c,DAT_0203a520);
        in_stack_fffffffffffffd30 = (undefined *)CONCAT44(uVar4,DAT_0203ade0);
        uVar8 = FUN_0116b320(0,&PTR_FUN_01166df8,DAT_0203ae84,DAT_0203ae88,DAT_0203ae8c,
                             in_stack_fffffffffffffd30,DAT_0203ade4,DAT_0203ade8,DAT_0203adec,
                             (&DAT_0203aec4)[DAT_0203af18 + -1],(&DAT_0203aec4)[DAT_0203af18],
                             DAT_0203ae90);
        *(undefined8 *)(&DAT_0203e640 + (longlong)DAT_0203a6d4 * 8) = uVar8;
        (*(code *)**(undefined8 **)
                    (*(longlong *)(&DAT_0203e640 + (longlong)DAT_0203a6d4 * 8) + 0x18))
                  (*(longlong *)(&DAT_0203e640 + (longlong)DAT_0203a6d4 * 8),param_1);
        DAT_0203af18 = 2;
      }
    }
  } while( true );
  iVar5 = 1;
  if (0 < DAT_0203a6d4) {
    local_288 = (int *)&DAT_0203e648;
    iVar9 = DAT_0203a6d4;
    do {
      *(undefined8 *)(&DAT_0203f130 + (longlong)(iVar5 + DAT_0203a6f8) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a6f8 = DAT_0203a6f8 + DAT_0203a6d4;
  DAT_0203a6d4 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6d8) {
    local_288 = (int *)&DAT_0203e7d8;
    iVar9 = DAT_0203a6d8;
    do {
      *(undefined8 *)(&DAT_0203f5e0 + (longlong)(iVar5 + DAT_0203a6fc) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a6fc = DAT_0203a6fc + DAT_0203a6d8;
  DAT_0203a6d8 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6dc) {
    local_288 = (int *)&DAT_0203e968;
    iVar9 = DAT_0203a6dc;
    do {
      *(undefined8 *)(&DAT_0203ff40 + (longlong)(iVar5 + DAT_0203a700) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a700 = DAT_0203a700 + DAT_0203a6dc;
  DAT_0203a6dc = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6e0) {
    local_288 = (int *)&DAT_0203ec88;
    iVar9 = DAT_0203a6e0;
    do {
      *(undefined8 *)(&DAT_020403f0 + (longlong)(iVar5 + DAT_0203a704) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a704 = DAT_0203a704 + DAT_0203a6e0;
  DAT_0203a6e0 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6f4) {
    local_288 = (int *)&DAT_0203db58;
    iVar9 = DAT_0203a6f4;
    do {
      *(undefined8 *)(&DAT_0203e190 + (longlong)(iVar5 + DAT_0203a718) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a718 = DAT_0203a718 + DAT_0203a6f4;
  DAT_0203a6f4 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6e8) {
    local_288 = (int *)&DAT_0203ee18;
    iVar9 = DAT_0203a6e8;
    do {
      *(undefined8 *)(&DAT_020408a0 + (longlong)(iVar5 + DAT_0203a70c) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a70c = DAT_0203a70c + DAT_0203a6e8;
  DAT_0203a6e8 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6ec) {
    local_288 = (int *)&DAT_0203efa8;
    iVar9 = DAT_0203a6ec;
    do {
      *(undefined8 *)(&DAT_02040d50 + (longlong)(iVar5 + DAT_0203a710) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a710 = DAT_0203a710 + DAT_0203a6ec;
  DAT_0203a6ec = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6f0) {
    local_288 = (int *)&DAT_0203d9c8;
    iVar9 = DAT_0203a6f0;
    do {
      *(undefined8 *)(&DAT_0203dce0 + (longlong)(iVar5 + DAT_0203a714) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a714 = DAT_0203a714 + DAT_0203a6f0;
  DAT_0203a6f0 = 0;
  iVar5 = 1;
  if (0 < DAT_0203a6e4) {
    local_288 = (int *)&DAT_0203eaf8;
    iVar9 = DAT_0203a6e4;
    do {
      *(undefined8 *)(&DAT_0203fa90 + (longlong)(iVar5 + DAT_0203a708) * 8) =
           *(undefined8 *)local_288;
      iVar5 = iVar5 + 1;
      local_288 = (int *)((longlong)local_288 + 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  DAT_0203a708 = DAT_0203a708 + DAT_0203a6e4;
  DAT_0203a6e4 = 0;
  if (bVar2) {
    DAT_0203ae96 = '\x01';
  }
  goto LAB_0117117b;
}

