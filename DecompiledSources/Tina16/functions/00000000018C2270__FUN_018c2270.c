/* Ghidra address: 018c2270 */
/* Ghidra symbol: FUN_018c2270 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018c2270(longlong *param_1,int param_2,int param_3,int param_4,char param_5,ushort param_6,
                 double param_7,double param_8,double param_9,byte *param_10)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_var;
  int extraout_var_00;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_1e8 [32];
  byte *local_1c8;
  byte *local_1c0;
  byte *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 local_e2;
  undefined1 local_e1;
  longlong local_e0 [4];
  char local_b9;
  longlong local_b8;
  byte *local_b0;
  int local_a4;
  byte *local_a0;
  longlong *local_98;
  longlong local_90;
  byte local_85 [11];
  undefined1 local_7a;
  undefined8 local_79;
  undefined8 local_71;
  byte local_69;
  undefined8 local_66;
  longlong *local_5e;
  double local_56;
  double local_4e;
  double local_46;
  
  local_f0 = auStack_1e8;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_f8 = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  puVar3 = auStack_1e8;
  if ((((-1 < param_2) &&
       (iVar6 = (**(code **)*param_1)(param_1), puVar3 = local_f0, param_2 < iVar6)) &&
      (*(char *)(param_1[5] + 0x48) == '\0')) &&
     (local_98 = (longlong *)(**(code **)(*param_1 + 8))(param_1,param_2), puVar3 = local_f0,
     local_98 != (longlong *)0x0)) {
    local_e1 = 0;
    local_e2 = 0;
    FUN_00414480(local_e0);
    FUN_018b9030(param_1);
    if (((char)local_98[0x36] == '\0') || (param_2 % 2 != 1)) {
      dVar12 = (double)local_98[0x35] * *(double *)PTR_DAT_02002c30;
    }
    else {
      dVar12 = (double)local_98[0x39] * *(double *)PTR_DAT_02002c30;
    }
    param_8 = param_8 + dVar12 * param_7;
    param_9 = param_9 + (double)local_98[0x3c] * *(double *)PTR_DAT_02002c30 * param_7;
    local_b9 = '\0';
    local_b8 = 0;
    plVar1 = *(longlong **)(param_1[4] + 0x210);
    if (plVar1 == (longlong *)0x0) {
      local_7a = 1;
      local_66 = 0;
      local_79 = 0;
      local_71 = 0;
      local_85[0] = 0;
      local_85[1] = 0;
      local_85[2] = 0;
      local_85[3] = 0;
      local_85[4] = 0;
      local_85[5] = 0;
      local_85[6] = 0;
      local_85[7] = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x280))(plVar1,local_85);
    }
    local_56 = param_8;
    local_46 = param_7;
    local_69 = param_10[0xb];
    local_b0 = (byte *)0x0;
    local_4e = param_9;
    if ((*param_10 == 2) || (param_1[0x16] == 0)) {
      local_a0 = (byte *)(**(code **)(*local_98 + 0x218))
                                   (local_98,((double)param_3 - param_8) / param_7,
                                    ((double)param_4 - param_9) / param_7,0);
      cVar4 = FUN_004113d0(local_a0,&PTR_FUN_019317f0);
      if ((cVar4 != '\0') &&
         ((cVar4 = FUN_018c20a0(auStack_1e8,local_a0), cVar4 != '\0' && (local_a0[0x250] != 0)))) {
        param_1[0x17] = (longlong)local_a0;
      }
      cVar4 = FUN_004113d0(local_a0,&PTR_FUN_01921f40);
      if ((cVar4 != '\0') &&
         (cVar4 = (**(code **)(*(longlong *)local_a0 + 0x200))
                            (local_a0,((double)param_3 - param_8) / param_7,
                             ((double)param_4 - param_9) / param_7), cVar4 != '\0')) {
        local_b0 = local_a0;
      }
    }
    else {
      local_b0 = (byte *)param_1[0x16];
    }
    if (param_1[0x17] != 0) {
      local_b8 = param_1[0x17];
    }
    if ((((local_5e != (longlong *)0x0) &&
         ((*(uint *)(*(longlong *)(param_1[4] + 0x220) + 10) & 0x20000) != 0)) &&
        ((local_b0 == (byte *)0x0 || ((param_6 & 1) == 0)))) && (*param_10 == 4)) {
      if (0 < (int)local_5e[2]) {
        local_85[8] = '\x01';
      }
      (**(code **)(*local_5e + 0x10))(local_5e);
    }
    if (local_b0 != (byte *)0x0) {
      local_b9 = '\x01';
      pbVar2 = (byte *)param_1[0x16];
      if ((pbVar2 != (byte *)0x0) && (pbVar2 != local_b0)) {
        iVar6 = FUN_0040c770(param_8);
        iVar7 = FUN_0040c770(param_9);
        local_1c8 = local_b0;
        local_1c0 = local_85;
        FUN_019781d0(param_1[4],pbVar2,param_3 - iVar6,param_4 - iVar7);
      }
      if ((byte *)param_1[0x16] != local_b0) {
        FUN_01978010(param_1[4],local_b0,(byte *)param_1[0x16],local_85);
        param_1[0x16] = (longlong)local_b0;
      }
      lVar9 = *(longlong *)(local_b0 + 0xf0);
      cVar4 = FUN_004113d0(lVar9,&PTR_FUN_019317f0);
      if ((cVar4 != '\0') && (*(char *)(lVar9 + 0x250) != '\0')) {
        local_b8 = lVar9;
      }
      if (*(short *)(local_b0 + 0x1a2) != 0) {
        *(short *)(param_10 + 9) = *(short *)(local_b0 + 0x1a2);
      }
      if ((*(longlong *)(*(longlong *)(local_b0 + 0x208) + 0x30) != 0) &&
         (FUN_00414b50(local_e0,*(undefined8 *)(*(longlong *)(local_b0 + 0x208) + 0x30)),
         *(short *)(local_b0 + 0x1a2) == 0)) {
        param_10[9] = 0xeb;
        param_10[10] = 0xff;
      }
      if (((*(longlong *)(local_b0 + 0x1e8) != 0) && (local_b0[0x1f0] != 0)) &&
         (*(char *)(*(longlong *)(param_1[4] + 0x210) + 0x498) != '\0')) {
        FUN_00648780(local_e0,*(longlong *)(local_b0 + 0x1e8));
        local_e2 = 1;
        local_e1 = 1;
        FUN_00648720(&local_f8,*(longlong *)(local_b0 + 0x1e8));
        FUN_00414ad0(*(longlong *)(param_1[4] + 0x210) + 0xf0,local_f8);
        FUN_0064dfb0(*(undefined8 *)(param_1[4] + 0x210),1);
        cVar4 = (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x308))
                          (*(longlong **)(param_1[4] + 0x210));
        if (cVar4 == '\0') {
          iVar6 = (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0xd8))
                            (*(longlong **)(param_1[4] + 0x210));
          (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0xd8))
                    (*(longlong **)(param_1[4] + 0x210));
          local_100 = FUN_00498310(param_3 + iVar6,param_4 + extraout_var_00);
          FUN_0080ec80(*(undefined8 *)PTR_DAT_02004030,&local_100);
        }
        else {
          iVar6 = (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0xd8))
                            (*(longlong **)(param_1[4] + 0x210));
          (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0xd8))
                    (*(longlong **)(param_1[4] + 0x210));
          local_100 = FUN_00498310(param_3 + iVar6,param_4 + extraout_var + 0x16);
          FUN_0080ec80(*(undefined8 *)PTR_DAT_02004030,&local_100);
        }
      }
      local_85[9] = '\0';
      bVar5 = *param_10;
      if (bVar5 < 5) {
        if (bVar5 == 4) {
          iVar6 = FUN_0040c770(param_8);
          iVar7 = FUN_0040c770(param_9);
          local_1c8 = (byte *)CONCAT62(local_1c8._2_6_,param_6);
          local_1c0 = local_85;
          bVar5 = FUN_0194fc00(local_b0,param_3 - iVar6,param_4 - iVar7,param_5);
          pbVar2 = local_b0;
          param_10[0x1a] = bVar5;
          if (((local_5e != (longlong *)0x0) &&
              ((*(uint *)(*(longlong *)(param_1[4] + 0x220) + 10) & 0x20000) != 0)) &&
             ((param_6 & 1) != 0)) {
            iVar6 = FUN_004aeba0(local_5e,local_b0);
            if (iVar6 == -1) {
              FUN_004ae7e0(local_5e,pbVar2);
            }
            else {
              FUN_004aee30(local_5e,pbVar2);
            }
            local_85[8] = '\x01';
          }
        }
        else if (bVar5 == 0) {
          local_1c8 = local_85 + 9;
          local_1c0 = local_85;
          local_1b8 = (byte *)((ulonglong)local_1b8._1_7_ << 8);
          FUN_019730f0(param_1[4],local_b0,param_5,param_6);
        }
        else if (bVar5 == 1) {
          local_1c8 = local_85 + 9;
          local_1c0 = local_85;
          local_1b8 = (byte *)CONCAT71(local_1b8._1_7_,1);
          FUN_019730f0(param_1[4],local_b0,param_5,param_6);
        }
        else if (bVar5 == 2) {
          iVar6 = FUN_0040c770(param_8);
          iVar7 = FUN_0040c770(param_9);
          local_1c8 = local_85;
          FUN_0194fee0(local_b0,param_3 - iVar6,param_4 - iVar7,param_6);
        }
        else if (bVar5 == 3) {
          iVar6 = FUN_0040c770(param_8);
          iVar7 = FUN_0040c770(param_9);
          local_1c8 = (byte *)CONCAT71(local_1c8._1_7_,param_5);
          local_1c0 = (byte *)CONCAT62(local_1c0._2_6_,param_6);
          local_1b8 = local_85;
          FUN_019783b0(param_1[4],local_b0,param_3 - iVar6,param_4 - iVar7);
        }
      }
      else if (bVar5 == 5) {
        iVar6 = FUN_0040c770(param_8);
        iVar7 = FUN_0040c770(param_9);
        local_1c8 = (byte *)CONCAT71(local_1c8._1_7_,param_10[0xc]);
        local_1c0 = param_10 + 0xd;
        local_1b8 = local_85;
        bVar5 = FUN_01952440(local_b0,*(undefined8 *)(param_10 + 1),param_3 - iVar6,param_4 - iVar7)
        ;
        param_10[0x1a] = bVar5;
      }
      else if (bVar5 == 6) {
        local_1c8 = local_85;
        bVar5 = FUN_019523a0(local_b0,*(undefined8 *)(param_10 + 1),param_3,param_4);
        param_10[0x1a] = bVar5;
      }
      else if (bVar5 == 7) {
        local_1c8 = local_85;
        bVar5 = FUN_01950170(local_b0,param_6,*(undefined4 *)(param_10 + 0xe),param_10 + 0x12);
        param_10[0x1a] = bVar5;
      }
      if (*param_10 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)param_10 >> 8),1) << (*param_10 & 0x1f) & 3U) != 0
        ;
      }
      else {
        bVar11 = false;
      }
      if (((bVar11) && (local_b8 == 0)) && (param_1[0x16] != 0)) {
        FUN_018c0a60(param_1,*(longlong *)(local_b0 + 0x208));
      }
      else {
        lVar9 = param_1[4];
        if (*(longlong *)(lVar9 + 0x3c8) != 0) {
          (**(code **)(lVar9 + 0x3c8))(*(undefined8 *)(lVar9 + 0x3d0),local_b0);
        }
      }
    }
    if ((local_85[9] != '\0') && (param_1[0x16] != 0)) {
      lVar9 = param_1[0x16];
      cVar4 = FUN_004113d0(lVar9,&PTR_FUN_01925478);
      if ((cVar4 != '\0') && (lVar9 = FUN_0195f560(lVar9), *(char *)(lVar9 + 0x20) != '\0')) {
        lVar9 = param_1[0x16];
        uVar10 = FUN_0195f560(lVar9);
        FUN_01964540(lVar9,uVar10);
      }
      (**(code **)(*param_1 + 0x110))(param_1,param_1[0x16]);
      if ((param_1[4] != 0) && (*(longlong *)(param_1[0x16] + 0x180) != 0)) {
        local_90 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        FUN_00468700(&local_160,param_1[0x16]);
        local_148 = local_160;
        uStack_140 = uStack_158;
        uStack_138 = uStack_150;
        FUN_00468700(&local_178,local_90);
        local_130 = local_178;
        uStack_128 = uStack_170;
        uStack_120 = uStack_168;
        FUN_00468820(&local_190,local_85[8]);
        local_118 = local_190;
        uStack_110 = uStack_188;
        uStack_108 = uStack_180;
        FUN_0046c840(local_e0 + 1,&local_148,2);
        FUN_01973040(param_1[4],*(undefined8 *)(param_1[0x16] + 0x180),local_e0 + 1,1);
        param_10[0x1a] = *(longlong *)(param_1[0x16] + 0x180) != 0;
        FUN_0046cb70(&local_1a8,local_e0 + 1,1,&LAB_018c3414);
        iVar6 = FUN_004644a0(&local_1a8);
        local_85[8] = iVar6 != 0;
        iVar6 = *(int *)(local_90 + 0x10);
        local_a4 = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar10 = FUN_004aeac0(local_90,local_a4);
            cVar4 = FUN_004113d0(uVar10,&PTR_FUN_01921f40);
            if (cVar4 != '\0') {
              uVar10 = FUN_004aeac0(local_90,local_a4);
              (**(code **)(*param_1 + 0x110))(param_1,uVar10);
            }
            local_a4 = local_a4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        FUN_00410f20(local_90);
      }
      param_1[0x17] = 0;
    }
    if ((local_b9 == '\0') && (param_1[0x16] != 0)) {
      FUN_018c21b0(auStack_1e8);
      FUN_01977cb0(param_1[4],0,0,0);
      FUN_01977cb0(param_1[4],0,1,1);
    }
    else if (local_e0[0] != 0) {
      FUN_01977cb0(param_1[4],local_e0[0],local_e1,local_e2);
    }
    if (((local_85[8] != '\0') || (local_85[9] != '\0')) && (*(longlong *)(param_1[4] + 0x210) != 0)
       ) {
      plVar1 = *(longlong **)(*(longlong *)(param_1[4] + 0x210) + 0x550);
      (**(code **)(*plVar1 + 0x188))(plVar1);
    }
    if (((local_b8 != 0) && (param_10[9] = 0xeb, param_10[10] = 0xff, *param_10 == 0)) &&
       (param_5 == '\0')) {
      iVar6 = (**(code **)(**(longlong **)(param_1[4] + 400) + 0xb0))
                        (*(longlong **)(param_1[4] + 400),*(undefined8 *)(local_b8 + 0x248));
      if (iVar6 == -1) {
        (**(code **)(**(longlong **)(param_1[4] + 400) + 0x78))
                  (*(longlong **)(param_1[4] + 400),*(undefined8 *)(local_b8 + 0x248));
      }
      else {
        plVar1 = *(longlong **)(param_1[4] + 400);
        uVar8 = (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(local_b8 + 0x248));
        (**(code **)(*plVar1 + 0x98))(plVar1,uVar8);
      }
      (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x2a8))(*(longlong **)(param_1[4] + 0x210))
      ;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
    FUN_018b9080(param_1);
    FUN_0196f460(param_1[4]);
    puVar3 = local_f0;
  }
  local_f0 = puVar3;
  FUN_00417840(&local_1a8,&DAT_004013d8,4);
  FUN_00414480(&local_f8);
  FUN_00414480(local_e0);
  FUN_00460ba0(local_e0 + 1);
  return;
}

