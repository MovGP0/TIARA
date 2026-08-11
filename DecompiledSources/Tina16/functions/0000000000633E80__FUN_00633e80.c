/* Ghidra address: 00633e80 */
/* Ghidra symbol: FUN_00633e80 */


void FUN_00633e80(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (-1 < param_3) {
    uVar1 = *(ushort *)(param_2 + 2);
    iVar5 = 0x8a;
    if (uVar1 != 0) {
      iVar5 = 7;
    }
    iVar8 = 4 - (uint)(uVar1 == 0);
    uVar11 = 0;
    uVar6 = 0xffffffff;
    uVar9 = (uint)uVar1;
    uVar12 = 0;
    do {
      uVar13 = (ulonglong)uVar9;
      uVar1 = *(ushort *)(param_2 + 6 + uVar11 * 4);
      uVar10 = (uint)uVar1;
      uVar11 = uVar11 + 1;
      uVar7 = uVar12 + 1;
      if ((iVar5 <= (int)uVar7) || (uVar9 != uVar10)) {
        if ((int)uVar7 < iVar8) {
          iVar5 = *(int *)(param_1 + 0x1714);
          uVar7 = (uint)*(ushort *)(param_1 + 0x1710);
          uVar12 = ~uVar12;
          do {
            uVar2 = *(ushort *)(param_1 + 0xaa6 + uVar13 * 4);
            uVar3 = *(ushort *)(param_1 + 0xaa4 + uVar13 * 4);
            uVar7 = uVar7 & 0xffff | (uint)uVar3 << ((byte)iVar5 & 0x1f);
            *(short *)(param_1 + 0x1710) = (short)uVar7;
            if ((int)(0x10 - (uint)uVar2) < iVar5) {
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
              uVar7 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar7 + 1;
              *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                   *(undefined1 *)(param_1 + 0x1711);
              uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
              *(ushort *)(param_1 + 0x1710) = uVar3;
              iVar5 = (uVar2 - 0x10) + *(int *)(param_1 + 0x1714);
              uVar7 = (uint)uVar3;
            }
            else {
              iVar5 = iVar5 + (uint)uVar2;
            }
            *(int *)(param_1 + 0x1714) = iVar5;
            uVar12 = uVar12 + 1;
          } while (uVar12 != 0);
        }
        else {
          if (uVar9 == 0) {
            if ((int)uVar12 < 10) {
              uVar2 = *(ushort *)(param_1 + 0xaea);
              iVar5 = *(int *)(param_1 + 0x1714);
              uVar3 = *(ushort *)(param_1 + 0xae8);
              uVar7 = (uint)*(ushort *)(param_1 + 0x1710) | (uint)uVar3 << ((byte)iVar5 & 0x1f);
              *(short *)(param_1 + 0x1710) = (short)uVar7;
              if ((int)(0x10 - (uint)uVar2) < iVar5) {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                     *(undefined1 *)(param_1 + 0x1711);
                uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
                *(ushort *)(param_1 + 0x1710) = uVar3;
                iVar5 = (uVar2 - 0x10) + *(int *)(param_1 + 0x1714);
                uVar7 = (uint)uVar3;
              }
              else {
                iVar5 = iVar5 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1714) = iVar5;
              uVar12 = uVar12 + 0xfffe & 0xffff;
              uVar7 = uVar7 & 0xffff | uVar12 << ((byte)iVar5 & 0x1f);
              *(short *)(param_1 + 0x1710) = (short)uVar7;
              if (iVar5 < 0xe) {
                iVar5 = iVar5 + 3;
              }
              else {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(short *)(param_1 + 0x1710) =
                     (short)(uVar12 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1714) + -0xd;
              }
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xaee);
              iVar5 = *(int *)(param_1 + 0x1714);
              uVar3 = *(ushort *)(param_1 + 0xaec);
              uVar7 = (uint)*(ushort *)(param_1 + 0x1710) | (uint)uVar3 << ((byte)iVar5 & 0x1f);
              *(short *)(param_1 + 0x1710) = (short)uVar7;
              if ((int)(0x10 - (uint)uVar2) < iVar5) {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                     *(undefined1 *)(param_1 + 0x1711);
                uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
                *(ushort *)(param_1 + 0x1710) = uVar3;
                iVar5 = (uVar2 - 0x10) + *(int *)(param_1 + 0x1714);
                uVar7 = (uint)uVar3;
              }
              else {
                iVar5 = iVar5 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1714) = iVar5;
              uVar12 = uVar12 + 0xfff6 & 0xffff;
              uVar7 = uVar7 & 0xffff | uVar12 << ((byte)iVar5 & 0x1f);
              *(short *)(param_1 + 0x1710) = (short)uVar7;
              if (iVar5 < 10) {
                iVar5 = iVar5 + 7;
              }
              else {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(short *)(param_1 + 0x1710) =
                     (short)(uVar12 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f));
                iVar5 = *(int *)(param_1 + 0x1714) + -9;
              }
            }
          }
          else {
            if (uVar9 == (uint)uVar6) {
              iVar5 = *(int *)(param_1 + 0x1714);
              uVar12 = uVar7;
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xaa6 + uVar13 * 4);
              iVar5 = *(int *)(param_1 + 0x1714);
              uVar3 = *(ushort *)(param_1 + 0xaa4 + uVar13 * 4);
              uVar7 = (uint)*(ushort *)(param_1 + 0x1710) | (uint)uVar3 << ((byte)iVar5 & 0x1f);
              *(short *)(param_1 + 0x1710) = (short)uVar7;
              if ((int)(0x10 - (uint)uVar2) < iVar5) {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
                uVar7 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar7 + 1;
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(ushort *)(param_1 + 0x1710) =
                     uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
                iVar5 = (uVar2 - 0x10) + *(int *)(param_1 + 0x1714);
              }
              else {
                iVar5 = iVar5 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1714) = iVar5;
            }
            uVar2 = *(ushort *)(param_1 + 0xae6);
            uVar3 = *(ushort *)(param_1 + 0xae4);
            uVar7 = (uint)*(ushort *)(param_1 + 0x1710) | (uint)uVar3 << ((byte)iVar5 & 0x1f);
            *(short *)(param_1 + 0x1710) = (short)uVar7;
            if ((int)(0x10 - (uint)uVar2) < iVar5) {
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
              uVar7 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar7 + 1;
              *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                   *(undefined1 *)(param_1 + 0x1711);
              uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f);
              *(ushort *)(param_1 + 0x1710) = uVar3;
              iVar5 = (uVar2 - 0x10) + *(int *)(param_1 + 0x1714);
              uVar7 = (uint)uVar3;
            }
            else {
              iVar5 = iVar5 + (uint)uVar2;
            }
            *(int *)(param_1 + 0x1714) = iVar5;
            uVar12 = uVar12 + 0xfffd & 0xffff;
            uVar7 = uVar7 & 0xffff | uVar12 << ((byte)iVar5 & 0x1f);
            *(short *)(param_1 + 0x1710) = (short)uVar7;
            if (iVar5 < 0xf) {
              iVar5 = iVar5 + 2;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4) = (char)uVar7;
              uVar7 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar7 + 1;
              *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar7) =
                   *(undefined1 *)(param_1 + 0x1711);
              *(short *)(param_1 + 0x1710) =
                   (short)(uVar12 >> (0x10U - (char)*(int *)(param_1 + 0x1714) & 0x1f));
              iVar5 = *(int *)(param_1 + 0x1714) + -0xe;
            }
          }
          *(int *)(param_1 + 0x1714) = iVar5;
        }
        uVar6 = uVar13;
        if (uVar1 == 0) {
          uVar7 = 0;
          iVar5 = 0x8a;
          iVar8 = 3;
        }
        else {
          uVar7 = 0;
          iVar8 = 4 - (uint)(uVar9 == uVar10);
          iVar5 = 7 - (uint)(uVar9 == uVar10);
        }
      }
      uVar9 = uVar10;
      uVar12 = uVar7;
    } while (uVar11 != param_3 + 1);
  }
  return;
}

