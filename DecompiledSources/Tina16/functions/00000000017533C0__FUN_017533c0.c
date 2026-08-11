/* Ghidra address: 017533c0 */
/* Ghidra symbol: FUN_017533c0 */


void FUN_017533c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  ulonglong uVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  int local_f4;
  undefined8 local_f0;
  int local_e8;
  longlong *local_e0;
  undefined2 local_d2;
  undefined8 local_d0;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  short *local_b0;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  int iStack_4c;
  char local_45;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  byte local_31;
  ulonglong local_30 [2];
  
  local_100 = auStack_178;
  local_118 = 0;
  local_120 = (longlong *)0x0;
  local_108 = 0;
  local_110 = (longlong *)0x0;
  local_b0 = (short *)0x0;
  local_b8 = 0;
  local_d0 = 0;
  local_e0 = (longlong *)0x0;
  local_30[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (((((param_2 == (longlong *)0x0) || (cVar2 = FUN_0175ad40(param_1,param_2), cVar2 == '\0')) &&
       (local_res18 == (longlong *)0x0)) || (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) != '\0')
      ) || ((param_2 != (longlong *)0x0 && (*(char *)((longlong)param_2 + 0x12d) != '\0'))))
  goto LAB_0175467f;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  local_40 = (uint)uVar3;
  cVar2 = FUN_0173cbb0(local_40,2);
  if (cVar2 == '\0') {
    local_44 = 0;
  }
  else {
    local_44 = 5;
  }
  local_158 = (wchar_t *)&local_c0;
  local_150._0_1_ = 1;
  local_148._0_1_ = 1;
  FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xffffffc5,0xfffffff1,&local_bc);
  local_158 = (wchar_t *)&local_c8;
  local_150 = CONCAT71(local_150._1_7_,1);
  local_148 = CONCAT31(local_148._1_3_,1);
  FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xf,local_44 + 7,&local_c4);
  if (param_2 != (longlong *)0x0) {
    if ((param_6 == '\0') || (cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), cVar2 < '\0'))
    {
      uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      local_158 = (wchar_t *)CONCAT44(local_158._4_4_,local_c8);
      local_150 = CONCAT44(local_150._4_4_,uVar4);
      (**(code **)(*param_2 + 0x60))(param_2,local_bc,local_c0,local_c4);
    }
    else {
      plVar6 = (longlong *)FUN_00609e10(DAT_0210ffb0);
      uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,0,0);
      local_158 = (wchar_t *)CONCAT44(local_158._4_4_,local_c8);
      local_150 = CONCAT44(local_150._4_4_,uVar4);
      (**(code **)(*param_2 + 0x60))(param_2,local_bc,local_c0,local_c4);
    }
    if (*(double *)(param_1 + 0x40) != *(double *)(param_1 + 0x38)) {
      local_158._0_4_ = local_c8 + local_44 + 0xe;
      FUN_01a9fc20(param_2,local_bc,local_c0,local_c4);
      if ((param_6 == '\0') || (cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), cVar2 < '\0')
         ) {
        uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,0);
        local_158 = (wchar_t *)CONCAT44(local_158._4_4_,local_c8);
        local_150 = CONCAT44(local_150._4_4_,uVar4);
        (**(code **)(*param_2 + 0x60))(param_2,local_bc,local_c0,local_c4);
      }
      else {
        plVar6 = (longlong *)FUN_00609e10(DAT_0210ffb0);
        uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,0,0);
        local_158 = (wchar_t *)CONCAT44(local_158._4_4_,local_c8);
        local_150 = CONCAT44(local_150._4_4_,uVar4);
        (**(code **)(*param_2 + 0x60))(param_2,local_bc,local_c0,local_c4);
      }
    }
  }
  if (param_2 != (longlong *)0x0) {
    if ((param_6 == '\0') || (cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), cVar2 < '\0'))
    {
      (**(code **)(*param_2 + 0xb8))(param_2,0xffffff);
    }
    else {
      plVar6 = (longlong *)FUN_00609e10(DAT_0210ffb0);
      uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,0,0);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
  }
  if ((((param_2 != (longlong *)0x0) && (local_40 != 0xaa)) && (local_40 != 0xab)) &&
     ((local_40 != 0xac && (*(char *)(param_1 + 0x51) != *(char *)(param_1 + 0x50))))) {
    FUN_01752f50(auStack_178,6);
    FUN_01752f50(auStack_178,7);
    FUN_01752f50(auStack_178,8);
    FUN_01752f50(auStack_178,9);
    FUN_01752f50(auStack_178,10);
  }
  if (*(char *)(param_1 + 9) != '\0') {
    if (param_2 != (longlong *)0x0) {
      FUN_01a9fd10(param_2);
    }
    goto LAB_0175467f;
  }
  if (param_2 != (longlong *)0x0) {
    if ((param_6 == '\0') || (cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), cVar2 < '\0'))
    {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
    }
    else {
      (**(code **)(*param_2 + 0xb8))(param_2,0);
    }
    (**(code **)(*param_2 + 0xe8))(param_2,1);
  }
  dVar9 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x40));
  if (dVar9 < 1e-15) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x3b9) != '\0') ||
     (dVar9 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x40)), 1e+15 <= dVar9)) {
    FUN_00414b50(&local_b0,L"////");
    FUN_00414480(&local_b8);
  }
  else {
    local_d2 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    local_158 = (wchar_t *)&local_b8;
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_00b8fcd0(&local_b0,*(undefined8 *)(param_1 + 0x40),3,0);
    local_38 = 1;
    local_3c = 0;
    while( true ) {
      local_e8 = 0;
      if (local_b0 != (short *)0x0) {
        local_e8 = *(int *)(local_b0 + -2);
      }
      if ((local_e8 < local_38) || (local_b0[(longlong)local_38 + -1] == 0x2e)) break;
      if ((ushort)(local_b0[(longlong)local_38 + -1] - 0x30U) < 0x10) {
        bVar8 = ((int)CONCAT62((int6)((ulonglong)local_b0 >> 0x10),1) <<
                 ((byte)(local_b0[(longlong)local_38 + -1] - 0x30U) & 0x1f) & 0x3ffU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        local_3c = local_3c + 1;
      }
      local_38 = local_38 + 1;
    }
    FUN_00414b50(&local_d0,&DAT_017547e8);
    iVar7 = 4 - local_3c;
    local_38 = 1;
    if (0 < iVar7) {
      do {
        FUN_00416ad0(&local_d0,&DAT_017547fc);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00414480(local_30);
    local_f0 = FUN_00448650(local_b0,PTR_DAT_02004830);
    FUN_004485a0(local_30,local_d0,local_f0,PTR_DAT_02004830);
    FUN_00414b50(&local_b0,local_30[0]);
    FUN_00414480(local_30);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_d2;
  }
  iStack_4c = (int)(DAT_01f9b1cc >> 0x20);
  iStack_4c = iStack_4c + local_44;
  local_50 = (undefined4)DAT_01f9b1cc;
  if (*local_b0 == 0x2d) {
    local_158 = L"Courier New";
    local_150 = 0x3ff0000000000000;
    FUN_017530e0(auStack_178,DAT_01f9b1cc & 0xffffffff,iStack_4c,&DAT_0175480c);
    FUN_00416e20(&local_b0,1,1);
  }
  else if (*local_b0 == 0x2b) {
    local_158 = L"Courier New";
    local_150 = 0x3ff0000000000000;
    FUN_017530e0(auStack_178,DAT_01f9b1cc & 0xffffffff,iStack_4c,&DAT_01754840);
    FUN_00416e20(&local_b0,1,1);
  }
  if (local_b8 != 0) {
    iStack_4c = (int)(DAT_01f9b1dc >> 0x20);
    iStack_4c = iStack_4c + local_44;
    local_50 = (undefined4)DAT_01f9b1dc;
    local_158 = L"Courier New";
    local_150 = 0x3ff4cccccccccccd;
    FUN_017530e0(auStack_178,DAT_01f9b1dc & 0xffffffff,iStack_4c,local_b8);
  }
  local_45 = '\0';
  local_31 = 5;
  local_f4 = 0;
  if (local_b0 != (short *)0x0) {
    local_f4 = *(int *)(local_b0 + -2);
  }
  local_38 = local_f4;
  if (0 < local_f4) {
    do {
      if (local_b0[(longlong)local_38 + -1] == 0x2e) {
        local_45 = '\x01';
      }
      else {
        iStack_4c = (int)((&DAT_01f9b1cc)[(ulonglong)local_31 * 2] >> 0x20);
        local_50 = (undefined4)(&DAT_01f9b1cc)[(ulonglong)local_31 * 2];
        _local_50 = CONCAT44(iStack_4c + local_44,local_50);
        local_a1 = FUN_01752b60(auStack_178,local_b0[(longlong)local_38 + -1]);
        if (local_45 != '\0') {
          local_a1 = local_a1 | 1;
        }
        FUN_01752b80(auStack_178,local_a1,&local_50);
        local_31 = local_31 - 1;
        local_45 = '\0';
      }
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  if (local_40 == 0xac) {
    FUN_01752f50(auStack_178,*(char *)(param_1 + 0x51) + '\v');
  }
  else if (param_2 == (longlong *)0x0) {
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x100))(local_res18,&local_110);
      (**(code **)(*local_110 + 0x100))(local_110,&local_108,L"interactive");
      cVar2 = FUN_0043fc50(local_108,0);
      if (cVar2 != '\0') goto LAB_01753e2f;
    }
  }
  else {
LAB_01753e2f:
    if ((local_40 != 0xaa) && (local_40 != 0xab)) {
      uVar5 = (uint)*(byte *)(param_1 + 0x51);
      if (uVar5 + 1 < 4) {
        if (uVar5 + 1 == 3) {
          FUN_01752f50(auStack_178,10);
        }
        else if (uVar5 == 0) {
          FUN_01752f50(auStack_178,6);
          FUN_01752f50(auStack_178,8);
        }
        else if (uVar5 == 1) {
          FUN_01752f50(auStack_178,7);
          FUN_01752f50(auStack_178,8);
        }
      }
      else if (uVar5 == 3) {
        FUN_01752f50(auStack_178,6);
        FUN_01752f50(auStack_178,9);
      }
      else if (uVar5 == 4) {
        FUN_01752f50(auStack_178,7);
        FUN_01752f50(auStack_178,9);
      }
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x100))(local_res18,&local_120);
    (**(code **)(*local_120 + 0x100))(local_120,&local_118,L"interactive");
    cVar2 = FUN_0043fc50(local_118,0);
    if (cVar2 == '\0') {
      local_60 = DAT_01f9b22c;
      uVar1 = local_60;
      local_58 = DAT_01f9b234;
      local_60._4_4_ = (undefined4)(DAT_01f9b22c >> 0x20);
      uVar4 = local_60._4_4_;
      local_158 = (wchar_t *)((longlong)&local_60 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      local_60 = uVar1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b22c & 0xffffffff,uVar4,&local_60);
      local_158 = (wchar_t *)((longlong)&local_58 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_58 & 0xffffffff,local_58._4_4_,&local_58);
      local_70 = DAT_01f9b23c;
      uVar1 = local_70;
      local_68 = DAT_01f9b244;
      local_70._4_4_ = (undefined4)(DAT_01f9b23c >> 0x20);
      uVar4 = local_70._4_4_;
      local_158 = (wchar_t *)((longlong)&local_70 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      local_70 = uVar1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b23c & 0xffffffff,uVar4,&local_70);
      local_158 = (wchar_t *)((longlong)&local_68 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_68 & 0xffffffff,local_68._4_4_,&local_68);
      local_80 = DAT_01f9b24c;
      uVar1 = local_80;
      local_78 = DAT_01f9b254;
      local_80._4_4_ = (undefined4)(DAT_01f9b24c >> 0x20);
      uVar4 = local_80._4_4_;
      local_158 = (wchar_t *)((longlong)&local_80 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      local_80 = uVar1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b24c & 0xffffffff,uVar4,&local_80);
      local_158 = (wchar_t *)((longlong)&local_78 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_78 & 0xffffffff,local_78._4_4_,&local_78);
      local_90 = DAT_01f9b25c;
      uVar1 = local_90;
      local_88 = DAT_01f9b264;
      local_90._4_4_ = (undefined4)(DAT_01f9b25c >> 0x20);
      uVar4 = local_90._4_4_;
      local_158 = (wchar_t *)((longlong)&local_90 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      local_90 = uVar1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b25c & 0xffffffff,uVar4,&local_90);
      local_158 = (wchar_t *)((longlong)&local_88 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_88 & 0xffffffff,local_88._4_4_,&local_88);
      local_a0 = DAT_01f9b26c;
      uVar1 = local_a0;
      local_98 = DAT_01f9b274;
      local_a0._4_4_ = (undefined4)(DAT_01f9b26c >> 0x20);
      uVar4 = local_a0._4_4_;
      local_158 = (wchar_t *)((longlong)&local_a0 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148._0_1_ = 1;
      local_a0 = uVar1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),DAT_01f9b26c & 0xffffffff,uVar4,&local_a0);
      local_158 = (wchar_t *)((longlong)&local_98 + 4);
      local_150 = local_150 & 0xffffffffffffff00;
      local_148 = CONCAT31(local_148._1_3_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_98 & 0xffffffff,local_98._4_4_,&local_98);
      local_158._0_4_ = local_60._4_4_;
      local_150._0_4_ = (undefined4)local_58;
      local_148 = local_58._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_60 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*0");
      local_158._0_4_ = local_60._4_4_;
      local_150._0_4_ = (undefined4)local_58;
      local_148 = local_58._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_60 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*3");
      local_158._0_4_ = local_70._4_4_;
      local_150._0_4_ = (undefined4)local_68;
      local_148 = local_68._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_70 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*1");
      local_158._0_4_ = local_70._4_4_;
      local_150._0_4_ = (undefined4)local_68;
      local_148 = local_68._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_70 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*4");
      local_158._0_4_ = local_80._4_4_;
      local_150._0_4_ = (undefined4)local_78;
      local_148 = local_78._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_80 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*0");
      local_158._0_4_ = local_80._4_4_;
      local_150._0_4_ = (undefined4)local_78;
      local_148 = local_78._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_80 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*1");
      local_158._0_4_ = local_90._4_4_;
      local_150._0_4_ = (undefined4)local_88;
      local_148 = local_88._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_90 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*3");
      local_158._0_4_ = local_90._4_4_;
      local_150._0_4_ = (undefined4)local_88;
      local_148 = local_88._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_90 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*4");
      local_158 = (wchar_t *)CONCAT44(local_158._4_4_,local_a0._4_4_);
      local_150 = CONCAT44(local_150._4_4_,(undefined4)local_98);
      local_148 = local_98._4_4_;
      local_140 = 1;
      local_138 = 0x8000;
      local_130 = 0xfffffffe;
      FUN_01243a40(&local_e0,local_res18,local_res20,local_a0 & 0xffffffff);
      (**(code **)(*local_e0 + 0x108))(local_e0,L"showif",L"1:*2");
    }
  }
  if (param_2 != (longlong *)0x0) {
    FUN_01a9fd10(param_2);
  }
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x51);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x53);
LAB_0175467f:
  FUN_0041b800(&local_120);
  FUN_00414480(&local_118);
  FUN_0041b800(&local_110);
  FUN_00414480(&local_108);
  FUN_0041b800(&local_e0);
  FUN_00414480(&local_d0);
  FUN_00414560(&local_b8,2);
  FUN_00414480(local_30);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

