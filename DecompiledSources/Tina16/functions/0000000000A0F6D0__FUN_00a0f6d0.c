/* Ghidra address: 00a0f6d0 */
/* Ghidra symbol: FUN_00a0f6d0 */


undefined8 FUN_00a0f6d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  longlong local_40;
  
  lVar3 = *(longlong *)(param_1 + 0x250);
  bVar2 = *(byte *)(param_1 + 0x218);
  if ((*(int *)(param_1 + 0x170) != 0) && (*(int *)(lVar3 + 0x34) == 0)) {
    lVar8 = *(longlong *)(param_1 + 0x248);
    piVar1 = (int *)(lVar8 + 0x24);
    *piVar1 = *piVar1 + ((int)(((uint)(*(int *)(lVar3 + 0x1c) >> 0x1f) >> 0x1d) +
                              *(int *)(lVar3 + 0x1c)) >> 3);
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    iVar5 = (**(code **)(lVar8 + 0x10))(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x24 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  local_58 = *puVar6;
  uStack_54 = puVar6[1];
  uStack_50 = puVar6[2];
  uStack_4c = puVar6[3];
  uVar7 = *(uint *)(lVar3 + 0x18);
  uVar9 = *(uint *)(lVar3 + 0x1c);
  if (0 < *(int *)(param_1 + 0x1e0)) {
    lVar8 = 0;
    local_40 = param_1;
    do {
      puVar4 = *(ushort **)(param_2 + lVar8 * 8);
      if (((int)uVar9 < 1) &&
         (iVar5 = FUN_00a10240(&local_58,uVar7,uVar9,1), uVar9 = local_44, uVar7 = local_48,
         iVar5 == 0)) {
        return 0;
      }
      uVar9 = uVar9 - 1;
      if ((uVar7 >> (uVar9 & 0x1f) & 1) != 0) {
        *puVar4 = *puVar4 | (ushort)(1 << (bVar2 & 0x1f));
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x1e0));
    puVar6 = *(undefined4 **)(param_1 + 0x28);
  }
  *puVar6 = local_58;
  puVar6[1] = uStack_54;
  puVar6[2] = uStack_50;
  puVar6[3] = uStack_4c;
  *(uint *)(lVar3 + 0x18) = uVar7;
  *(uint *)(lVar3 + 0x1c) = uVar9;
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
  return 1;
}

