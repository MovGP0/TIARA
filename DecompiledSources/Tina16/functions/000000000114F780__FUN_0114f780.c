/* Ghidra address: 0114f780 */
/* Ghidra symbol: FUN_0114f780 */


void FUN_0114f780(undefined8 param_1,longlong param_2,ushort param_3,ushort param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  ushort local_4a;
  ushort local_3a;
  
  dVar12 = (double)FUN_0040c2f0((double)param_4);
  dVar13 = (double)FUN_0040c2f0(0x4000000000000000);
  iVar5 = FUN_0040c770(dVar12 / dVar13);
  lVar6 = FUN_00409570();
  iVar7 = 0;
  local_4a = param_4;
  local_3a = param_3;
  do {
    bVar4 = true;
    uVar9 = (ulonglong)local_3a;
    uVar11 = (ulonglong)local_4a;
    uVar2 = *(ushort *)(param_2 + -2 + ((ulonglong)((uint)local_3a + (uint)local_4a) / 2) * 2);
    if (local_3a != local_4a) {
      do {
        while (uVar8 = (ushort)uVar9, *(ushort *)(param_2 + -2 + uVar9 * 2) < uVar2) {
          uVar9 = (ulonglong)(ushort)(uVar8 + 1);
        }
        while (uVar10 = (ushort)uVar11, uVar2 < *(ushort *)(param_2 + -2 + uVar11 * 2)) {
          uVar11 = (ulonglong)(ushort)(uVar10 - 1);
        }
        if (uVar8 <= uVar10) {
          if (uVar8 != uVar10) {
            uVar3 = *(undefined2 *)(param_2 + -2 + uVar9 * 2);
            *(undefined2 *)(param_2 + -2 + uVar9 * 2) = *(undefined2 *)(param_2 + -2 + uVar11 * 2);
            *(undefined2 *)(param_2 + -2 + uVar11 * 2) = uVar3;
          }
          uVar9 = (ulonglong)(ushort)(uVar8 + 1);
          uVar11 = (ulonglong)(ushort)(uVar10 - 1);
        }
        uVar10 = (ushort)uVar11;
        uVar8 = (ushort)uVar9;
      } while (uVar8 <= uVar10);
      if (local_3a < uVar10) {
        if (uVar8 != local_4a) {
          iVar7 = iVar7 + 1;
          puVar1 = (ushort *)(lVar6 + -4 + (longlong)iVar7 * 4);
          *puVar1 = uVar8;
          puVar1[1] = local_4a;
        }
        bVar4 = false;
        local_4a = uVar10;
      }
      if (uVar8 < local_4a) {
        if (local_3a != uVar10) {
          iVar7 = iVar7 + 1;
          puVar1 = (ushort *)(lVar6 + -4 + (longlong)iVar7 * 4);
          *puVar1 = local_3a;
          puVar1[1] = uVar10;
        }
        bVar4 = false;
        local_3a = uVar8;
      }
    }
    if (bVar4) {
      if (0 < iVar7) {
        puVar1 = (ushort *)(lVar6 + -4 + (longlong)iVar7 * 4);
        local_3a = *puVar1;
        local_4a = puVar1[1];
      }
      iVar7 = iVar7 + -1;
    }
  } while (-1 < iVar7);
  FUN_004095f0(lVar6,(iVar5 * 2 & 0xffffU) * 4);
  return;
}

