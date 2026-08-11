/* Ghidra address: 0138ea30 */
/* Ghidra symbol: FUN_0138ea30 */


undefined8 FUN_0138ea30(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_108;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  char local_bc;
  byte local_bb;
  char local_b9;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_e0 = auStack_148;
  local_e8 = 0;
  local_d0 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  puVar2 = auStack_148;
  if (param_2 == 0) goto LAB_0138f918;
  if ((*PTR_DAT_02003720 == '\0') || (puVar2 = auStack_148, *PTR_DAT_02002b78 != '\0')) {
    (**(code **)(**(longlong **)(param_2 + 0x5c0) + 0x90))(*(longlong **)(param_2 + 0x5c0));
    puVar2 = local_e0;
  }
  local_e0 = puVar2;
  cVar3 = FUN_0198a580(param_1);
  if (cVar3 == '\x04') {
    local_7c = FUN_01b07e10(param_2,param_1);
    if (*(int *)(param_2 + 0x2d8) < local_7c) {
      local_70 = *(undefined8 *)(param_2 + 0x5c0);
      puVar2 = local_e0;
      goto LAB_0138f918;
    }
    local_88 = *(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)local_7c * 8);
    (**(code **)(*param_1 + 0x288))(param_1,&local_e8);
    FUN_01ce7d90(&local_d0,local_e8);
    uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
    uVar6 = uVar6 & 0xffff;
    if (uVar6 < 0x23) {
      if (uVar6 == 0x22) {
LAB_0138ed16:
        local_128 = &local_be;
        local_120 = &local_bf;
        FUN_01cfde70(param_1,1,0,&local_bd);
        local_128 = &local_be;
        local_120 = &local_bf;
        pcVar7 = (char *)FUN_01cfde70(param_1,3,0,&local_bd);
        local_b9 = *pcVar7;
        if (local_b9 == '\0') {
          FUN_00414480(&local_48);
          if (local_d0 == 0) {
            FUN_00414b50(&local_48,&DAT_0138fab4);
          }
          else {
            FUN_00414b50(&local_48,local_d0);
          }
          FUN_0138e710(auStack_148,&local_f8,local_48,0);
          local_98 = local_f8;
          local_90 = dStack_f0;
          FUN_00414480(&local_48);
        }
        else {
          FUN_00414480(&local_50);
          if (local_d0 == 0) {
            FUN_00414b50(&local_50,&DAT_0138fab4);
          }
          else {
            FUN_00414b50(&local_50,local_d0);
          }
          local_128 = (undefined1 *)0x0;
          FUN_0138e190(auStack_148,0,local_50,0);
          FUN_00414480(&local_50);
        }
        if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
           (dVar8 = (double)FUN_0040c850(local_98), dVar8 < 1e-10)) {
          local_98 = 0.0;
        }
        FUN_01d04b50(param_1,&local_98);
      }
      else if (uVar6 < 8) {
        if (uVar6 == 7) {
          local_128 = &local_be;
          local_120 = &local_bf;
          FUN_01cfde70(param_1,1,0,&local_bd);
          local_b8 = *(double *)PTR_DAT_020025e0;
          uStack_b0 = *(undefined8 *)(PTR_DAT_020025e0 + 8);
          iVar5 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0));
          iVar5 = iVar5 + -1;
          local_74 = 1;
          if (0 < iVar5) {
            do {
              local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
              local_120._0_4_ = 1;
              local_118 = 2;
              local_110 = 1;
              local_108 = 1;
              FUN_017d13d0(&local_98,param_2,local_74,param_1);
              local_128 = (undefined1 *)CONCAT71(local_128._1_7_,1);
              local_120 = (undefined1 *)CONCAT44(local_120._4_4_,3);
              local_118 = 4;
              local_110 = 1;
              local_108 = 1;
              FUN_017d13d0(&local_a8,param_2,local_74,param_1);
              local_98 = local_98 * 0.5;
              local_90 = -local_90 * 0.5;
              FUN_00c44720(&local_98,&local_a8,&local_98);
              FUN_00c444b0(&local_b8,&local_98,&local_b8);
              local_74 = local_74 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
          local_120._0_4_ = 1;
          local_118 = 2;
          local_110 = 1;
          local_108 = 1;
          FUN_017d13d0(&local_f8,param_2,0,param_1);
          local_98 = local_f8;
          local_128 = (undefined1 *)CONCAT71(local_128._1_7_,1);
          local_120 = (undefined1 *)CONCAT44(local_120._4_4_,3);
          local_118 = 4;
          local_110 = 1;
          local_108 = 1;
          FUN_017d13d0(&local_f8,param_2,0,param_1);
          local_a8 = local_f8;
          FUN_00414480(&local_58);
          if (local_d0 == 0) {
            FUN_00414b50(&local_58,&DAT_0138fac4);
          }
          else {
            FUN_00414b50(&local_58,local_d0);
          }
          local_128 = (undefined1 *)0x0;
          FUN_0138e190(auStack_148,local_98 * local_a8 + local_b8,local_58,0);
          FUN_00414480(&local_58);
        }
        else if (uVar6 - 4 < 2) {
LAB_0138ec2a:
          local_128 = &local_be;
          local_120 = &local_bf;
          FUN_01cfde70(param_1,1,0,&local_bd);
          FUN_00414480(local_40);
          if (local_d0 == 0) {
            FUN_00414b50(local_40,&DAT_0138faa4);
          }
          else {
            FUN_00414b50(local_40,local_d0);
          }
          FUN_0138e710(auStack_148,&local_f8,local_40[0],1);
          local_98 = local_f8;
          local_90 = dStack_f0;
          FUN_00414480(local_40);
          if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
             (dVar8 = (double)FUN_0040c850(local_98), dVar8 < 1e-10)) {
            local_98 = 0.0;
          }
          FUN_01d04b50(param_1,&local_98);
        }
        else if (uVar6 - 4 == 2) goto LAB_0138ed16;
      }
      else {
        if (uVar6 == 8) goto LAB_0138f13b;
        if (uVar6 == 0x21) goto LAB_0138ec2a;
      }
    }
    else if (uVar6 == 0x3f) {
LAB_0138f3e6:
      local_128 = &local_be;
      local_120 = &local_bf;
      pcVar7 = (char *)FUN_01cfde70(param_1,2,0,&local_bd);
      local_bb = *pcVar7 + 1;
      if (local_bb < 4) {
        if (local_bb == 3) {
          local_128 = &local_be;
          local_120 = &local_bf;
          local_c8 = FUN_01b05ad0(local_88,1,0,&local_bd);
          FUN_01d350f0(*(undefined8 *)(param_2 + 0x4c0),local_c8,&local_74);
          sVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar4 == 0x3f) {
            local_128 = (undefined1 *)((ulonglong)local_128._1_7_ << 8);
            local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
            local_118 = 2;
            local_110 = 2;
            local_108 = 1;
            FUN_017d13d0(&local_98,param_2,local_74,param_1);
          }
          else {
            local_128 = (undefined1 *)((ulonglong)local_128._1_7_ << 8);
            local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
            local_118 = 2;
            local_110 = 1;
            local_108 = 1;
            FUN_017d13d0(&local_98,param_2,local_74,param_1);
          }
          dVar8 = (double)FUN_00c44590(&local_98);
          if (dVar8 == 0.0) {
            local_98 = 1e+50;
          }
          else {
            FUN_00c44790(PTR_DAT_02003900,&local_98,&local_98);
            FUN_00c44500(&local_98,PTR_DAT_02002618,&local_98);
            local_98 = (double)FUN_00c44590(&local_98);
          }
          FUN_01d04b50(param_1,&local_98);
        }
        else {
          if (local_bb == 1) goto LAB_0138f474;
          if (local_bb == 2) goto LAB_0138f696;
        }
      }
      else if (local_bb == 4) {
LAB_0138f474:
        local_128 = (undefined1 *)CONCAT71(local_128._1_7_,local_bb == 1);
        local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
        local_118 = 2;
        local_110 = 1;
        local_108 = 1;
        FUN_017d13d0(&local_f8,param_2,0,param_1);
        local_98 = local_f8;
        if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
           (dVar8 = (double)FUN_0040c850(local_f8), dVar8 < 1e-10)) {
          local_98 = 0.0;
        }
        FUN_01d04b50(param_1,&local_98);
      }
      else if (local_bb == 5) {
LAB_0138f696:
        local_128 = &local_be;
        local_120 = &local_bf;
        pcVar7 = (char *)FUN_01cfde70(param_1,3,0,&local_bd);
        bVar1 = local_bb;
        local_bc = *pcVar7;
        local_128 = (undefined1 *)CONCAT44(local_128._4_4_,1);
        local_120._0_4_ = 2;
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = 1;
        dVar8 = (double)FUN_01397060(param_2,param_1,local_bb == 2,local_bc == '\0');
        local_128 = (undefined1 *)CONCAT71(local_128._1_7_,bVar1 == 2);
        local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
        local_118 = 2;
        local_110 = 1;
        local_108 = 1;
        local_98 = dVar8;
        FUN_017d13d0(&local_f8,param_2,0,param_1);
        local_98 = (double)FUN_0040c760(dVar8 * dVar8 - local_f8 * local_f8);
        if ((*(char *)(param_2 + 0x12f3) == '\x01') &&
           (dVar8 = (double)FUN_0040c850(local_98), dVar8 < 1e-10)) {
          local_98 = 0.0;
        }
        FUN_01d04b50(param_1,&local_98);
      }
    }
    else if (uVar6 == 0x62) {
LAB_0138f13b:
      local_128 = &local_be;
      local_120 = &local_bf;
      FUN_01cfde70(param_1,2,0,&local_bd);
      local_128 = &local_be;
      local_120 = &local_bf;
      pcVar7 = (char *)FUN_01cfde70(param_1,4,0,&local_bd);
      local_b9 = *pcVar7;
      if (local_b9 == '\0') {
        local_128 = &local_be;
        local_120 = &local_bf;
        local_c8 = FUN_01b05ad0(local_88,1,0,&local_bd);
        FUN_01d350f0(*(undefined8 *)(param_2 + 0x4c0),local_c8,&local_74);
        local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
        local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
        local_118 = 2;
        local_110 = 1;
        local_108 = 1;
        FUN_017d13d0(&local_98,param_2,local_74,param_1);
        dVar8 = (double)FUN_00c44590(&local_98);
        if (dVar8 == 0.0) {
          local_a8 = 1e+50;
          local_a0 = 0.0;
        }
        else {
          FUN_00c44790(PTR_DAT_02003900,&local_98,&local_98);
          FUN_00c44500(&local_98,PTR_DAT_02002618,&local_98);
          local_a8 = (double)FUN_00c44590(&local_98);
          local_a0 = (double)FUN_00c445d0(&local_98);
          local_a0 = local_a0 * 57.29577951308232;
        }
        FUN_00414480(&local_60);
        if (local_d0 == 0) {
          FUN_00414b50(&local_60,&DAT_0138fad4);
        }
        else {
          FUN_00414b50(&local_60,local_d0);
        }
        local_128 = &LAB_0138fae8;
        FUN_0138e190(auStack_148,local_a8,local_60,local_a0);
        FUN_00414480(&local_60);
        FUN_01d04b50(param_1,&local_98);
      }
      else {
        FUN_00414480(&local_68);
        if (local_d0 == 0) {
          FUN_00414b50(&local_68,&DAT_0138fad4);
        }
        else {
          FUN_00414b50(&local_68,local_d0);
        }
        local_128 = (undefined1 *)0x0;
        FUN_0138e190(auStack_148,0,local_68,0);
        FUN_00414480(&local_68);
      }
    }
    else {
      if (uVar6 == 0x6a) goto LAB_0138f3e6;
      if (uVar6 == 0x77) goto LAB_0138ec2a;
    }
  }
  else {
    local_74 = (**(code **)(*param_1 + 0x210))(param_1,0);
    local_78 = (**(code **)(*param_1 + 0x210))(param_1,1);
    cVar3 = FUN_017d1390(*(undefined8 *)(param_2 + 0x4c0));
    if ((cVar3 == '\0') && (iVar5 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar5 == 2)) {
      local_128 = (undefined1 *)CONCAT44(local_128._4_4_,local_78);
      FUN_017d1750(&local_98,*(undefined8 *)(param_2 + 0x4c0),1,local_74);
      uVar9 = FUN_00c44590(&local_98);
      *(undefined8 *)PTR_DAT_02005980 = uVar9;
      dVar8 = (double)FUN_00c445d0(&local_98);
      *(double *)(PTR_DAT_02005980 + 8) = dVar8 * 57.29577951308232;
    }
    else {
      local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
      uVar9 = FUN_017d17e0(*(undefined8 *)(param_2 + 0x4c0),local_74,local_78,1);
      *(undefined8 *)PTR_DAT_02005980 = uVar9;
      *(undefined8 *)(PTR_DAT_02005980 + 8) = 0;
    }
  }
  local_70 = *(undefined8 *)(param_2 + 0x5c0);
  puVar2 = local_e0;
LAB_0138f918:
  local_e0 = puVar2;
  FUN_00414480(&local_e8);
  FUN_00414480(&local_d0);
  FUN_00414560(&local_68,6);
  return local_70;
}

