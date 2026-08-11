/* Ghidra address: 006339d0 */
/* Ghidra symbol: FUN_006339d0 */


void FUN_006339d0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(int *)(param_1 + 0x16f4) == 0) {
    iVar7 = *(int *)(param_1 + 0x1714);
    uVar9 = *(ushort *)(param_1 + 0x1710);
  }
  else {
    piVar1 = (int *)(param_1 + 0x1714);
    puVar2 = (ushort *)(param_1 + 0x1710);
    uVar12 = 0;
    do {
      uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x16f8) + uVar12 * 2);
      uVar13 = (int)uVar12 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x16e8) + uVar12);
      uVar12 = (ulonglong)bVar3;
      if (uVar9 == 0) {
        uVar8 = *(ushort *)(param_2 + 2 + uVar12 * 4);
        iVar7 = *piVar1;
        uVar4 = *(ushort *)(param_2 + uVar12 * 4);
        uVar10 = (uint)*puVar2 | (uint)uVar4 << ((byte)iVar7 & 0x1f);
        uVar9 = (ushort)uVar10;
        *puVar2 = uVar9;
        if ((int)(0x10 - (uint)uVar8) < iVar7) {
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar11) = (char)uVar10;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) =
               *(undefined1 *)(param_1 + 0x1711);
          uVar9 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
          *(ushort *)(param_1 + 0x1710) = uVar9;
          iVar7 = (uVar8 - 0x10) + *(int *)(param_1 + 0x1714);
        }
        else {
          iVar7 = iVar7 + (uint)uVar8;
        }
LAB_00633d26:
        *piVar1 = iVar7;
      }
      else {
        uVar12 = (ulonglong)(byte)(&DAT_01df2e10)[uVar12];
        uVar8 = *(ushort *)(param_2 + 0x406 + uVar12 * 4);
        iVar7 = *piVar1;
        uVar4 = *(ushort *)(param_2 + 0x404 + uVar12 * 4);
        uVar10 = (uint)*puVar2 | (uint)uVar4 << ((byte)iVar7 & 0x1f);
        *puVar2 = (ushort)uVar10;
        if ((int)(0x10 - (uint)uVar8) < iVar7) {
          uVar11 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar11 + 1;
          *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar11) = (char)uVar10;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) =
               *(undefined1 *)(param_1 + 0x1711);
          uVar4 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
          *(ushort *)(param_1 + 0x1710) = uVar4;
          iVar7 = (uVar8 - 0x10) + *(int *)(param_1 + 0x1714);
          uVar10 = (uint)uVar4;
        }
        else {
          iVar7 = iVar7 + (uint)uVar8;
        }
        uVar8 = (ushort)uVar10;
        *piVar1 = iVar7;
        if (uVar12 - 8 < 0x14) {
          iVar5 = *(int *)(&DAT_01df3410 + uVar12 * 4);
          uVar11 = (uint)bVar3 - *(int *)(&DAT_01df3580 + uVar12 * 4) & 0xffff;
          uVar10 = uVar10 & 0xffff | uVar11 << ((byte)iVar7 & 0x1f);
          uVar8 = (ushort)uVar10;
          *puVar2 = uVar8;
          if (0x10 - iVar5 < iVar7) {
            uVar6 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar6 + 1;
            *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6) = (char)uVar10;
            uVar10 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar10 + 1;
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) =
                 *(undefined1 *)(param_1 + 0x1711);
            uVar8 = (ushort)(uVar11 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f));
            *(ushort *)(param_1 + 0x1710) = uVar8;
            iVar7 = iVar5 + -0x10 + *(int *)(param_1 + 0x1714);
          }
          else {
            iVar7 = iVar5 + iVar7;
          }
          *piVar1 = iVar7;
        }
        uVar11 = uVar9 - 1;
        uVar10 = (uVar11 >> 7) + 0x100;
        if (uVar11 < 0x100) {
          uVar10 = uVar11;
        }
        uVar12 = (ulonglong)(byte)(&DAT_01df2c10)[uVar10];
        uVar9 = *(ushort *)(param_3 + 2 + uVar12 * 4);
        uVar4 = *(ushort *)(param_3 + uVar12 * 4);
        uVar10 = (uint)uVar8 | (uint)uVar4 << ((byte)iVar7 & 0x1f);
        *puVar2 = (ushort)uVar10;
        if ((int)(0x10 - (uint)uVar9) < iVar7) {
          uVar6 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar6 + 1;
          *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6) = (char)uVar10;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) =
               *(undefined1 *)(param_1 + 0x1711);
          uVar4 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
          *(ushort *)(param_1 + 0x1710) = uVar4;
          iVar7 = (uVar9 - 0x10) + *(int *)(param_1 + 0x1714);
          uVar10 = (uint)uVar4;
        }
        else {
          iVar7 = iVar7 + (uint)uVar9;
        }
        uVar9 = (ushort)uVar10;
        *piVar1 = iVar7;
        if (uVar12 - 4 < 0x1a) {
          iVar5 = *(int *)(&DAT_01df3490 + uVar12 * 4);
          uVar11 = uVar11 - *(int *)(&DAT_01df3600 + uVar12 * 4) & 0xffff;
          uVar10 = uVar10 & 0xffff | uVar11 << ((byte)iVar7 & 0x1f);
          uVar9 = (ushort)uVar10;
          *puVar2 = uVar9;
          if (0x10 - iVar5 < iVar7) {
            uVar6 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar6 + 1;
            *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6) = (char)uVar10;
            uVar10 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar10 + 1;
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) =
                 *(undefined1 *)(param_1 + 0x1711);
            uVar9 = (ushort)(uVar11 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f));
            *(ushort *)(param_1 + 0x1710) = uVar9;
            iVar7 = iVar5 + -0x10 + *(int *)(param_1 + 0x1714);
          }
          else {
            iVar7 = iVar5 + iVar7;
          }
          goto LAB_00633d26;
        }
      }
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(param_1 + 0x16f4));
  }
  uVar8 = *(ushort *)(param_2 + 0x402);
  uVar4 = *(ushort *)(param_2 + 0x400);
  uVar13 = (uint)uVar9 | (uint)uVar4 << ((byte)iVar7 & 0x1f);
  *(short *)(param_1 + 0x1710) = (short)uVar13;
  if ((int)(0x10 - (uint)uVar8) < iVar7) {
    uVar10 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar10 + 1;
    *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar10) = (char)uVar13;
    uVar13 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar13 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar13) =
         *(undefined1 *)(param_1 + 0x1711);
    *(ushort *)(param_1 + 0x1710) = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
    iVar7 = (uVar8 - 0x10) + *(int *)(param_1 + 0x1714);
  }
  else {
    iVar7 = iVar7 + (uint)uVar8;
  }
  *(int *)(param_1 + 0x1714) = iVar7;
  return;
}

