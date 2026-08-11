/* Ghidra address: 016395a0 */
/* Ghidra symbol: FUN_016395a0 */


void FUN_016395a0(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  undefined8 in_stack_fffffffffffffd08;
  undefined1 *puVar16;
  undefined1 *in_stack_fffffffffffffd10;
  wchar_t *in_stack_fffffffffffffd18;
  longlong local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a4;
  undefined4 local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  longlong local_278;
  int local_26c;
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
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined8 local_110;
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
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined8 local_90;
  byte local_85;
  undefined1 local_84;
  undefined1 local_83;
  byte local_82;
  char local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [8];
  byte *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  int local_2c;
  
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_220 = 0;
  local_228 = 0;
  local_218 = 0;
  local_208 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_1b0 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = (undefined1 *)0x0;
  local_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_120 = 0;
  local_128 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = (undefined1 *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = (undefined1 *)0x0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  FUN_0163cf20(param_2,L"Start THDLProcess.CreateComponents");
  FUN_0161bb00(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x628) + 0x10);
  *(undefined8 *)(param_2 + 0x13968) = *(undefined8 *)(param_1 + 0x628);
  *(undefined8 *)(param_2 + 0x139c0) = *(undefined8 *)(param_1 + 0x68);
  FUN_0043f750(&local_a8,iVar15);
  FUN_00416ba0(local_a0,L"Session Count: ",local_a8);
  FUN_0163cf20(param_2,local_a0[0]);
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  local_2b0 = 0;
  iVar14 = iVar15;
  if (-1 < iVar15 + -1) {
    do {
      FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_2b0);
      uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
      local_2b0 = local_2b0 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  local_278 = param_1;
  if (0 < param_3) {
    local_278 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
  }
  FUN_00416ba0(&local_b0,L"Processing: ",*(undefined8 *)(local_278 + 0x660));
  FUN_0163cf20(param_2,local_b0);
  FUN_0043f750(&local_c0,*(undefined4 *)(local_278 + 0xc));
  FUN_00416ba0(&local_b8,L"FNumOfRealVariables: ",local_c0);
  FUN_0163cf20(param_2,local_b8);
  FUN_0043f750(&local_d0,*(undefined4 *)(local_278 + 8));
  FUN_00416ba0(&local_c8,L"FNumOfInternalNodes: ",local_d0);
  FUN_0163cf20(param_2,local_c8);
  cVar2 = FUN_01639590(local_278);
  if ((cVar2 == '\0') || (*(char *)(local_278 + 0x68a) != '\0')) {
    iVar14 = FUN_004170c0(L"builtin_",*(undefined8 *)(param_1 + 0x658),1);
    if (iVar14 < 1) {
      if (*(char *)(param_1 + 0xa3) == '\0') {
        FUN_0043e130(&local_80,*(undefined8 *)(param_1 + 0x658));
        if (*(char *)(param_1 + 0x570) == '\x03') {
          FUN_01628390(local_80,*(undefined8 *)(param_1 + 0x80),param_2);
        }
        else {
          plVar9 = (longlong *)FUN_016281b0(local_80,*(undefined8 *)(param_1 + 0x80),param_2);
          if (plVar9 != (longlong *)0x0) {
            FUN_01625e40(&local_128,*(undefined8 *)(local_278 + 0x638));
            FUN_00416cd0(&local_120,3,local_128,&DAT_0163bd50,local_80);
            FUN_0163de40(param_2,plVar9,local_120);
            (**(code **)(*plVar9 + 0x288))(plVar9,&local_138);
            FUN_016137b0(&local_140,plVar9);
            FUN_00416cd0(&local_130,4,L"Comp inserted 3: pComp: ",local_138,L", CompID: ",local_140)
            ;
            FUN_0163cf20(param_2,local_130);
          }
        }
        goto LAB_0163baf4;
      }
    }
    else {
      lVar8 = FUN_0162a660(&DAT_016229e8,1,0,0);
      *(longlong *)(param_2 + 0x13960) = lVar8;
      local_2c = FUN_016278e0(*(undefined8 *)(param_1 + 0x658),lVar8 + 0x24,param_2);
      FUN_0162e7f0(lVar8,param_1,local_2c);
      if ((local_2c == 0xe) &&
         (iVar14 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x28))(*(longlong **)(lVar8 + 0x30))
         , iVar14 == 1)) {
        FUN_0043f750(&local_f8,0);
        (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x78))(*(longlong **)(lVar8 + 0x30),local_f8);
      }
      in_stack_fffffffffffffd10 =
           (undefined1 *)((ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
      in_stack_fffffffffffffd18 =
           (wchar_t *)((ulonglong)in_stack_fffffffffffffd18 & 0xffffffffffffff00);
      plVar9 = (longlong *)
               FUN_0162e1d0(lVar8,param_2,*(undefined8 *)(param_1 + 0xb0),0,
                            CONCAT44(uVar6,0xffffffff),in_stack_fffffffffffffd10,
                            in_stack_fffffffffffffd18);
      FUN_00410f20(lVar8);
      *(undefined8 *)(param_2 + 0x13960) = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
      if (plVar9 != (longlong *)0x0) {
        FUN_01625e40(&local_100,*(undefined8 *)(local_278 + 0x638));
        FUN_0163de40(param_2,plVar9,local_100);
        (**(code **)(*plVar9 + 0x288))(plVar9,&local_110);
        FUN_016137b0(&local_118,plVar9);
        in_stack_fffffffffffffd10 = local_118;
        FUN_00416cd0(&local_108,4,L"Comp inserted 2: pComp: ",local_110,L", CompID: ",local_118);
        FUN_0163cf20(param_2,local_108);
      }
    }
  }
  else {
    lVar7 = FUN_0162a660(&DAT_016229e8,1,0,0);
    *(longlong *)(param_2 + 0x13960) = lVar7;
    local_2c = 0x39;
    (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x10))
              (*(longlong **)(lVar7 + 0x30),*(undefined8 *)(local_278 + 0x6d8));
    lVar8 = param_1;
    if (*(char *)(param_1 + 0x5b8) == '\0') {
      lVar8 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
    }
    FUN_01634e60(lVar8,*(undefined8 *)(lVar7 + 0x30));
    in_stack_fffffffffffffd10 =
         (undefined1 *)((ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
    in_stack_fffffffffffffd18 =
         (wchar_t *)((ulonglong)in_stack_fffffffffffffd18 & 0xffffffffffffff00);
    plVar9 = (longlong *)
             FUN_0162e1d0(lVar7,param_2,*(undefined8 *)(param_1 + 0xb0),0,CONCAT44(uVar6,local_2c),
                          in_stack_fffffffffffffd10,in_stack_fffffffffffffd18);
    FUN_00410f20(lVar7);
    *(undefined8 *)(param_2 + 0x13960) = 0;
    if (plVar9 != (longlong *)0x0) {
      FUN_01625e40(&local_d8,*(undefined8 *)(local_278 + 0x638));
      FUN_0163de40(param_2,plVar9,local_d8);
      (**(code **)(*plVar9 + 0x288))(plVar9,&local_e8);
      FUN_016137b0(&local_f0,plVar9);
      in_stack_fffffffffffffd10 = local_f0;
      FUN_00416cd0(&local_e0,4,L"Comp inserted 1: pComp: ",local_e8,L", CompID: ",local_f0);
      FUN_0163cf20(param_2,local_e0);
    }
    *(undefined1 *)(local_278 + 0x68a) = 1;
    if (param_3 == 0) goto LAB_0163baf4;
  }
  if (iVar15 == 1) {
    lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),0);
    puVar16 = &local_83;
    in_stack_fffffffffffffd10 = &local_84;
    uVar3 = FUN_0162bac0(lVar8,*(undefined8 *)(param_1 + 0xb0),&local_90,&local_2c,puVar16,
                         in_stack_fffffffffffffd10);
    uVar6 = (undefined4)((ulonglong)puVar16 >> 0x20);
    *(undefined1 *)(param_1 + 0x90) = uVar3;
    if (*(char *)(param_1 + 0x90) != '\0') {
      *(longlong *)(param_2 + 0x13960) = lVar8;
      if ((local_2c == 0xe) &&
         (iVar14 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x28))(*(longlong **)(lVar8 + 0x30))
         , iVar14 == 1)) {
        FUN_0043f750(&local_148,0);
        (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x78))(*(longlong **)(lVar8 + 0x30),local_148);
      }
      lVar7 = param_1;
      if (*(char *)(param_1 + 0x5b8) == '\0') {
        lVar7 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
      }
      FUN_01634e60(lVar7,*(undefined8 *)(lVar8 + 0x30));
      in_stack_fffffffffffffd10 =
           (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd10 >> 8),local_83);
      in_stack_fffffffffffffd18 =
           (wchar_t *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd18 >> 8),local_84);
      plVar9 = (longlong *)
               FUN_0162e1d0(lVar8,param_2,*(undefined8 *)(param_1 + 0xb0),local_90,
                            CONCAT44(uVar6,local_2c),in_stack_fffffffffffffd10,
                            in_stack_fffffffffffffd18);
      *(undefined8 *)(param_2 + 0x13960) = 0;
      if (plVar9 != (longlong *)0x0) {
        FUN_01625e40(&local_150,*(undefined8 *)(local_278 + 0x638));
        FUN_0163de40(param_2,plVar9,local_150);
        (**(code **)(*plVar9 + 0x288))(plVar9,&local_160);
        FUN_016137b0(&local_168,plVar9);
        in_stack_fffffffffffffd10 = local_168;
        FUN_00416cd0(&local_158,4,L"Comp inserted 3: pComp: ",local_160,L", CompID: ",local_168);
        FUN_0163cf20(param_2,local_158);
      }
    }
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    local_2b0 = 0;
    iVar14 = iVar15;
    if (-1 < iVar15 + -1) {
      do {
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_2b0);
        uVar10 = FUN_0162ab40(lVar8,param_1);
        *(longlong *)(param_2 + 0x13960) = lVar8;
        *(longlong *)(param_1 + 0x5b0) = lVar8;
        cVar2 = FUN_01628c30(lVar8);
        if ((cVar2 != '\0') || (cVar2 = FUN_01629120(uVar10), cVar2 != '\0')) {
          local_2b8 = FUN_01636510(param_1,lVar8,param_2,&local_2c);
          if (local_2b8 == 0) {
            local_2b8 = FUN_01629310(&DAT_01620b80,1);
            *(int *)(local_2b8 + 0x18) = local_2c;
            FUN_01625e40(&local_170,*(undefined8 *)(local_278 + 0x638));
            FUN_00414ad0(local_2b8 + 0x38,local_170);
            uVar10 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,*(undefined2 *)(local_2b8 + 0x18));
            *(undefined8 *)(local_2b8 + 0x48) = uVar10;
            FUN_0163cf20(param_2,0);
            FUN_01625f30(&local_178,local_278);
            FUN_0163de40(param_2,uVar10,local_178);
            FUN_01636680(param_1,lVar8,local_2b8,param_2);
          }
          FUN_004ae7e0(*(undefined8 *)(local_2b8 + 0x10),lVar8);
          lVar7 = FUN_0162ab40(lVar8,param_1);
          *(longlong *)(param_1 + 0xb8) = lVar7;
          *(longlong *)(local_2b8 + 0x58) = lVar7;
          cVar2 = FUN_01628c30(lVar8);
          if ((cVar2 == '\0') && (cVar2 = FUN_01629120(lVar7), cVar2 != '\0')) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(local_2b8 + 0x51) = uVar3;
          FUN_01629a40(local_2b8,*(undefined8 *)(lVar8 + 0x30));
          uVar3 = FUN_01633b30(lVar8,param_1,param_2,local_2b8 + 0x1c);
          *(undefined1 *)(*(longlong *)(local_2b8 + 0x20) + 0x4a) = uVar3;
          *(undefined1 *)(lVar7 + 0x49) = *(undefined1 *)(*(longlong *)(local_2b8 + 0x20) + 0x4a);
          if ((*(char *)(lVar7 + 8) == '3') || (*(int *)(lVar7 + 0x2c) == 1)) {
            *(undefined1 *)(*(longlong *)(local_2b8 + 0x20) + 0x48) = 0;
          }
          if (*(char *)(lVar7 + 8) == '\x01') {
            *(undefined1 *)(*(longlong *)(local_2b8 + 0x20) + 0x49) = 0;
          }
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_016386b0(param_1,*(undefined8 *)(param_1 + 0xb0));
    iVar14 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar14 + -1) {
      do {
        local_2b8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                              (*(longlong **)(param_1 + 0x68),local_2b0);
        if (*(char *)(*(longlong *)(local_2b8 + 0x20) + 0x49) != '\0') {
          uVar10 = FUN_01629580(local_2b8,param_1,param_2,&local_58);
          plVar9 = (longlong *)FUN_016370a0(param_1,uVar10,param_2);
          iVar5 = (**(code **)(*plVar9 + 0x28))();
          local_2ac = 0;
          if (-1 < iVar5 + -1) {
            do {
              (**(code **)(*plVar9 + 0x18))(plVar9,&local_60,local_2ac);
              lVar8 = FUN_01636d10(param_1,*(undefined8 *)(param_1 + 0x70),local_60);
              if (lVar8 == 0) {
                FUN_01613110(L"FindControlEntry: p2 = NIL");
              }
              FUN_0161b150(lVar8,*(undefined8 *)(local_58 + 0x10),0,local_30);
              FUN_0161b150(lVar8,*(undefined8 *)(local_58 + 8),1,local_30);
              local_2ac = local_2ac + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_00410f20(uVar10);
          FUN_00410f20(plVar9);
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x90))(*(longlong **)(param_1 + 0x6d0));
    iVar14 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar14 + -1) {
      do {
        *(undefined8 *)(param_2 + 0x13968) = *(undefined8 *)(local_2b8 + 0x10);
        local_2b8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                              (*(longlong **)(param_1 + 0x68),local_2b0);
        FUN_01629b30(local_2b8,param_1,param_2);
        uVar6 = FUN_01629730(local_2b8,0,param_1,param_2);
        *(undefined4 *)(*(longlong *)(local_2b8 + 0x20) + 0x40) = uVar6;
        *(longlong *)(*(longlong *)(local_2b8 + 0x20) + 0x50) = param_2;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x28))
                          (*(longlong **)(param_1 + 0x6b8));
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        *(undefined4 *)(*(longlong *)(local_2b8 + 0x20) + 0x44) = *(undefined4 *)(param_1 + 0x54);
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x90))(*(longlong **)(param_1 + 0x6b8));
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x88))
              (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(param_1 + 0x6c0));
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x88))
              (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(param_1 + 0x6c8));
    local_2a4 = *(int *)(local_278 + 0xc);
    FUN_00419260(local_278 + 0x6a8,&DAT_016213a8,2,(longlong)local_2a4,
                 (longlong)*(int *)(param_1 + 0x54));
    local_2b0 = 0;
    iVar14 = local_2a4;
    if (-1 < local_2a4 + -1) {
      do {
        iVar5 = *(int *)(param_1 + 0x54);
        local_2ac = 0;
        if (-1 < iVar5 + -1) {
          do {
            uVar10 = FUN_00410e60(&PTR_FUN_00472dd0,1);
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(local_278 + 0x6a8) + (longlong)local_2b0 * 8) +
             (longlong)local_2ac * 8) = uVar10;
            local_2ac = local_2ac + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_0163cf20(param_2,0);
    iVar14 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar14 + -1) {
      do {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),local_2b0);
        local_2a4 = *(int *)(param_1 + 0x54);
        if (0 < local_2a4) {
          uVar10 = FUN_00409570((longlong)(local_2a4 * 8));
          *(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x38) = uVar10;
        }
        iVar5 = *(int *)(*(longlong *)(lVar8 + 0x10) + 0x10);
        local_2ac = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar7 = FUN_004aeac0(*(undefined8 *)(lVar8 + 0x10),local_2ac);
            lVar11 = FUN_0162ab40(lVar7,param_1);
            if (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x4a) != '\0') {
              local_294 = *(undefined4 *)(lVar7 + 0x1c);
              local_290 = *(undefined4 *)(lVar7 + 0x20);
              *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar8 + 0x1c);
              *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x1c);
            }
            lVar12 = *(longlong *)(param_1 + 0xb0);
            *(undefined1 *)(lVar12 + 0x1a) = 1;
            FUN_0162c0e0(lVar7,lVar12);
            if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x1a) == '\0') {
              *(undefined1 *)(*(longlong *)(lVar8 + 0x20) + 0x49) = 0;
            }
            if (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x4a) != '\0') {
              *(undefined4 *)(lVar7 + 0x1c) = local_294;
              *(undefined4 *)(lVar7 + 0x20) = local_290;
            }
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x10) == 1) &&
               (*(int *)(lVar11 + 0x2c) != 1)) {
              *(longlong *)(param_2 + 0x13960) = lVar7;
              lVar11 = *(longlong *)(lVar7 + 8);
              local_38 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10) + 8);
              local_40 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x18) + 8);
              if ((*(char *)(*(longlong *)(lVar7 + 0x10) + 8) == '1') &&
                 (((iVar15 == 1 && (cVar2 = FUN_01626480(lVar11), cVar2 != '\0')) &&
                  (cVar2 = FUN_016264d0(lVar11,lVar7 + 0xf8,&local_38,&local_40,&DAT_0163bde4),
                  cVar2 != '\0')))) {
                *(undefined1 *)(lVar8 + 0x50) = 1;
                FUN_016139c0(0,*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x128));
                local_2c = 9;
              }
              else if ((((*(char *)(*(longlong *)(lVar7 + 0x10) + 8) == '1') && (iVar15 == 1)) &&
                       (cVar2 = FUN_016264b0(lVar11), cVar2 != '\0')) &&
                      (cVar2 = FUN_016264d0(*(undefined8 *)(lVar11 + 8),lVar7 + 0xf8,&local_38,
                                            &local_40,&DAT_0163bde4), cVar2 != '\0')) {
                *(undefined1 *)(lVar8 + 0x50) = 1;
                FUN_016139c0(0,*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x128));
                local_2c = 0xb;
              }
              else if (((*(char *)(*(longlong *)(lVar7 + 0x10) + 8) == '3') && (iVar15 == 1)) &&
                      ((cVar2 = FUN_016264b0(lVar11), cVar2 != '\0' &&
                       (cVar2 = FUN_016264d0(*(undefined8 *)(lVar11 + 8),lVar7 + 0xf8,&local_38,
                                             &local_40,&DAT_0163bdf8), cVar2 != '\0')))) {
                *(undefined1 *)(lVar8 + 0x50) = 1;
                FUN_016139c0(0,*(undefined8 *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x128));
                local_2c = 10;
              }
              else if ((*(char *)(*(longlong *)(lVar7 + 0x10) + 8) == '3') &&
                      (cVar2 = FUN_01626370(lVar11,lVar7 + 0xf8), cVar2 != '\0')) {
                *(undefined1 *)(lVar8 + 0x50) = 1;
                local_2c = 0xd;
              }
              else if ((*(char *)(*(longlong *)(lVar7 + 0x10) + 8) == '1') &&
                      (cVar2 = FUN_01626370(lVar11,lVar7 + 0xf8), cVar2 != '\0')) {
                *(undefined1 *)(lVar8 + 0x50) = 1;
                local_2c = 0xe;
              }
              *(undefined1 *)(lVar7 + 0xb8) = *(undefined1 *)(lVar8 + 0x50);
              *(undefined8 *)(param_2 + 0x13960) = 0;
            }
            if (*(char *)(lVar8 + 0x50) != '\0') {
              in_stack_fffffffffffffd18 =
                   (wchar_t *)((ulonglong)in_stack_fffffffffffffd18 & 0xffffffffffffff00);
              plVar9 = (longlong *)
                       FUN_0162e1d0(lVar7,param_2,*(undefined8 *)(param_1 + 0xb0),0,0xffffffff,
                                    (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00,
                                    in_stack_fffffffffffffd18);
              (**(code **)(*plVar9 + 0x288))(plVar9,&local_188);
              FUN_016137b0(&local_190,plVar9);
              in_stack_fffffffffffffd10 = local_190;
              FUN_00416cd0(&local_180,4,L"Comp inserted 4: pComp: ",local_188,L", CompID: ",
                           local_190);
              FUN_0163cf20(param_2,local_180);
            }
            local_2ac = local_2ac + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((*(char *)(lVar8 + 0x50) == '\0') &&
           (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x49) != '\0')) {
          FUN_01636830(param_1,param_2,lVar8);
          (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x288))
                    (*(longlong **)(lVar8 + 0x48),&local_1a0);
          FUN_016137b0(&local_1a8,*(undefined8 *)(lVar8 + 0x48));
          FUN_01601420(&local_1b0,*(char *)(*(longlong *)(lVar8 + 0x20) + 0x49) == '\0');
          in_stack_fffffffffffffd18 = L", Comp Name: ";
          in_stack_fffffffffffffd10 = local_1a8;
          FUN_00416cd0(&local_198,8,L"Comp inserted 5: pComp: ",local_1a0,L", CompID: ",local_1a8,
                       L", Comp Name: ",*(undefined8 *)(lVar8 + 0x28),L", NonCircuit: ",local_1b0);
          FUN_0163cf20(param_2,local_198);
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (0 < *(int *)(param_1 + 0x54)) {
      FUN_00419260(param_1 + 0xa8,&DAT_01621288,1,(longlong)*(int *)(param_1 + 0x54));
    }
    lVar8 = FUN_016352a0(param_1);
    lVar7 = FUN_01637340(param_1);
    FUN_00414480(&local_78);
    iVar14 = *(int *)(lVar8 + 0x10);
    local_2b0 = 0;
    if (-1 < iVar14 + -1) {
      do {
        lVar11 = FUN_004aeac0(lVar8,local_2b0);
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xb0))
                          (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(lVar11 + 0x40));
        *(int *)(lVar11 + 0x34) = iVar5 + 1;
        if (*(int *)(lVar11 + 0x34) == 0) {
          FUN_01618e70(&local_68,*(undefined8 *)(lVar11 + 0x10),0);
          FUN_01618e70(&local_70,*(undefined8 *)(lVar11 + 0x18),0);
          lVar12 = FUN_01628af0(local_68,local_70,param_2);
          if (lVar12 == 0) {
            FUN_01618e70(&local_68,*(undefined8 *)(lVar11 + 0x18),0);
            FUN_01618e70(&local_70,*(undefined8 *)(lVar11 + 0x10),0);
            lVar12 = FUN_01628af0(local_68,local_70,param_2);
            if (lVar12 == 0) {
              FUN_01613110(L"Branch not found");
            }
          }
          (**(code **)(**(longlong **)(lVar12 + 0x48) + 0x288))
                    (*(longlong **)(lVar12 + 0x48),&local_60);
          FUN_00416ba0(lVar11 + 0x40,&DAT_0163bf10);
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xb0))
                            (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(lVar11 + 0x40));
          if (iVar5 == -1) {
            FUN_0164acb0(param_1,*(undefined8 *)(lVar11 + 0x40));
            iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xb0))
                              (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(lVar11 + 0x40));
            *(int *)(lVar11 + 0x34) = iVar5 + 1;
            if (lVar7 != 0) {
              (**(code **)(**(longlong **)(lVar7 + 0x48) + 0x2d0))(*(longlong **)(lVar7 + 0x48),0);
              pbVar1 = local_48;
              (**(code **)(**(longlong **)(local_48 + 8) + 0x78))
                        (*(longlong **)(local_48 + 8),*(undefined8 *)(lVar11 + 0x40));
              *pbVar1 = *pbVar1 + 1;
              *(ushort *)(pbVar1 + 0x10) = (ushort)*pbVar1;
            }
          }
          else {
            iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xb0))
                              (*(longlong **)(param_1 + 0x6b8),*(undefined8 *)(lVar11 + 0x40));
            *(int *)(lVar11 + 0x34) = iVar5 + 1;
          }
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_00410f20(lVar8);
    uVar10 = FUN_016352a0(param_1);
    local_2b0 = 0;
    iVar14 = iVar15;
    if (-1 < iVar15 + -1) {
      do {
        lVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_2b0);
        cVar2 = FUN_01628c30(lVar8);
        if (cVar2 != '\0') {
          lVar11 = FUN_01636510(param_1,lVar8,param_2,&local_2c);
          lVar12 = FUN_0162ab40(lVar8,param_1);
          *(longlong *)(lVar8 + 0xc0) = param_1;
          *(longlong *)(lVar12 + 0xb0) = lVar8;
          if (((lVar7 != 0) && (*(char *)(lVar11 + 0x50) == '\0')) &&
             (*(char *)(*(longlong *)(lVar7 + 0x20) + 0x49) != '\0')) {
            FUN_004ae7e0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 8),lVar12);
            FUN_004af610(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0x10),uVar10,0,0);
          }
        }
        local_2b0 = local_2b0 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_00410f20(uVar10);
    local_2b0 = 0;
    if (-1 < iVar15 + -1) {
      do {
        uVar10 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),local_2b0);
        cVar2 = FUN_01628c30(uVar10);
        if (cVar2 != '\0') {
          FUN_01636510(param_1,uVar10,param_2,&local_2c);
          lVar8 = FUN_0162ab40(uVar10,param_1);
          if (lVar8 != 0) {
            FUN_016354b0(param_1,lVar8,param_2);
            bVar4 = FUN_0161c160(*(undefined8 *)(lVar8 + 0x58),*(undefined8 *)(param_1 + 0xb0),
                                 local_50,&local_85);
            if ((local_85 & bVar4) != 0) {
              FUN_0043f750(&local_1c0,*(undefined4 *)(lVar8 + 0x70));
              FUN_0161ca20(&local_1c8,*(undefined8 *)(lVar8 + 0x58));
              FUN_00416cd0(&local_1b8,5,local_1c0,&DAT_0163bf24,*(undefined8 *)(param_1 + 0x638),
                           &DAT_0163bf24,local_1c8);
              plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10f0);
              (**(code **)(*plVar9 + 0x78))(plVar9,local_1b8);
            }
          }
        }
        local_2b0 = local_2b0 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar15 + -1) {
      do {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),local_2b0);
        *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + 0x44) = *(undefined4 *)(param_1 + 0x54);
        iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + 8) + 0x10);
        local_2ac = 0;
        if (-1 < iVar14 + -1) {
          do {
            lVar7 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 8),local_2ac);
            *(undefined4 *)(lVar7 + 100) = *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + 0x40);
            *(undefined4 *)(lVar7 + 0x68) = *(undefined4 *)(param_1 + 0x54);
            *(longlong *)(lVar7 + 0x88) = lVar8;
            local_2ac = local_2ac + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        local_2b0 = local_2b0 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_28c = 0;
    local_288 = 0;
    local_284 = 0;
    local_280 = 0;
    iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar15 + -1) {
      do {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),local_2b0);
        iVar14 = *(int *)(*(longlong *)(lVar8 + 0x10) + 0x10);
        local_2ac = 0;
        if (-1 < iVar14 + -1) {
          do {
            lVar7 = FUN_004aeac0(*(undefined8 *)(lVar8 + 0x10),local_2ac);
            FUN_0162ac70(*(undefined8 *)(lVar7 + 8),param_1);
            if (*(char *)(lVar8 + 0x51) != '\0') {
              FUN_01649bb0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(lVar7 + 8));
            }
            lVar11 = FUN_0162ab40(lVar7,param_1);
            uVar10 = *(undefined8 *)(lVar7 + 8);
            *(undefined8 *)(lVar11 + 0x90) = uVar10;
            FUN_0161dbb0(uVar10,param_1 + 0x5e0);
            FUN_01639510(param_1,*(undefined8 *)(lVar11 + 0x90),param_2,&local_81);
            if (local_81 != '\0') {
              pbVar1 = (byte *)(*(longlong *)(lVar11 + 0x90) + 0xb1);
              *pbVar1 = *pbVar1 | 1;
              local_280 = local_280 + 1;
            }
            local_288 = local_288 + 1;
            FUN_0162d600(lVar7,lVar11,param_2);
            bVar13 = 0;
            bVar4 = bVar13;
            if ((*(char *)(lVar8 + 0x50) == '\0') && (bVar4 = 0, 0 < local_2a4)) {
              uVar10 = FUN_00409570((longlong)(local_2a4 * 8));
              *(undefined8 *)(lVar11 + 0x98) = uVar10;
              local_26c = 0;
              iVar5 = local_2a4;
              if (-1 < local_2a4 + -1) {
                do {
                  lVar7 = FUN_01656db0(*(undefined8 *)(lVar11 + 0x90),local_26c + 1);
                  *(longlong *)(*(longlong *)(lVar11 + 0x98) + (longlong)local_26c * 8) = lVar7;
                  FUN_01639450(param_1,lVar7,param_2,&local_82,&local_81);
                  bVar13 = bVar13 | local_82;
                  if (local_81 != '\0') {
                    *(byte *)(lVar7 + 0xb1) = *(byte *)(lVar7 + 0xb1) | 1;
                  }
                  if (local_82 != 0) {
                    *(byte *)(lVar7 + 0xb1) = *(byte *)(lVar7 + 0xb1) | 2;
                  }
                  local_26c = local_26c + 1;
                  iVar5 = iVar5 + -1;
                  bVar4 = bVar13;
                } while (iVar5 != 0);
              }
            }
            local_28c = local_28c + 1;
            if (bVar4 != 0) {
              local_284 = local_284 + 1;
            }
            cVar2 = FUN_01629120(lVar11);
            if (cVar2 != '\0') {
              *(byte *)(lVar11 + 200) = bVar4;
            }
            local_2ac = local_2ac + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        local_2b0 = local_2b0 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    FUN_0163cf20(param_2,0);
    FUN_0043f750(&local_1d8,local_288);
    FUN_0043f750(&local_1e0,local_280);
    FUN_0043f750(&local_1e8,local_28c);
    FUN_0043f750(&local_1f0,local_284);
    FUN_00416cd0(&local_1d0,8,L"NFPtrTree: ",local_1d8,L", NFPtrStatic: ",local_1e0,L", NDPtrTree: "
                 ,local_1e8,L", NDPtrReused: ",local_1f0);
    FUN_0163cf20(param_2,local_1d0);
    iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar15 + -1) {
      do {
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),local_2b0);
        if ((*(char *)(lVar8 + 0x50) == '\0') &&
           (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x49) != '\0')) {
          (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x2d0))
                    (*(longlong **)(lVar8 + 0x48),0,&local_48);
          pbVar1 = local_48;
          (**(code **)(**(longlong **)(local_48 + 8) + 0x10))
                    (*(longlong **)(local_48 + 8),*(undefined8 *)(param_1 + 0x6b8));
          lVar8 = FUN_004aeac0(*(undefined8 *)(lVar8 + 0x10),0);
          lVar7 = FUN_0162ab40(lVar8,param_1);
          *(undefined8 *)(pbVar1 + 0x28) = *(undefined8 *)(lVar8 + 8);
          *(undefined8 *)(pbVar1 + 0x18) = *(undefined8 *)(lVar7 + 0x98);
        }
        local_2b0 = local_2b0 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
    local_2b0 = 0;
    if (-1 < iVar15 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                  (*(longlong **)(param_1 + 0x68),local_2b0);
        local_2b0 = local_2b0 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    FUN_0163c2b0(param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))(*(longlong **)(param_1 + 0x88));
  }
  FUN_0163cf20(param_2,0);
  iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))(*(longlong **)(param_1 + 0x68));
  if (0 < iVar15) {
    FUN_0163cf20(param_2,L">> SpiceComps");
  }
  iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))(*(longlong **)(param_1 + 0x68));
  if (0 < iVar15) {
    FUN_0043f750(&local_200,*(undefined4 *)(param_1 + 0x54));
    FUN_00416ba0(&local_1f8,L"MaxCDim: ",local_200);
    FUN_0163cf20(param_2,local_1f8);
  }
  iVar15 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  local_2b0 = 0;
  if (-1 < iVar15 + -1) {
    do {
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),local_2b0);
      (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x288))(*(longlong **)(lVar8 + 0x48),&local_208);
      FUN_016137b0(&local_210,*(undefined8 *)(lVar8 + 0x48));
      FUN_00416cd0(&local_60,6,L"pComp^.GetLabel: ",local_208,L", CompID: ",local_210,
                   L", Comp Name: ",*(undefined8 *)(lVar8 + 0x28));
      FUN_0163cf20(param_2,local_60);
      cVar2 = FUN_016270e0(*(undefined4 *)(lVar8 + 0x18));
      if ((cVar2 != '\0') && (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x49) != '\0')) {
        FUN_0163cf20(param_2,L"CComps");
        iVar14 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x28))();
        local_2ac = 0;
        if (-1 < iVar14 + -1) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x18))
                      (*(longlong **)(param_1 + 0x6b8),&local_218,local_2ac);
            FUN_0163cf20(param_2,local_218);
            local_2ac = local_2ac + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        FUN_00414480(&local_60);
        plVar9 = *(longlong **)(lVar8 + 0x48);
        iVar5 = (**(code **)(*plVar9 + 0x1c8))(plVar9);
        local_2ac = 0;
        iVar14 = iVar5;
        if (-1 < iVar5 + -1) {
          do {
            uVar6 = (**(code **)(*plVar9 + 0x210))(plVar9,local_2ac);
            FUN_0043f750(&local_220,local_2ac);
            FUN_0043f750(&local_228,uVar6);
            FUN_00416cd0(&local_60,6,local_60,&DAT_0163c06c,local_220,&DAT_0163c07c,local_228,
                         &DAT_0163c08c);
            local_2ac = local_2ac + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        iVar14 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x28))(*(longlong **)(lVar8 + 8));
        FUN_0043f750(&local_238,iVar5 - iVar14);
        uVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x28))(*(longlong **)(lVar8 + 8));
        FUN_0043f750(&local_240,uVar6);
        FUN_00416cd0(&local_230,6,L"Nodes (graph numbers)  (ctl nodes: ",local_238,&DAT_0163c0f0,
                     L", (base nodes after ctl nodes: ",local_240,&DAT_0163c0f0);
        FUN_0163cf20(param_2,local_230);
        FUN_0163cf20(param_2,local_60);
        (**(code **)(*plVar9 + 0x2d0))(plVar9,0,&local_48);
        pbVar1 = local_48;
        FUN_0043f750(&local_250,*local_48);
        FUN_0043f750(&local_258,*(undefined2 *)(pbVar1 + 0x10));
        FUN_00416cd0(&local_248,4,L"Dim: ",local_250,L", PCount: ",local_258);
        FUN_0163cf20(param_2,local_248);
      }
      FUN_0163cf20(param_2,0);
      local_2b0 = local_2b0 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  cVar2 = FUN_01635310(param_1);
  if (cVar2 == '\0') {
    FUN_004ae7e0(*(undefined8 *)(param_2 + 0x50),param_1);
  }
  FUN_0163d240(param_2);
  FUN_0163cf20(param_2,L"End THDLProcess.CreateComponents");
  FUN_0163cf20(param_2,0);
LAB_0163baf4:
  FUN_00414560(&local_258,0x38);
  FUN_00414560(&local_80,5);
  return;
}

