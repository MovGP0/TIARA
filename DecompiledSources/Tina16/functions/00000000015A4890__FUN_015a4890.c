/* Ghidra address: 015a4890 */
/* Ghidra symbol: FUN_015a4890 */


void FUN_015a4890(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_48;
  uint local_28;
  short local_20;
  short local_1c;
  
  local_48 = 0;
  if (*(int *)(param_1 + 0x16d2) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x16d6) + (ulonglong)local_48 * 2);
      uVar5 = (uint)*(byte *)(*(longlong *)(param_1 + 0x16c6) + (ulonglong)local_48);
      local_48 = local_48 + 1;
      if (uVar8 == 0) {
        uVar8 = (uint)*(ushort *)(param_2 + 2 + (longlong)(int)uVar5 * 4);
        if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16f0)) {
          uVar2 = *(ushort *)(param_2 + (longlong)(int)uVar5 * 4);
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)*(undefined2 *)(param_1 + 0x16ee);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(short *)(param_1 + 0x16ee) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16f0) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16f0);
        }
        else {
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               *(short *)(param_2 + (longlong)(int)uVar5 * 4) <<
               ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar8;
        }
      }
      else {
        uVar6 = (uint)(byte)(&DAT_01f691f0)[(int)uVar5];
        uVar7 = (uint)*(ushort *)(param_2 + 2 + (ulonglong)(uVar6 + 0x101) * 4);
        if ((int)(0x10 - uVar7) < *(int *)(param_1 + 0x16f0)) {
          uVar2 = *(ushort *)(param_2 + (ulonglong)(uVar6 + 0x101) * 4);
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)*(undefined2 *)(param_1 + 0x16ee);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(short *)(param_1 + 0x16ee) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16f0) = (uVar7 - 0x10) + *(int *)(param_1 + 0x16f0);
        }
        else {
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               *(short *)(param_2 + (ulonglong)(uVar6 + 0x101) * 4) <<
               ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar7;
        }
        iVar3 = *(int *)(&DAT_01f694f0 + (ulonglong)uVar6 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_01f69b60 + (ulonglong)uVar6 * 4);
          local_20 = (short)(uVar5 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16f0)) {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_20 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uVar5 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = iVar3 + -0x10 + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_20 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + iVar3;
          }
        }
        uVar8 = uVar8 - 1;
        if (uVar8 < 0x100) {
          bVar1 = (&DAT_01f692f0)[uVar8];
        }
        else {
          bVar1 = (&DAT_01f692f0)[(uVar8 >> 7) + 0x100];
        }
        local_28 = (uint)bVar1;
        uVar5 = (uint)*(ushort *)(param_3 + 2 + (ulonglong)local_28 * 4);
        if ((int)(0x10 - uVar5) < *(int *)(param_1 + 0x16f0)) {
          uVar2 = *(ushort *)(param_3 + (ulonglong)local_28 * 4);
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)*(undefined2 *)(param_1 + 0x16ee);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(short *)(param_1 + 0x16ee) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16f0) = (uVar5 - 0x10) + *(int *)(param_1 + 0x16f0);
        }
        else {
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               *(short *)(param_3 + (ulonglong)local_28 * 4) <<
               ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar5;
        }
        iVar3 = *(int *)(&DAT_01f69570 + (ulonglong)local_28 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_01f69be0 + (ulonglong)local_28 * 4);
          local_1c = (short)(uVar8 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16f0)) {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_1c << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uVar8 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = iVar3 + -0x10 + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_1c << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + iVar3;
          }
        }
      }
    } while (local_48 < *(uint *)(param_1 + 0x16d2));
  }
  uVar5 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar5) < *(int *)(param_1 + 0x16f0)) {
    uVar2 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) | uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(short *)(param_1 + 0x16ee) =
         (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(uint *)(param_1 + 0x16f0) = (uVar5 - 0x10) + *(int *)(param_1 + 0x16f0);
  }
  else {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         *(short *)(param_2 + 0x400) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar5;
  }
  return;
}

