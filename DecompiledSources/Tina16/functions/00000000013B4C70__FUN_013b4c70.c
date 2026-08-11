/* Ghidra address: 013b4c70 */
/* Ghidra symbol: FUN_013b4c70 */


/* WARNING: Removing unreachable block (ram,0x013b520e) */
/* WARNING: Removing unreachable block (ram,0x013b52d2) */

void FUN_013b4c70(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int local_2c4;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [256];
  undefined8 local_1a8;
  undefined4 local_1a0 [5];
  char local_18c [10];
  char local_182 [10];
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [264];
  undefined8 local_60 [6];
  
  local_2b8 = 0;
  local_2b0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_178 = 0;
  lVar6 = FUN_013b3ad0(param_1,&DAT_013b5410);
  *param_3 = 0;
  *(undefined4 *)(param_2 + 0x238) = 1;
  if (lVar6 != 0) {
    local_1a0[0] = 0x70797403;
    FUN_013b2a90(lVar6,local_1a0,local_60);
    uVar3 = FUN_0040c840(local_60[0]);
    *param_2 = uVar3;
    FUN_013b2a90(lVar6,&DAT_013b541e,local_60);
    *(undefined8 *)(param_2 + 0xd0) = local_60[0];
    FUN_013b2a90(lVar6,&DAT_013b5426,local_60);
    *(undefined8 *)(param_2 + 0xd8) = local_60[0];
    FUN_013b2a90(lVar6,&DAT_013b542e,local_60);
    uVar5 = FUN_0040c840(local_60[0]);
    *(undefined4 *)(param_2 + 0xe0) = uVar5;
    FUN_013b2b90(lVar6,&DAT_013b5437,local_168,0xff);
    FUN_00415020(param_2 + 1,local_168,0x28);
    FUN_013b2b90(lVar6,&DAT_013b543d,local_168,0xff);
    FUN_00415020(param_2 + 0x2a,local_168,0x28);
    FUN_013b2b90(lVar6,&DAT_013b5443,local_168,0xff);
    FUN_00415020(param_2 + 0x53,local_168,0x28);
    FUN_013b2b90(lVar6,&DAT_013b5449,local_168,0xff);
    FUN_00415020(param_2 + 0x7c,local_168,0x28);
    FUN_013b2b90(lVar6,&DAT_013b544f,local_168,0xff);
    FUN_00415020(param_2 + 0xa5,local_168,0x28);
    FUN_013b2b90(lVar6,&DAT_013b5457,local_168,0xff);
    FUN_00415020(param_2 + 0xf4,local_168,0x28);
    FUN_013b2a90(lVar6,&DAT_013b5460,local_60);
    uVar5 = FUN_0040c840(local_60[0]);
    *(undefined4 *)(param_2 + 0xe4) = uVar5;
    FUN_013b2a90(lVar6,&DAT_013b5466,local_60);
    uVar5 = FUN_0040c840(local_60[0]);
    *(undefined4 *)(param_2 + 0xe8) = uVar5;
    FUN_013b2a90(lVar6,&DAT_013b5471,local_60);
    uVar5 = FUN_0040c840(local_60[0]);
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    iVar8 = 10;
    pcVar7 = local_182;
    do {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 10;
    pcVar7 = local_18c;
    do {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_2c4 = 0;
    do {
      if (local_2c4 == 0) {
        FUN_00414b50(&local_178,L"int_limit");
      }
      else {
        FUN_00414b50(&local_178,L"int_subdiv");
      }
      iVar8 = 0;
      pcVar7 = local_182;
      pcVar10 = local_18c;
      do {
        FUN_0043f750(&local_1a8,iVar8);
        FUN_00416ba0(&local_170,local_178,local_1a8);
        if (local_2c4 == 0) {
          FUN_00416910(local_2a8,local_170,0xff);
          cVar4 = FUN_013b27a0(lVar6,local_2a8,0);
          *pcVar7 = cVar4;
        }
        else {
          FUN_00416910(local_2a8,local_170,0xff);
          cVar4 = FUN_013b27a0(lVar6,local_2a8,0);
          *pcVar10 = cVar4;
        }
        iVar8 = iVar8 + 1;
        pcVar10 = pcVar10 + 1;
        pcVar7 = pcVar7 + 1;
      } while (iVar8 != 10);
      local_2c4 = local_2c4 + 1;
    } while (local_2c4 != 2);
    bVar2 = false;
    bVar1 = false;
    iVar8 = 10;
    pcVar7 = local_182;
    do {
      if (*pcVar7 != '\0') {
        bVar2 = true;
      }
      pcVar7 = pcVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 10;
    pcVar7 = local_18c;
    do {
      if (*pcVar7 != '\0') {
        bVar1 = true;
      }
      pcVar7 = pcVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (((bVar2) && (!bVar1)) || ((bool)(bVar1 & !bVar2))) {
      *param_3 = 0x309;
    }
    else if ((bool)(bVar1 & bVar2)) {
      iVar8 = -1;
      iVar9 = -1;
      local_2c4 = 0;
      pcVar7 = local_182;
      do {
        if ((*pcVar7 == '\0') && (iVar8 < 0)) {
          iVar8 = local_2c4;
        }
        if ((*pcVar7 == '\0') && (local_182[local_2c4 + 1] != '\0')) {
          *param_3 = 0x309;
          goto LAB_013b5387;
        }
        local_2c4 = local_2c4 + 1;
        pcVar7 = pcVar7 + 1;
      } while (local_2c4 != 9);
      local_2c4 = 0;
      pcVar7 = local_18c;
      do {
        if ((*pcVar7 == '\0') && (iVar9 < 0)) {
          iVar9 = local_2c4;
        }
        if ((*pcVar7 == '\0') && (local_18c[local_2c4 + 1] != '\0')) {
          *param_3 = 0x309;
          goto LAB_013b5387;
        }
        local_2c4 = local_2c4 + 1;
        pcVar7 = pcVar7 + 1;
      } while (local_2c4 != 9);
      if (iVar8 < iVar9) {
        local_2c4 = 0;
        if (-1 < iVar8) {
          iVar8 = iVar8 + 1;
          pcVar7 = local_182;
          puVar11 = (undefined8 *)(param_2 + 0x120);
          do {
            FUN_00414b50(&local_178,L"int_limit");
            FUN_0043f750(&local_2b0,local_2c4);
            FUN_00416ba0(&local_170,local_178,local_2b0);
            if (*pcVar7 != '\0') {
              FUN_00416910(local_2a8,local_170,0xff);
              FUN_013b2a90(lVar6,local_2a8,local_60);
              *puVar11 = local_60[0];
            }
            local_2c4 = local_2c4 + 1;
            puVar11 = puVar11 + 1;
            pcVar7 = pcVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_2c4 = 0;
        if (-1 < iVar9) {
          iVar8 = iVar9 + 1;
          pcVar7 = local_18c;
          puVar12 = (undefined4 *)(param_2 + 0x210);
          do {
            FUN_00414b50(&local_178,L"int_subdiv");
            FUN_0043f750(&local_2b8,local_2c4);
            FUN_00416ba0(&local_170,local_178,local_2b8);
            if (*pcVar7 != '\0') {
              FUN_00416910(local_2a8,local_170,0xff);
              FUN_013b2a90(lVar6,local_2a8,local_60);
              uVar5 = FUN_0040c840(local_60[0]);
              *puVar12 = uVar5;
            }
            local_2c4 = local_2c4 + 1;
            puVar12 = puVar12 + 1;
            pcVar7 = pcVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        *(int *)(param_2 + 0x238) = iVar9;
      }
      else {
        *param_3 = 0x309;
      }
    }
  }
LAB_013b5387:
  FUN_00414560(&local_2b8,2);
  FUN_00414480(&local_1a8);
  FUN_00414560(&local_178,2);
  return;
}

