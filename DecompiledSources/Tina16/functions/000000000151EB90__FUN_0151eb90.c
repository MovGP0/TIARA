/* Ghidra address: 0151eb90 */
/* Ghidra symbol: FUN_0151eb90 */


void FUN_0151eb90(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  short sVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_4c;
  int local_48;
  byte local_41;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar13 = 0xffffffff;
  plVar1 = *(longlong **)(param_1 + 0xc00);
  local_58 = param_1;
  iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (-1 < iVar4) {
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar8 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar5);
    lVar9 = FUN_004113f0(uVar8,&PTR_FUN_01106460);
    (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x10))
              (*(longlong **)(lVar9 + 0x48),*(undefined8 *)(*(longlong *)(local_58 + 0xd70) + 0x4f0)
              );
  }
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(local_58 + 0xc00) + 0x4f0) + 0x28))();
  local_50 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_58 + 0xc00) + 0x4f0);
      uVar8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
      lVar9 = FUN_004113f0(uVar8,&PTR_FUN_01106460);
      iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x28))(*(longlong **)(lVar9 + 0x48));
      uVar7 = FUN_00b905e0(uVar13,iVar6 + -2);
      uVar13 = (ulonglong)uVar7;
      local_50 = local_50 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar7 = (uint)uVar13;
  local_38 = FUN_00409570((longlong)(int)((uVar7 + 1) * (uint)*(byte *)(local_58 + 0xc0a)));
  local_4c = 0;
  if (uVar7 < 0x80000000) {
    iVar4 = uVar7 + 1;
    do {
      uVar7 = (uint)*(byte *)(local_58 + 0xc0a);
      local_48 = 0;
      if (-1 < (int)(uVar7 - 1)) {
        do {
          *(undefined1 *)(local_38 + (int)(local_4c * *(byte *)(local_58 + 0xc0a) + local_48)) = 2;
          local_48 = local_48 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      local_4c = local_4c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_4c = 0;
  do {
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(local_58 + 0xc00) + 0x4f0) + 0x28))();
    local_50 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_58 + 0xc00) + 0x4f0);
        uVar8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_50);
        lVar9 = FUN_004113f0(uVar8,&PTR_FUN_01106460);
        iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x28))(*(longlong **)(lVar9 + 0x48));
        if ((int)local_4c <= iVar6 + -2) {
          if ((int)uVar13 < (int)local_4c) {
            uVar13 = (ulonglong)local_4c;
            FUN_0151eb70(auStack_78,&local_38,local_4c + 1,*(undefined1 *)(local_58 + 0xc0a));
            uVar7 = (uint)*(byte *)(local_58 + 0xc0a);
            local_48 = 0;
            if (-1 < (int)(uVar7 - 1)) {
              do {
                *(undefined1 *)(local_38 + (int)(local_4c * *(byte *)(local_58 + 0xc0a) + local_48))
                     = 2;
                local_48 = local_48 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          (**(code **)(**(longlong **)(lVar9 + 0x48) + 0x18))
                    (*(longlong **)(lVar9 + 0x48),&local_30,local_4c);
          uVar5 = FUN_004170c0(&DAT_0151f114,local_30,1);
          FUN_00416e20(&local_30,1,uVar5);
          uVar5 = FUN_004170c0(&DAT_0151f124,local_30,1);
          FUN_00416e20(&local_30,uVar5);
          uVar7 = 0;
          if (local_30 != 0) {
            uVar7 = *(uint *)(local_30 + -4);
          }
          local_41 = (*(char *)(lVar9 + 0x40) - *(char *)(lVar9 + 0x3c)) + 1;
          if (uVar7 != local_41) {
            if ((int)uVar7 < (int)(uint)local_41) {
              local_48 = uVar7 + 1;
              if (local_48 <= (int)(uint)local_41) {
                iVar6 = ((uint)local_41 - local_48) + 1;
                do {
                  FUN_00416780(&local_40,*(undefined2 *)(PTR_DAT_020025a0 + 4));
                  FUN_00416ea0(local_40,&local_30);
                  local_48 = local_48 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
            }
            else {
              FUN_00416e20(&local_30,local_41 + 1);
            }
          }
          local_48 = 1;
          psVar11 = (short *)PTR_DAT_020025a0;
          for (uVar7 = (uint)local_41; PTR_DAT_020025a0 = (undefined *)psVar11, uVar7 != 0;
              uVar7 = uVar7 - 1) {
            bVar2 = false;
            sVar12 = *(short *)(local_30 + -2 + (longlong)local_48 * 2);
            if ((ushort)(sVar12 - 0x60U) < 0x20) {
              bVar14 = (1 << ((byte)(sVar12 - 0x60U) & 0x1f) & 0x7fffffeU) != 0;
            }
            else {
              bVar14 = false;
            }
            if (bVar14) {
              sVar12 = sVar12 + -0x20;
            }
            cVar3 = '\0';
            do {
              if (sVar12 == *psVar11) {
                bVar2 = true;
                *(char *)(local_38 +
                         (int)(local_4c * *(byte *)(local_58 + 0xc0a) + *(int *)(lVar9 + 0x3c) +
                               local_48 + -1)) = cVar3;
              }
              cVar3 = cVar3 + '\x01';
              psVar11 = psVar11 + 1;
            } while (cVar3 != '\x06');
            if (!bVar2) {
              *(undefined1 *)
               (local_38 +
               (int)(local_4c * *(byte *)(local_58 + 0xc0a) + *(int *)(lVar9 + 0x3c) + local_48 + -1
                    )) = 2;
              lVar10 = FUN_00414de0(&local_30);
              *(undefined2 *)(lVar10 + -2 + (longlong)local_48 * 2) = 0x3f;
            }
            local_48 = local_48 + 1;
            psVar11 = (short *)PTR_DAT_020025a0;
          }
        }
        local_50 = local_50 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_4c = local_4c + 1;
  } while (local_4c != 0x10);
  (**(code **)(**(longlong **)(local_58 + 0xec8) + 0xd0))
            (*(longlong **)(local_58 + 0xec8),CONCAT71((int7)(uVar13 >> 8),(char)uVar13 + '\x01'),
             local_38);
  FUN_00414480(&local_40);
  FUN_00414480(&local_30);
  return;
}

