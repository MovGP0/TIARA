/* Ghidra address: 01247da0 */
/* Ghidra symbol: FUN_01247da0 */


void FUN_01247da0(int *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong *in_RDX;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  double dVar14;
  double dVar15;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar16;
  undefined8 in_stack_fffffffffffffd80;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffd88;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined8 in_stack_fffffffffffffd90;
  undefined4 uVar22;
  undefined8 uVar21;
  undefined8 in_stack_fffffffffffffd98;
  undefined4 uVar24;
  undefined8 uVar23;
  undefined8 in_stack_fffffffffffffda0;
  undefined4 uVar25;
  int local_214;
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
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40 [4];
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffda0 >> 0x20);
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffd90 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffd88 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffd80 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_40[0] = (longlong *)0x0;
  local_48 = 0;
  local_78 = 0;
  iVar4 = *param_1;
  if (iVar4 < 0x69) {
    if (iVar4 == 0x68) {
      FUN_00419260(&local_48,&DAT_01247d68,1,(longlong)*(short *)((longlong)param_1 + 0x1e));
      iVar9 = (int)*(short *)((longlong)param_1 + 0x1e);
      iVar4 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar8 = (longlong)iVar4;
          *(int *)(local_48 + lVar8 * 8) = (int)(short)param_1[3] + (int)(short)param_1[lVar8 + 8];
          *(int *)(local_48 + 4 + lVar8 * 8) =
               (int)*(short *)((longlong)param_1 + 0xe) +
               (int)*(short *)((longlong)param_1 + (longlong)iVar4 * 4 + 0x22);
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      lVar8 = 0;
      if (local_48 != 0) {
        lVar8 = *(longlong *)(local_48 + -8);
      }
      FUN_01244130(&local_148,in_RDX,param_3,local_48,lVar8 + -1,
                   CONCAT44(uVar18,(int)(short)param_1[7]),CONCAT44(uVar20,param_1[5]),
                   CONCAT44(uVar22,param_1[6]));
      FUN_00419430(&local_48,&DAT_01247d68);
    }
    else if (iVar4 == 0x65) {
      piVar1 = param_1 + 3;
      uVar13 = CONCAT44(uVar18,(int)(short)param_1[4]);
      FUN_01243890(&local_130,in_RDX,param_3,(longlong)(short)*piVar1,
                   (int)*(short *)((longlong)param_1 + 0xe),uVar13,
                   (int)*(short *)((longlong)param_1 + 0x12),(int)(short)param_1[6],param_1[5]);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_88 = (int)(short)*piVar1;
      local_84 = (int)*(short *)((longlong)param_1 + 0xe);
      local_7c = (int)*(short *)((longlong)param_1 + 0xe);
      local_90 = (int)(short)param_1[4];
      local_8c = (int)*(short *)((longlong)param_1 + 0x12);
      local_80 = local_88;
      uVar13 = FUN_01a9ac20(&local_88,&local_90);
      uVar17 = CONCAT44(uVar6,param_1[5]);
      FUN_01247ac0((longlong)param_1 + 0x1a,in_RDX,param_3,&local_80,uVar13,uVar17);
      uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
      local_98 = (int)(short)param_1[4];
      local_94 = (int)*(short *)((longlong)param_1 + 0x12);
      local_a0 = (int)(short)param_1[4];
      local_9c = (int)*(short *)((longlong)param_1 + 0x12);
      local_a8 = (int)(short)*piVar1;
      local_a4 = (int)*(short *)((longlong)param_1 + 0xe);
      uVar13 = FUN_01a9ac20(&local_a0,&local_a8);
      FUN_01247ac0((longlong)param_1 + 0x21,in_RDX,param_3,&local_98,uVar13,
                   CONCAT44(uVar6,param_1[5]));
    }
    else if (iVar4 == 0x66) {
      cVar2 = (char)param_1[3];
      if (cVar2 == '\0') {
        FUN_01243a40(&local_138,in_RDX,param_3,(longlong)*(short *)((longlong)param_1 + 0xd),
                     (int)*(short *)((longlong)param_1 + 0xf),
                     CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0x11)),
                     (int)*(short *)((longlong)param_1 + 0x13),
                     (int)*(short *)((longlong)param_1 + 0x1d),
                     *(undefined4 *)((longlong)param_1 + 0x15),
                     *(undefined4 *)((longlong)param_1 + 0x19));
      }
      else if (cVar2 == '\x01') {
        FUN_01243bf0(in_RDX,param_3,(longlong)*(short *)((longlong)param_1 + 0xd),
                     (longlong)*(short *)((longlong)param_1 + 0xf),
                     (int)*(short *)((longlong)param_1 + 0x11),
                     CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0x13)),
                     (int)*(short *)((longlong)param_1 + 0x1d),
                     *(undefined4 *)((longlong)param_1 + 0x15),
                     *(undefined4 *)((longlong)param_1 + 0x19));
      }
      else if (cVar2 == '\x02') {
        FUN_01243dc0(&local_140,in_RDX,param_3,(longlong)*(short *)((longlong)param_1 + 0xd),
                     (int)*(short *)((longlong)param_1 + 0xf),
                     CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0x11)),
                     (int)*(short *)((longlong)param_1 + 0x13),
                     (int)*(short *)((longlong)param_1 + 0x1d),
                     *(undefined4 *)((longlong)param_1 + 0x15),0xfffffffe);
      }
    }
  }
  else if (iVar4 == 0x69) {
    if ((char)param_1[3] == '\0') {
      uVar5 = (int)*(short *)((longlong)param_1 + 0x11) - (int)*(short *)((longlong)param_1 + 0xd);
      uVar7 = (int)uVar5 >> 0x1f;
      uVar10 = (int)*(short *)((longlong)param_1 + 0x13) - (int)*(short *)((longlong)param_1 + 0xf);
      uVar11 = (int)uVar10 >> 0x1f;
      iVar4 = FUN_00b905f0((longlong)(int)((uVar5 ^ uVar7) - uVar7) / 4 & 0xffffffff,
                           (longlong)(int)((uVar10 ^ uVar11) - uVar11) / 4 & 0xffffffff);
      cVar2 = FUN_00527030((int)*(short *)((longlong)param_1 + 0x11) -
                           (int)*(short *)((longlong)param_1 + 0xd));
      cVar3 = FUN_00527030((int)*(short *)((longlong)param_1 + 0x13) -
                           (int)*(short *)((longlong)param_1 + 0xf));
      uVar13 = CONCAT44(uVar16,(int)*(short *)((longlong)param_1 + 0xf));
      uVar17 = CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0x11));
      uVar19 = CONCAT44(uVar20,(int)*(short *)((longlong)param_1 + 0xf) + cVar3 * iVar4);
      uVar21 = CONCAT44(uVar22,1);
      uVar23 = CONCAT44(uVar24,*(undefined4 *)((longlong)param_1 + 0x15));
      FUN_01243dc0(local_40,in_RDX,param_3,(int)*(short *)((longlong)param_1 + 0x11) - cVar2 * iVar4
                   ,uVar13,uVar17,uVar19,uVar21,uVar23,CONCAT44(uVar25,0xfffffffe));
      uVar22 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar20 = (undefined4)((ulonglong)uVar21 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"type",L"arrowarc");
      cVar2 = FUN_00527030((int)*(short *)((longlong)param_1 + 0x11) -
                           (int)*(short *)((longlong)param_1 + 0xd));
      uVar13 = CONCAT44(uVar6,(int)*(short *)((longlong)param_1 + 0xf));
      uVar17 = CONCAT44(uVar16,(int)*(short *)((longlong)param_1 + 0x11) - cVar2 * iVar4);
      uVar19 = CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0xf));
      uVar21 = CONCAT44(uVar20,1);
      uVar23 = CONCAT44(uVar22,*(undefined4 *)((longlong)param_1 + 0x15));
      FUN_01243890(&local_150,in_RDX,param_3,(longlong)*(short *)((longlong)param_1 + 0xd),uVar13,
                   uVar17,uVar19,uVar21,uVar23);
      uVar22 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar20 = (undefined4)((ulonglong)uVar21 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      cVar2 = FUN_00527030((int)*(short *)((longlong)param_1 + 0x13) -
                           (int)*(short *)((longlong)param_1 + 0xf));
      uVar13 = CONCAT44(uVar16,(int)*(short *)((longlong)param_1 + 0x11));
      FUN_01243890(&local_158,in_RDX,param_3,(longlong)*(short *)((longlong)param_1 + 0x11),
                   CONCAT44(uVar6,(int)*(short *)((longlong)param_1 + 0xf) + cVar2 * iVar4),uVar13,
                   CONCAT44(uVar18,(int)*(short *)((longlong)param_1 + 0x13)),CONCAT44(uVar20,1),
                   CONCAT44(uVar22,*(undefined4 *)((longlong)param_1 + 0x15)));
      uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_b0 = (int)*(short *)((longlong)param_1 + 0xd);
      local_ac = (int)*(short *)((longlong)param_1 + 0xf);
      local_b8 = (int)*(short *)((longlong)param_1 + 0xd);
      local_b4 = (int)*(short *)((longlong)param_1 + 0xf);
      local_c0 = (int)*(short *)((longlong)param_1 + 0x11);
      local_bc = (int)*(short *)((longlong)param_1 + 0xf);
      uVar13 = FUN_01a9ac20(&local_b8,&local_c0);
      uVar17 = CONCAT44(uVar6,*(undefined4 *)((longlong)param_1 + 0x15));
      FUN_01247ac0((longlong)param_1 + 0x19,in_RDX,param_3,&local_b0,uVar13,uVar17);
      uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
      local_c8 = (int)*(short *)((longlong)param_1 + 0x11);
      local_c4 = (int)*(short *)((longlong)param_1 + 0x13);
      local_d0 = (int)*(short *)((longlong)param_1 + 0x11);
      local_cc = (int)*(short *)((longlong)param_1 + 0x13);
      local_d8 = (int)*(short *)((longlong)param_1 + 0x11);
      local_d4 = (int)*(short *)((longlong)param_1 + 0xf);
      uVar13 = FUN_01a9ac20(&local_d0,&local_d8);
      FUN_01247ac0(param_1 + 8,in_RDX,param_3,&local_c8,uVar13,
                   CONCAT44(uVar6,*(undefined4 *)((longlong)param_1 + 0x15)));
    }
    else if ((char)param_1[3] == '\x01') {
      (**(code **)(*in_RDX + 0x148))(in_RDX,local_40,L"shape");
      (**(code **)(*param_3 + 0x98))(param_3,&local_160,local_40[0]);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"type",L"arrowarc");
      local_e0 = (int)*(short *)((longlong)param_1 + 0xd);
      iStack_dc = (int)*(short *)((longlong)param_1 + 0xf);
      local_50 = CONCAT44(iStack_dc,local_e0);
      local_e8 = (int)*(short *)((longlong)param_1 + 0x11);
      iStack_e4 = (int)*(short *)((longlong)param_1 + 0x13);
      local_58 = CONCAT44(iStack_e4,local_e8);
      uVar16 = extraout_XMM0_Db;
      if (local_e8 < local_e0) {
        FUN_01242100(&local_50,&local_58);
        uVar16 = extraout_XMM0_Db_00;
      }
      if (local_58._4_4_ < local_50._4_4_) {
        FUN_01242100((longlong)&local_50 + 4,(longlong)&local_58 + 4);
        uVar16 = extraout_XMM0_Db_01;
      }
      local_60 = ((int)local_50 + (int)local_58) / 2;
      local_5c = (local_50._4_4_ + local_58._4_4_) / 2;
      fVar12 = (float)FUN_00525ef0(CONCAT44(uVar16,(float)(local_58._4_4_ - local_5c)),
                                   CONCAT44(uVar6,(float)((int)local_58 - local_60)));
      iVar4 = FUN_0040c770((double)fVar12 * 57.29577951308232);
      if ((*(short *)((longlong)param_1 + 0xf) < *(short *)((longlong)param_1 + 0x13)) &&
         (*(short *)((longlong)param_1 + 0xd) < *(short *)((longlong)param_1 + 0x11))) {
        local_214 = -iVar4;
      }
      else if ((*(short *)((longlong)param_1 + 0xf) < *(short *)((longlong)param_1 + 0x13)) &&
              (*(short *)((longlong)param_1 + 0x11) < *(short *)((longlong)param_1 + 0xd))) {
        local_214 = 0x168 - iVar4;
      }
      else if ((*(short *)((longlong)param_1 + 0x13) < *(short *)((longlong)param_1 + 0xf)) &&
              (*(short *)((longlong)param_1 + 0xd) < *(short *)((longlong)param_1 + 0x11))) {
        local_214 = -0xb4 - iVar4;
      }
      else if ((*(short *)((longlong)param_1 + 0x13) < *(short *)((longlong)param_1 + 0xf)) &&
              (*(short *)((longlong)param_1 + 0x11) < *(short *)((longlong)param_1 + 0xd))) {
        local_214 = 0xb4 - iVar4;
      }
      FUN_0043f750(&local_170,local_50 & 0xffffffff);
      FUN_0043f750(&local_178,local_50._4_4_);
      FUN_0043f750(&local_180,local_58 & 0xffffffff);
      FUN_0043f750(&local_188,local_58._4_4_);
      FUN_0043f750(&local_190,local_214);
      FUN_0043f750(&local_198,iVar4 * 2 + 0xb4);
      uVar18 = 0;
      uVar22 = 0;
      uVar13 = local_178;
      uVar17 = local_180;
      uVar19 = local_188;
      FUN_00416cd0(&local_168,0xb,local_170,&DAT_01249184,local_178,&DAT_01249184,local_180,
                   &DAT_01249184,local_188,&DAT_01249184,local_190,&DAT_01249184,local_198);
      uVar24 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uVar20 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar16 = (undefined4)((ulonglong)uVar13 >> 0x20);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"points",local_168);
      FUN_0043f750(&local_1a0,1);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"width",local_1a0);
      uVar6 = FUN_01242250(*(undefined4 *)((longlong)param_1 + 0x15));
      FUN_0043f780(&local_1a8,uVar6);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"color",local_1a8);
      dVar14 = (double)FUN_0040c760(0x4000000000000000);
      local_68 = FUN_0040c770(((1.0 - 1.0 / dVar14) / 2.0) *
                              (double)((int)*(short *)((longlong)param_1 + 0x11) -
                                      (int)*(short *)((longlong)param_1 + 0xd)));
      local_68 = *(short *)((longlong)param_1 + 0xd) + local_68;
      dVar14 = (double)FUN_0040c760(0x4000000000000000);
      local_64 = FUN_0040c770(((1.0 / dVar14 + 1.0) / 2.0) *
                              (double)((int)*(short *)((longlong)param_1 + 0x13) -
                                      (int)*(short *)((longlong)param_1 + 0xf)));
      local_64 = *(short *)((longlong)param_1 + 0xf) + local_64;
      local_f0 = (int)*(short *)((longlong)param_1 + 0x11);
      local_ec = (int)*(short *)((longlong)param_1 + 0x13);
      local_f8 = (int)*(short *)((longlong)param_1 + 0xd);
      local_f4 = (int)*(short *)((longlong)param_1 + 0xf);
      dVar14 = (double)FUN_01a9ac20(&local_f0,&local_f8);
      dVar15 = (double)FUN_0040bdd0(dVar14 - 1.5707963267949);
      local_70 = FUN_0040c770(dVar15 * 8.0);
      local_70 = local_68 - local_70;
      dVar15 = (double)FUN_0040bcd0(dVar14 - 1.5707963267949);
      local_6c = FUN_0040c770(dVar15 * 8.0);
      local_6c = local_64 + local_6c;
      if (*(char *)((longlong)param_1 + 0x19) != '\0') {
        uVar13 = CONCAT44(uVar18,local_70);
        uVar17 = CONCAT44(uVar20,local_6c);
        uVar19 = CONCAT44(uVar22,1);
        uVar21 = CONCAT44(uVar24,*(undefined4 *)((longlong)param_1 + 0x15));
        FUN_01243890(&local_1b0,in_RDX,param_3,local_68,CONCAT44(uVar16,local_64),uVar13,uVar17,
                     uVar19,uVar21);
        uVar24 = (undefined4)((ulonglong)uVar21 >> 0x20);
        uVar22 = (undefined4)((ulonglong)uVar19 >> 0x20);
        uVar20 = (undefined4)((ulonglong)uVar17 >> 0x20);
        local_100 = local_70;
        local_fc = local_6c;
        uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),*(undefined4 *)((longlong)param_1 + 0x15)
                         );
        FUN_01247ac0((longlong)param_1 + 0x19,in_RDX,param_3,&local_100,dVar14,uVar13);
        uVar18 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      dVar14 = (double)FUN_0040c760(0x4000000000000000);
      local_68 = FUN_0040c770(((1.0 / dVar14 + 1.0) / 2.0) *
                              (double)((int)*(short *)((longlong)param_1 + 0x11) -
                                      (int)*(short *)((longlong)param_1 + 0xd)));
      local_68 = *(short *)((longlong)param_1 + 0xd) + local_68;
      dVar14 = (double)FUN_0040c760(0x4000000000000000);
      local_64 = FUN_0040c770(((1.0 / dVar14 + 1.0) / 2.0) *
                              (double)((int)*(short *)((longlong)param_1 + 0x13) -
                                      (int)*(short *)((longlong)param_1 + 0xf)));
      local_64 = *(short *)((longlong)param_1 + 0xf) + local_64;
      local_108 = (int)*(short *)((longlong)param_1 + 0xd);
      local_104 = (int)*(short *)((longlong)param_1 + 0x13);
      local_110 = (int)*(short *)((longlong)param_1 + 0x11);
      local_10c = (int)*(short *)((longlong)param_1 + 0xf);
      dVar14 = (double)FUN_01a9ac20(&local_108,&local_110);
      dVar15 = (double)FUN_0040bdd0(dVar14 - 1.5707963267949);
      local_70 = FUN_0040c770(dVar15 * 8.0);
      local_70 = local_68 - local_70;
      dVar15 = (double)FUN_0040bcd0(dVar14 - 1.5707963267949);
      local_6c = FUN_0040c770(dVar15 * 8.0);
      local_6c = local_64 + local_6c;
      if ((char)param_1[8] != '\0') {
        FUN_01243890(&local_1b8,in_RDX,param_3,local_68,CONCAT44(uVar16,local_64),
                     CONCAT44(uVar18,local_70),CONCAT44(uVar20,local_6c),CONCAT44(uVar22,1),
                     CONCAT44(uVar24,*(undefined4 *)((longlong)param_1 + 0x15)));
        local_118 = local_70;
        local_114 = local_6c;
        FUN_01247ac0(param_1 + 8,in_RDX,param_3,&local_118,dVar14,
                     *(undefined4 *)((longlong)param_1 + 0x15));
      }
    }
  }
  else if (iVar4 == 0x6b) {
    (**(code **)(*in_RDX + 0x148))(in_RDX,local_40,L"shape");
    (**(code **)(*param_3 + 0x98))(param_3,&local_1c0,local_40[0]);
    (**(code **)(*local_40[0] + 0x108))(local_40[0],L"type",L"edfarc");
    local_120 = (int)(short)param_1[3];
    iStack_11c = (int)*(short *)((longlong)param_1 + 0xe);
    local_50 = CONCAT44(iStack_11c,local_120);
    local_128 = (int)(short)param_1[4];
    iStack_124 = (int)*(short *)((longlong)param_1 + 0x12);
    local_58 = CONCAT44(iStack_124,local_128);
    FUN_0043f750(&local_1d0,local_120);
    FUN_0043f750(&local_1d8,local_50._4_4_);
    FUN_0043f750(&local_1e0,local_58 & 0xffffffff);
    FUN_0043f750(&local_1e8,local_58._4_4_);
    FUN_0043f750(&local_1f0,(longlong)(short)param_1[5]);
    FUN_0043f750(&local_1f8,(longlong)*(short *)((longlong)param_1 + 0x16));
    FUN_00416cd0(&local_1c8,0xb,local_1d0,&DAT_01249184,local_1d8,&DAT_01249184,local_1e0,
                 &DAT_01249184,local_1e8,&DAT_01249184,local_1f0,&DAT_01249184,local_1f8);
    (**(code **)(*local_40[0] + 0x108))(local_40[0],L"points",local_1c8);
    uVar6 = FUN_00b905e0((longlong)(short)param_1[8],1);
    FUN_0043f750(&local_200,uVar6);
    (**(code **)(*local_40[0] + 0x108))(local_40[0],L"width",local_200);
    uVar6 = FUN_01242250(param_1[6]);
    FUN_0043f780(&local_208,uVar6);
    (**(code **)(*local_40[0] + 0x108))(local_40[0],L"color",local_208);
    if (param_1[7] != -2) {
      uVar6 = FUN_01242250(param_1[7]);
      FUN_0043f780(&local_210,uVar6);
      (**(code **)(*local_40[0] + 0x108))(local_40[0],L"fill",local_210);
    }
  }
  FUN_00414560(&local_210,10);
  FUN_0041b800(&local_1c0);
  FUN_00417840(&local_1b8,&LAB_00b9fca0,2);
  FUN_00414560(&local_1a8,9);
  FUN_0041b800(&local_160);
  FUN_00417840(&local_158,&LAB_00b9fca0,6);
  FUN_00414480(&local_78);
  FUN_00419430(&local_48,&DAT_01247d68);
  FUN_0041b800(local_40);
  return;
}

