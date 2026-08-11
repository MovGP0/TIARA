/* Ghidra address: 00be7bd0 */
/* Ghidra symbol: FUN_00be7bd0 */


void FUN_00be7bd0(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  bool bVar12;
  int local_60;
  int local_5c;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_50[0] = 0;
  local_40[0] = 0;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4e8);
  iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if ((iVar5 == 0) || (*(short *)(param_1 + 0x42) == 0)) {
    FUN_00be8000(param_1);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4e8);
    uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_00be7160(param_1,uVar6);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4e8);
    uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_00be71a0(param_1,uVar6);
    local_60 = 0;
    iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4e8) + 0x28))();
    local_5c = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_00bcf900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x4e8),local_40,local_5c);
        FUN_00bf6d50(*(undefined8 *)(param_1 + 0x38),local_50,local_40[0]);
        FUN_00414b50(local_40,local_50[0]);
        iVar7 = 0;
        if (local_40[0] != 0) {
          iVar7 = *(int *)(local_40[0] + -4);
        }
        FUN_00be71a0(param_1,local_60 + (iVar7 + -1) / (int)(uint)*(ushort *)(param_1 + 0x40) + 1);
        puVar8 = (ushort *)FUN_00416740(local_40[0]);
        puVar11 = puVar8 + *(ushort *)(param_1 + 0x42);
        iVar7 = 0;
        if (local_40[0] != 0) {
          iVar7 = *(int *)(local_40[0] + -4);
        }
        puVar1 = puVar8 + iVar7;
        while (puVar11 < puVar1) {
          if (DAT_01e9cd3c == '\0') {
            bVar12 = false;
          }
          else {
            uVar2 = *puVar11;
            if (uVar2 < 0x100) {
              bVar12 = ((byte)(&DAT_00be7fb8)[(longlong)(ulonglong)uVar2 >> 3] >>
                        ((ulonglong)uVar2 & 7) & 1) != 0;
            }
            else {
              bVar12 = false;
            }
          }
          puVar9 = puVar11;
          if (bVar12) {
            do {
              puVar9 = puVar9 + 1;
              uVar2 = *puVar9;
              if (uVar2 < 0x100) {
                bVar12 = ((byte)(&DAT_00be7fb8)[(longlong)(ulonglong)uVar2 >> 3] >>
                          ((ulonglong)uVar2 & 7) & 1) != 0;
              }
              else {
                bVar12 = false;
              }
            } while (bVar12);
          }
          else {
            uVar2 = *(ushort *)(param_1 + 0x40);
            puVar10 = puVar11;
            while ((puVar9 = puVar11, puVar8 + uVar2 < puVar10 &&
                   (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x370))
                                      (*(longlong **)(param_1 + 0x38),*puVar10), puVar9 = puVar10,
                   cVar4 == '\0'))) {
              puVar10 = puVar10 + -1;
            }
          }
          puVar10 = puVar9;
          if ((DAT_01e9cd3c != '\0') && (0xffff < ((longlong)puVar9 - (longlong)puVar8) / 2)) {
            puVar9 = puVar8 + 0xffff;
            puVar11 = puVar9 + -(longlong)
                                (int)(0xffff % (longlong)
                                               *(int *)(*(longlong *)(param_1 + 0x38) + 0x618));
            for (; (puVar10 = puVar9, *puVar9 == 9 && (puVar11 < puVar9)); puVar9 = puVar9 + -1) {
            }
          }
          do {
            puVar11 = puVar9;
            if (puVar11 <= puVar8) break;
            puVar10 = puVar11;
            puVar9 = puVar11 + -1;
          } while (puVar11[-1] == 0xe000);
          *(short *)(*(longlong *)(param_1 + 0x20) + (longlong)local_60 * 2) =
               (short)(((longlong)puVar10 - (longlong)puVar8) / 2);
          local_60 = local_60 + 1;
          puVar8 = puVar10;
          puVar11 = puVar10 + *(ushort *)(param_1 + 0x42);
        }
        if (puVar8 < puVar1) {
          bVar12 = true;
        }
        else {
          iVar7 = 0;
          if (local_40[0] != 0) {
            iVar7 = *(int *)(local_40[0] + -4);
          }
          bVar12 = iVar7 == 0;
        }
        if (bVar12) {
          *(short *)(*(longlong *)(param_1 + 0x20) + (longlong)local_60 * 2) =
               (short)(((longlong)puVar1 - (longlong)puVar8) / 2);
          local_60 = local_60 + 1;
        }
        *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_5c * 4) = local_60;
        local_5c = local_5c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4e8);
    uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
    *(undefined4 *)(param_1 + 0x30) = uVar6;
  }
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

