/* Ghidra address: 004475e0 */
/* Ghidra symbol: FUN_004475e0 */


void FUN_004475e0(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined8 local_28;
  undefined2 *local_20 [2];
  
  local_20[0] = (undefined2 *)0x0;
  local_28 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 2) = 0;
  **(undefined2 **)(param_1 + 0x30) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3) = 0;
  if (param_2 == 0) goto LAB_004478d7;
  bVar10 = (param_2 & 0x8000000000000000) != 0;
  if (bVar10) {
    param_2 = -param_2;
  }
  FUN_0043f450(&local_28,param_2);
  FUN_00457650(&local_28,local_20);
  if (*(int *)(param_1 + 0x50) < 4) {
    if (*(int *)(param_1 + 0x50) < 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 4;
  }
  if (*(int *)(param_1 + 0x50) < 4) {
    iVar3 = 4 - *(int *)(param_1 + 0x50);
    lVar2 = 0;
    if (local_20[0] != (undefined2 *)0x0) {
      lVar2 = *(longlong *)(local_20[0] + -4);
    }
    if (lVar2 < iVar3) goto LAB_004478d7;
    iVar5 = 0;
    if (local_20[0] != (undefined2 *)0x0) {
      iVar5 = (int)*(undefined8 *)(local_20[0] + -4);
    }
    iVar5 = iVar5 - iVar3;
    uVar1 = local_20[0][iVar5];
    local_20[0][iVar5] = 0x30;
    bVar11 = false;
    while( true ) {
      iVar5 = iVar5 + 1;
      lVar2 = 0;
      if (local_20[0] != (undefined2 *)0x0) {
        lVar2 = *(longlong *)(local_20[0] + -4);
      }
      if (lVar2 <= iVar5) break;
      if (local_20[0][iVar5] != 0x30) {
        bVar11 = true;
        local_20[0][iVar5] = 0x30;
      }
    }
    if (0x34 < uVar1) {
      iVar5 = 0;
      if (local_20[0] != (undefined2 *)0x0) {
        iVar5 = (int)*(undefined8 *)(local_20[0] + -4);
      }
      iVar3 = (iVar5 + -1) - iVar3;
      if ((0x35 < uVar1) || (bVar11)) {
LAB_004477a6:
        for (; (-1 < iVar3 && (local_20[0][iVar3] == 0x39)); iVar3 = iVar3 + -1) {
          local_20[0][iVar3] = 0x30;
        }
        if (iVar3 < 0) {
          lVar2 = 0;
          if (local_20[0] != (undefined2 *)0x0) {
            lVar2 = *(longlong *)(local_20[0] + -4);
          }
          FUN_00419260(local_20,&DAT_004065c0,1,lVar2 + 1);
          lVar2 = 0;
          if (local_20[0] != (undefined2 *)0x0) {
            lVar2 = *(longlong *)(local_20[0] + -4);
          }
          uVar4 = lVar2 - 1;
          if (0 < (int)uVar4) {
            do {
              iVar3 = (int)uVar4;
              local_20[0][iVar3] = local_20[0][iVar3 + -1];
              uVar4 = (ulonglong)(iVar3 - 1U);
            } while (iVar3 - 1U != 0);
          }
          *local_20[0] = 0x31;
        }
        else {
          local_20[0][iVar3] = local_20[0][iVar3] + 1;
        }
      }
      else if (-1 < iVar3) {
        if ((ushort)(local_20[0][iVar3] - 0x30) < 0x10) {
          bVar11 = ((int)CONCAT62((int6)((ulonglong)local_20[0] >> 0x10),1) <<
                    ((byte)(local_20[0][iVar3] - 0x30) & 0x1f) & 0x2aaU) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) goto LAB_004477a6;
      }
    }
  }
  uVar6 = 0;
  if (local_20[0] != (undefined2 *)0x0) {
    uVar6 = (uint)*(undefined8 *)(local_20[0] + -4);
  }
  uVar7 = uVar6;
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 - 1;
    if ((int)uVar7 < 0) break;
  } while (local_20[0][(int)uVar7] == 0x30);
  if (-1 < (int)uVar7) {
    iVar3 = 0;
    if (uVar7 < 0x80000000) {
      puVar9 = (undefined1 *)(*(longlong *)(param_1 + 0x30) + 3);
      uVar7 = uVar8;
      do {
        *puVar9 = *(undefined1 *)(local_20[0] + iVar3);
        iVar3 = iVar3 + 1;
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)(int)uVar8) = 0;
    **(short **)(param_1 + 0x30) = (short)uVar6 + -4;
    *(bool *)(*(longlong *)(param_1 + 0x30) + 2) = bVar10;
  }
LAB_004478d7:
  FUN_00414480(&local_28);
  FUN_00419430(local_20,&DAT_004065c0);
  return;
}

