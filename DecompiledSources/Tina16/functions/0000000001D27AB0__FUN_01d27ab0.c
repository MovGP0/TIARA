/* Ghidra address: 01d27ab0 */
/* Ghidra symbol: FUN_01d27ab0 */


void FUN_01d27ab0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                 ,int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  undefined1 local_1ff8 [32];
  undefined4 local_1fd8;
  longlong *local_1fc0;
  int local_1fb4;
  longlong local_1fb0;
  int local_1fa4;
  int local_1fa0;
  int local_1f9c;
  undefined1 local_ff8;
  uint auStack_fec [1001];
  int local_48;
  int local_44;
  longlong local_40 [3];
  
  local_ff8 = 0;
  local_1ff8[0] = 0;
  local_40[0] = 0;
  local_1fc0 = param_1;
  local_1fb4 = param_4;
  local_1fb0 = param_2;
  local_1fa0 = param_3;
  FUN_00419260(local_40,&DAT_01d27810,1,(longlong)((param_7 - param_5) + 1));
  iVar7 = 0;
  if (-1 < param_7 - param_5) {
    iVar5 = (param_7 - param_5) + 1;
    do {
      lVar4 = (longlong)iVar7;
      *(undefined4 *)(local_40[0] + lVar4 * 0x18) = 0x7000000;
      *(undefined4 *)(local_40[0] + 4 + lVar4 * 0x18) = 0xf9000000;
      *(undefined4 *)(local_40[0] + 8 + lVar4 * 0x18) = 0x7000000;
      *(undefined4 *)(local_40[0] + 0xc + lVar4 * 0x18) = 0xf9000000;
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = local_1fa0 + -1;
  iVar7 = 1;
  if (0 < iVar5) {
    do {
      local_1fd8 = *(undefined4 *)(local_1fb0 + -4 + (longlong)(iVar7 + 1) * 8);
      FUN_01d278b0(local_1ff8,*(undefined4 *)(local_1fb0 + -8 + (longlong)iVar7 * 8),
                   *(undefined4 *)(local_1fb0 + -4 + (longlong)iVar7 * 8),
                   *(undefined4 *)(local_1fb0 + -8 + (longlong)(iVar7 + 1) * 8));
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_1fb4 == 0) {
    iVar7 = 0;
    if (-1 < param_7 - param_5) {
      iVar5 = (param_7 - param_5) + 1;
      do {
        puVar1 = (undefined4 *)(local_40[0] + (longlong)iVar7 * 0x18);
        puVar1[2] = *puVar1;
        puVar1[3] = puVar1[1];
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    if (2000 < local_1fb4) {
      local_1fb4 = 2000;
    }
    local_1f9c = local_1fb4 / 2;
    iVar7 = (local_1f9c - local_1fb4) + 1;
    iVar5 = iVar7 + local_1f9c;
    local_1fa4 = iVar7;
    if (iVar7 <= local_1f9c) {
      iVar10 = (local_1f9c - iVar7) + 1;
      puVar9 = auStack_fec + iVar7;
      do {
        fVar13 = (float)iVar7 - (float)iVar5 / 2.0;
        fVar13 = ((float)local_1fb4 / 2.0) * ((float)local_1fb4 / 2.0) - fVar13 * fVar13;
        if (0.0 < fVar13) {
          dVar14 = (double)FUN_0040c760((double)fVar13);
          fVar13 = (float)dVar14;
        }
        else {
          fVar13 = 0.0;
        }
        uVar3 = FUN_0040c770((double)fVar13 * 2.0);
        *puVar9 = uVar3;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  iVar7 = 0;
  if ((uint)(param_7 - param_5) < 0x80000000) {
    iVar5 = (param_7 - param_5) + 1;
    do {
      iVar10 = *(int *)(local_40[0] + (longlong)iVar7 * 0x18);
      iVar2 = *(int *)(local_40[0] + 4 + (longlong)iVar7 * 0x18);
      if (iVar10 <= iVar2) {
        local_44 = iVar7 + local_1fa4;
        local_48 = iVar7 + local_1f9c;
        if (iVar7 + local_1fa4 < 0) {
          local_44 = 0;
        }
        if (param_7 - param_5 < iVar7 + local_1f9c) {
          local_48 = param_7 - param_5;
        }
        if (local_44 <= local_48) {
          iVar8 = (local_48 - local_44) + 1;
          iVar12 = local_44;
          do {
            lVar4 = local_40[0] + (longlong)iVar12 * 0x18;
            uVar3 = auStack_fec[iVar12 - iVar7];
            iVar11 = iVar10 - (uVar3 >> 1);
            if (iVar11 < *(int *)(lVar4 + 8)) {
              *(int *)(lVar4 + 8) = iVar11;
            }
            iVar11 = iVar2 + (uVar3 - 1 >> 1);
            if (*(int *)(lVar4 + 0xc) < iVar11) {
              *(int *)(lVar4 + 0xc) = iVar11;
            }
            iVar12 = iVar12 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar7 = 0;
  if ((uint)(param_7 - param_5) < 0x80000000) {
    iVar5 = (param_7 - param_5) + 1;
    do {
      lVar4 = local_40[0] + (longlong)iVar7 * 0x18;
      iVar10 = *(int *)(lVar4 + 8);
      if (*(int *)(lVar4 + 0xc) < iVar10) {
        *(undefined4 *)(lVar4 + 0x10) = 0;
        *(undefined4 *)(lVar4 + 0x14) = 0xffffffff;
      }
      else {
        if (param_6 < iVar10) {
          *(int *)(lVar4 + 0x10) = iVar10;
        }
        else {
          *(int *)(lVar4 + 0x10) = param_6;
        }
        if (*(int *)(lVar4 + 0xc) < param_8) {
          *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar4 + 0xc);
        }
        else {
          *(int *)(lVar4 + 0x14) = param_8;
        }
        if ((0 < iVar7) &&
           (*(int *)(local_40[0] + 0x10 + (longlong)(iVar7 + -1) * 0x18) <=
            *(int *)(local_40[0] + 0x14 + (longlong)(iVar7 + -1) * 0x18))) {
          lVar6 = (longlong)(iVar7 + -1);
          if (*(int *)(local_40[0] + 0x14 + lVar6 * 0x18) + 1 < *(int *)(lVar4 + 0x10)) {
            *(uint *)(lVar4 + 0x10) =
                 *(int *)(lVar4 + 8) + *(int *)(local_40[0] + 0xc + lVar6 * 0x18) + 1U >> 1;
            *(int *)(local_40[0] + 0x14 + lVar6 * 0x18) = *(int *)(lVar4 + 0x10) + -1;
          }
          if (*(int *)(lVar4 + 0x14) < *(int *)(local_40[0] + 0x10 + lVar6 * 0x18) + -1) {
            *(uint *)(lVar4 + 0x14) =
                 (*(int *)(lVar4 + 0xc) + *(int *)(local_40[0] + 8 + lVar6 * 0x18)) - 1U >> 1;
            *(int *)(local_40[0] + 0x10 + lVar6 * 0x18) = *(int *)(lVar4 + 0x14) + 1;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar7 = 0;
  if (-1 < param_7 - param_5) {
    iVar5 = (param_7 - param_5) + 1;
    do {
      lVar4 = local_40[0] + (longlong)iVar7 * 0x18;
      if (*(int *)(lVar4 + 0x10) < param_6) {
        *(int *)(lVar4 + 0x10) = param_6;
      }
      if (param_8 < *(int *)(lVar4 + 0x14)) {
        *(int *)(lVar4 + 0x14) = param_8;
      }
      if (*(int *)(lVar4 + 0x10) <= *(int *)(lVar4 + 0x14)) {
        (**(code **)(*local_1fc0 + 200))(local_1fc0,iVar7 + param_5,*(int *)(lVar4 + 0x10));
        (**(code **)(*local_1fc0 + 0xc0))(local_1fc0,iVar7 + param_5,*(int *)(lVar4 + 0x14) + 1);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00419430(local_40,&DAT_01d27810);
  FUN_00419430(local_40,&DAT_01d27810);
  return;
}

