/* Ghidra address: 00ab62f0 */
/* Ghidra symbol: FUN_00ab62f0 */


void FUN_00ab62f0(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_3c;
  bool local_29;
  
  *param_3 = 0;
  *param_4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      if (*(byte *)(param_1 + 0x128) < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                  (*(byte *)(param_1 + 0x128) & 0x1f) & 6U) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          local_58 = 0;
          uVar5 = FUN_00ab6950(param_1,param_2,*(undefined8 *)(param_1 + 0xd8),
                               *(int *)(param_1 + 0x6c) + -1);
          *(undefined8 *)(param_1 + 0xc0) = uVar5;
          *param_4 = *(int *)(param_1 + 0xc0);
        }
        else {
          *param_4 = *(int *)(param_1 + 0xc0);
        }
        if (*param_4 < 0x186a1) {
          iVar3 = *param_4;
        }
        else {
          iVar3 = 100000;
        }
        *param_3 = iVar3;
        return;
      }
    }
    if ((*(int *)(param_1 + 0xb8) < 1) || (*(int *)(*(longlong *)(param_1 + 0xf8) + 0x10) != 0)) {
      FUN_00ab6080(auStack_78,*(undefined8 *)(param_1 + 0xf8));
      FUN_00ab6080(auStack_78,*(undefined8 *)(param_1 + 0x100));
      iVar3 = *param_3;
      local_29 = false;
      lVar2 = *(longlong *)(param_1 + 0xd8);
      lVar6 = FUN_00a716a0(lVar2,8);
      while (lVar6 != 0) {
        local_58 = 0;
        iVar4 = FUN_00ab6230(auStack_78,param_2,lVar2,(lVar6 - lVar2) / 2 & 0xffffffff);
        if (iVar4 < *param_4) {
          iVar4 = *param_4;
        }
        *param_4 = iVar4;
        lVar2 = lVar6 + 2;
        lVar6 = FUN_00a716a0(lVar2,8);
      }
      lVar6 = FUN_00a716a0(lVar2,0);
      local_58 = 1;
      iVar4 = FUN_00ab6230(auStack_78,param_2,lVar2,(lVar6 - lVar2) / 2 & 0xffffffff);
      *param_4 = *param_4 + iVar4;
      puVar7 = *(ushort **)(param_1 + 0xd8);
      if (*(char *)(param_1 + 0xa8) == '\0') {
        for (; *puVar7 == 0x20; puVar7 = puVar7 + 1) {
        }
        local_3c = (int)(((longlong)puVar7 - *(longlong *)(param_1 + 0xd8)) / 2) + 1;
        while (*puVar7 != 0) {
          local_29 = false;
          uVar1 = *puVar7;
          if (uVar1 < 0x21) {
            if ((((uVar1 == 0x20) || (uVar1 == 2)) || (uVar1 == 4)) || (uVar1 == 8)) {
LAB_00ab6659:
              bVar10 = true;
            }
            else {
LAB_00ab665d:
              bVar10 = 0x2fff < uVar1;
            }
          }
          else {
            if (uVar1 != 0x2d) {
              if ((uVar1 == 0x2f) || (uVar1 == 0x3f)) goto LAB_00ab6659;
              goto LAB_00ab665d;
            }
            if ((ushort)(puVar7[1] - 0x30) < 10) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
          }
          puVar9 = puVar7;
          iVar4 = local_3c;
          if ((bVar10) &&
             (*(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)(local_3c + -1)) == '\x01')) {
            puVar9 = puVar7 + 1;
            iVar4 = local_3c + 1;
          }
          else {
            do {
              local_3c = iVar4;
              puVar8 = puVar9;
              puVar9 = puVar8 + 1;
              if ((byte)(*(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)(local_3c + -1)) - 2U)
                  < 2) break;
              uVar1 = *puVar9;
              if (uVar1 == 0) {
                bVar10 = true;
              }
              else {
                if (uVar1 < 0x21) {
                  if ((((uVar1 == 0x20) || (uVar1 == 2)) || (uVar1 == 4)) || (uVar1 == 8)) {
LAB_00ab673f:
                    bVar10 = true;
                  }
                  else {
LAB_00ab6743:
                    bVar10 = 0x2fff < uVar1;
                  }
                }
                else {
                  if (uVar1 != 0x2d) {
                    if ((uVar1 == 0x2f) || (uVar1 == 0x3f)) goto LAB_00ab673f;
                    goto LAB_00ab6743;
                  }
                  if ((ushort)(puVar8[2] - 0x30) < 10) {
                    bVar10 = false;
                  }
                  else {
                    bVar10 = true;
                  }
                }
                if ((bVar10) &&
                   (*(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)local_3c) == '\x01')) {
                  bVar10 = true;
                }
                else {
                  bVar10 = false;
                }
              }
              iVar4 = local_3c + 1;
            } while (!bVar10);
            local_29 = *(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)(local_3c + -1)) ==
                       '\x02';
            uVar1 = *puVar9;
            if (uVar1 == 0x2d) {
              if ((ushort)(puVar8[2] - 0x30) < 10) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
            }
            else if ((uVar1 == 0x2f) || (uVar1 == 0x3f)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            iVar4 = local_3c + 1;
            if (bVar10) {
              puVar9 = puVar8 + 2;
              iVar4 = local_3c + 2;
            }
          }
          local_3c = iVar4;
          local_58 = 1;
          iVar4 = FUN_00ab6230(auStack_78,param_2,puVar7,
                               ((longlong)puVar9 - (longlong)puVar7) / 2 & 0xffffffff);
          if (iVar4 < *param_3) {
            iVar4 = *param_3;
          }
          *param_3 = iVar4;
          for (; (((uVar1 = *puVar9, uVar1 == 2 || (uVar1 == 4)) || (uVar1 == 8)) ||
                 (puVar7 = puVar9, uVar1 == 0x20)); puVar9 = puVar9 + 1) {
            local_3c = local_3c + 1;
          }
        }
      }
      else {
        for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
          local_58 = 1;
          iVar4 = FUN_00ab6230(auStack_78,param_2,puVar7,1);
          if (iVar4 < *param_3) {
            iVar4 = *param_3;
          }
          *param_3 = iVar4;
        }
      }
      if (iVar3 <= *param_3) {
        iVar3 = *param_3;
      }
      *param_3 = iVar3;
      *(int *)(param_1 + 0xb8) = *param_3;
      *(int *)(param_1 + 0xc0) = *param_4;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    else {
      *param_3 = *(int *)(param_1 + 0xb8);
      *param_4 = *(int *)(param_1 + 0xc0);
    }
  }
  return;
}

