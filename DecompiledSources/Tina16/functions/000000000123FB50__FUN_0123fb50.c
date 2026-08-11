/* Ghidra address: 0123fb50 */
/* Ghidra symbol: FUN_0123fb50 */


void FUN_0123fb50(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110 [2];
  undefined1 local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f0 [8];
  double local_e8;
  double local_e0;
  double local_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  uint local_3c;
  undefined4 uStack_38;
  int local_34;
  uint local_30;
  undefined4 uStack_2c;
  
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_110[0] = 0;
  local_118 = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_00417580(local_f0,&DAT_0115d530);
  lVar2 = *(longlong *)(param_1 + 0x600);
  if ((*(short *)(lVar2 + 0x1fa4) == 0x50) || (*(short *)(lVar2 + 0x1fa4) == 0x53)) {
    iVar3 = *(int *)(lVar2 + 0x1fa0) / 2;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x1fa0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_b8 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x1fc0);
  FUN_0043f750(&local_118,0);
  FUN_00416ba0(local_110,&DAT_01240494,local_118);
  uVar6 = 0;
  dVar9 = local_b8;
  FUN_0123f7f0(param_1,9,local_110[0],0x40,0x38,0,local_b8);
  *(undefined4 *)(param_1 + 0x9c) = 0x40;
  *(undefined4 *)(param_1 + 0xa0) = 0x38;
  FUN_0198d580(*(undefined8 *)(param_1 + 0x50),local_100,0,0,uVar6 & 0xffffff00,0,
               (ulonglong)dVar9 & 0xffffffffffffff00,0,*PTR_DAT_02005310,0x1c7);
  local_14c = FUN_0123b3f0(local_f8);
  iVar4 = FUN_0123b3f0(local_fc);
  local_150 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_154 = local_150;
      lVar2 = *(longlong *)(param_1 + 0x600);
      if (*(short *)(lVar2 + 0x1fa4) == 0x4c) {
        local_e8 = (*(double *)
                     (*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)(local_150 / 2) * 8) *
                   *(double *)(lVar2 + 0x1fc0)) / *(double *)(lVar2 + 0x20);
        local_e0 = (*(double *)
                     (*(longlong *)(param_1 + 0x20) + 0x978 + (longlong)(local_150 / 2) * 8) /
                   *(double *)(lVar2 + 0x1fc0)) / *(double *)(*(longlong *)(param_1 + 0x600) + 0x20)
        ;
        FUN_00419260(param_1 + 0x5e0,&DAT_0123a208,1,(longlong)(local_150 + 10));
        FUN_00419260(param_1 + 0x5e8,&DAT_0123a208,1,(longlong)(local_150 + 10));
        if (local_150 % 2 == 0) {
          iVar5 = local_14c + -8;
          uVar7 = iVar4 + 0x10;
          FUN_0043f750(&local_128,local_150);
          FUN_00416ba0(&local_120,&DAT_012404a4,local_128);
          uVar6 = uVar7;
          dVar9 = local_e8;
          FUN_0123f7f0(param_1,0xb,local_120,iVar5,uVar7,0,local_e8);
          local_40 = local_14c + 0x20;
          local_3c = uVar7;
          local_34 = iVar5;
          local_30 = uVar7;
          if (0 < local_150) {
            puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
            *puVar1 = CONCAT44(uVar7,iVar5);
            *(undefined4 *)(puVar1 + 1) = uStack_2c;
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            uStack_68 = uStack_44;
            local_70 = CONCAT44(uVar7,local_4c);
            puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
            *puVar1 = local_70;
            *(undefined4 *)(puVar1 + 1) = uStack_44;
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            FUN_0123fa60(param_1);
            *(undefined4 *)(param_1 + 0x70) = 0;
          }
          local_70 = CONCAT44(local_3c,local_40);
          uStack_68 = uStack_38;
          puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
          *puVar1 = local_70;
          *(undefined4 *)(puVar1 + 1) = uStack_38;
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        }
        else {
          local_14c = local_14c + 8;
          iVar5 = iVar4 + 0x18;
          FUN_0043f750(&local_138,local_150);
          FUN_00416ba0(&local_130,&LAB_012404b4,local_138);
          FUN_0123f7f0(param_1,10,local_130,local_14c,iVar5,3,local_e0);
          uVar6 = iVar4 + 0x40;
          dVar9 = 0.0;
          FUN_0123f7f0(param_1,2,0,local_14c,uVar6,0,0);
          local_70 = CONCAT44(local_30,local_14c);
          puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
          *puVar1 = local_70;
          *(undefined4 *)(puVar1 + 1) = uStack_68;
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          local_70 = CONCAT44(iVar5,local_14c);
          uStack_68 = uStack_44;
          puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
          *puVar1 = local_70;
          *(undefined4 *)(puVar1 + 1) = uStack_44;
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          local_4c = local_14c;
          local_48 = iVar5;
        }
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x5e0) + (longlong)local_150 * 0xc);
        *puVar1 = CONCAT44(local_3c,local_40);
        *(undefined4 *)(puVar1 + 1) = uStack_38;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x5e8) + (longlong)local_150 * 0xc);
        *puVar1 = CONCAT44(local_48,local_4c);
        *(undefined4 *)(puVar1 + 1) = uStack_44;
        if ((local_150 % 2 == 1) && (0 < local_150)) {
          FUN_0123fa60(param_1);
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
        FUN_0198d580(*(undefined8 *)(param_1 + 0x50),local_100,0,0,uVar6 & 0xffffff00,0,
                     (ulonglong)dVar9 & 0xffffffffffffff00,0,*PTR_DAT_02005310,0x1c7);
        local_14c = FUN_0123b3f0(local_f8);
        iVar4 = FUN_0123b3f0(local_fc);
      }
      local_150 = local_150 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_b8 = *(double *)(*(longlong *)(param_1 + 0x20) + 0x12e0) *
             *(double *)(*(longlong *)(param_1 + 0x600) + 0x1fc0);
  iVar5 = local_14c + 8;
  iVar8 = iVar4 + 0x18;
  FUN_0043f750(&local_148,local_154);
  FUN_00416ba0(&local_140,&DAT_01240494,local_148);
  FUN_0123f7f0(param_1,9,local_140,iVar5,iVar8,3,local_b8);
  FUN_0123f7f0(param_1,2,0,iVar5,iVar4 + 0x40,0,0);
  uStack_5c = uStack_44;
  iVar3 = local_48 + -8;
  local_64 = CONCAT44(iVar3,local_4c);
  puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
  *puVar1 = local_64;
  *(undefined4 *)(puVar1 + 1) = uStack_44;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  local_70 = CONCAT44(iVar3,iVar5);
  puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
  *puVar1 = local_70;
  *(undefined4 *)(puVar1 + 1) = uStack_44;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  *(undefined8 *)(param_1 + 0xfc) = local_70;
  *(undefined4 *)(param_1 + 0x104) = uStack_44;
  local_70 = CONCAT44(iVar8,iVar5);
  uStack_68 = uStack_44;
  puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
  *puVar1 = local_70;
  *(undefined4 *)(puVar1 + 1) = uStack_44;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  local_4c = iVar5;
  local_48 = iVar8;
  FUN_0123fa60(param_1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_70 = CONCAT44(iVar3,iVar5);
  *(undefined8 *)(param_1 + 0x120) = local_70;
  *(undefined4 *)(param_1 + 0x128) = uStack_68;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  local_70 = CONCAT44(iVar3,local_14c + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x120 + (longlong)*(int *)(param_1 + 0x70) * 0xc);
  *puVar1 = local_70;
  *(undefined4 *)(puVar1 + 1) = uStack_68;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  *(undefined8 *)(param_1 + 0xfc) = local_70;
  *(undefined4 *)(param_1 + 0x104) = uStack_68;
  FUN_0123fa60(param_1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_00414560(&local_148,8);
  FUN_00417740(local_f0,&DAT_0115d530);
  FUN_00414560(&local_90,2);
  return;
}

