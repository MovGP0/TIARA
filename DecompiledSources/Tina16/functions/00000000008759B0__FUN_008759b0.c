/* Ghidra address: 008759b0 */
/* Ghidra symbol: FUN_008759b0 */


longlong * FUN_008759b0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  longlong local_60;
  uint auStack_58 [12];
  
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_60 = 0;
  FUN_00414480(param_1);
  FUN_00414b50(&local_60,param_2);
  iVar2 = 0;
  if (local_60 != 0) {
    iVar2 = *(int *)(local_60 + -4);
  }
  if (iVar2 != 0) {
    cVar1 = FUN_00879090(local_60,&DAT_008761cc);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_60,&DAT_008761dc,local_60);
    }
    cVar1 = FUN_00879100(local_60,&DAT_008761cc);
    if (cVar1 != '\0') {
      FUN_00416ad0(&local_60,&DAT_008761dc);
    }
    local_f8 = 0;
    local_f4 = 0;
    iVar2 = 0;
    if (local_60 != 0) {
      iVar2 = *(int *)(local_60 + -4);
    }
    uVar5 = 0;
    local_fc = 1;
    if (0 < iVar2) {
      do {
        uVar5 = (ulonglong)(int)local_fc;
        uVar3 = (ulonglong)*(ushort *)(local_60 + -2 + uVar5 * 2);
        if (uVar3 < 0x3b) {
          if (uVar3 == 0x3a) {
            local_f4 = local_f4 + 1;
            if (7 < (int)local_f4) goto LAB_00876164;
            uVar5 = (ulonglong)local_fc;
            auStack_58[(longlong)(int)local_f4 + 3] = local_fc;
          }
          else if (uVar3 == 0x2e) {
            local_f8 = local_f8 + 1;
            if (3 < (int)local_f8) goto LAB_00876164;
            uVar5 = (ulonglong)local_fc;
            auStack_58[(int)local_f8] = local_fc;
          }
          else if (9 < uVar3 - 0x30) goto LAB_00876164;
        }
        else if (((5 < uVar3 - 0x41) && (5 < uVar3 - 0x61)) || (0 < (int)local_f8))
        goto LAB_00876164;
        local_fc = local_fc + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_f8 < 8) {
      uVar4 = (int)CONCAT71((int7)(uVar5 >> 8),1) << ((byte)local_f8 & 0x1f);
      uVar5 = (ulonglong)uVar4;
      bVar9 = (uVar4 & 9) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      uVar6 = (undefined7)(uVar5 >> 8);
      if (local_f8 == 3) {
        if (local_f4 < 8) {
          bVar9 = ((int)CONCAT71(uVar6,1) << ((byte)local_f4 & 0x1f) & 0x7cU) != 0;
        }
        else {
          bVar9 = false;
        }
        if ((!bVar9) || ((int)auStack_58[1] < (int)auStack_58[(longlong)(int)local_f4 + 3]))
        goto LAB_00876164;
      }
      else {
        if (local_f4 < 8) {
          bVar9 = ((int)CONCAT71(uVar6,1) << ((byte)local_f4 & 0x1f) & 0xfcU) != 0;
        }
        else {
          bVar9 = false;
        }
        if (!bVar9) goto LAB_00876164;
      }
      FUN_00416dc0(&local_78,local_60,1,auStack_58[4] + -1);
      FUN_00416ba0(local_70,&DAT_008761f0,local_78);
      iVar2 = FUN_00877cc0(local_70[0],0xffffffff);
      if ((-1 < iVar2) && (iVar2 < 0x10000)) {
        FUN_0043fba0(&local_80,iVar2,1);
        FUN_00416ba0(param_1,local_80,&DAT_008761cc);
        bVar9 = false;
        local_fc = 2;
        if (1 < (int)local_f4) {
          iVar2 = local_f4 - 1;
          puVar7 = auStack_58 + 5;
          do {
            uVar4 = auStack_58[(longlong)(int)(local_fc + -1) + 3];
            if (uVar4 == *puVar7 - 1) {
              if (bVar9) {
                FUN_00414480(param_1);
                goto LAB_00876164;
              }
              bVar9 = true;
              iVar8 = -local_f4 + 8;
              if (0 < (int)local_f8) {
                iVar8 = -local_f4 + 7;
              }
              if (0 < iVar8) {
                do {
                  FUN_00416ad0(param_1,&LAB_00876200);
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            else {
              FUN_00416dc0(&local_90,local_60,uVar4 + 1,(*puVar7 - uVar4) + -1);
              FUN_00416ba0(&local_88,&DAT_008761f0,local_90);
              iVar8 = FUN_00877cc0(local_88,0xffffffff);
              if ((iVar8 < 0) || (0xffff < iVar8)) {
                FUN_00414480(param_1);
                goto LAB_00876164;
              }
              FUN_0043fba0(&local_98,iVar8,1);
              FUN_00416cd0(param_1,3,*param_1,local_98,&DAT_008761cc);
            }
            local_fc = local_fc + 1;
            puVar7 = puVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (local_f8 == 0) {
          FUN_00416dc0(&local_a8,local_60,auStack_58[(longlong)(int)local_f4 + 3] + 1,0x7fffffff);
          FUN_00416ba0(&local_a0,&DAT_008761f0,local_a8);
          iVar2 = FUN_00877cc0(local_a0,0xffffffff);
          if ((iVar2 < 0) || (0xffff < iVar2)) {
            FUN_00414480(param_1);
            goto LAB_00876164;
          }
          FUN_0043fba0(&local_b0,iVar2,1);
          FUN_00416cd0(param_1,3,*param_1,local_b0,&DAT_008761cc);
        }
        if (0 < (int)local_f8) {
          FUN_00416dc0(&local_b8,local_60,auStack_58[(longlong)(int)local_f4 + 3] + 1,
                       (auStack_58[1] - auStack_58[(longlong)(int)local_f4 + 3]) + -1);
          iVar2 = FUN_00877cc0(local_b8,0xffffffff);
          if ((iVar2 < 0) || (0xff < iVar2)) {
            FUN_00414480(param_1);
            goto LAB_00876164;
          }
          FUN_0043fba0(&local_c0,iVar2,2);
          FUN_00416ad0(param_1,local_c0);
          FUN_00416dc0(&local_c8,local_60,auStack_58[1] + 1,(auStack_58[2] - auStack_58[1]) + -1);
          iVar2 = FUN_00877cc0(local_c8,0xffffffff);
          if ((iVar2 < 0) || (0xff < iVar2)) {
            FUN_00414480(param_1);
            goto LAB_00876164;
          }
          FUN_0043fba0(&local_d0,iVar2,2);
          FUN_00416cd0(param_1,3,*param_1,local_d0,&DAT_008761cc);
          FUN_00416dc0(&local_d8,local_60,auStack_58[2] + 1,(auStack_58[3] - auStack_58[2]) + -1);
          iVar2 = FUN_00877cc0(local_d8,0xffffffff);
          if ((iVar2 < 0) || (0xff < iVar2)) {
            FUN_00414480(param_1);
            goto LAB_00876164;
          }
          FUN_0043fba0(&local_e0,iVar2,2);
          FUN_00416ad0(param_1,local_e0);
          FUN_00416dc0(&local_e8,local_60,auStack_58[3] + 1,3);
          iVar2 = FUN_00877cc0(local_e8,0xffffffff);
          if ((iVar2 < 0) || (0xff < iVar2)) {
            FUN_00414480(param_1);
            goto LAB_00876164;
          }
          FUN_0043fba0(&local_f0,iVar2,2);
          FUN_00416cd0(param_1,3,*param_1,local_f0,&DAT_008761cc);
        }
        iVar2 = 0;
        if (*param_1 != 0) {
          iVar2 = *(int *)(*param_1 + -4);
        }
        FUN_004169f0(param_1,iVar2 + -1);
      }
    }
  }
LAB_00876164:
  FUN_00414560(&local_f0,0x11);
  FUN_00414480(&local_60);
  return param_1;
}

