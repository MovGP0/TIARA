/* Ghidra address: 015a3480 */
/* Ghidra symbol: FUN_015a3480 */


void FUN_015a3480(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_28;
  undefined2 local_18;
  undefined2 local_14;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  local_68 = 0;
  local_58 = 7;
  local_5c = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    local_58 = 0x8a;
    local_5c = 3;
  }
  local_60 = (uint)*(ushort *)(param_2 + 2);
  for (local_54 = 0; local_54 <= param_3; local_54 = local_54 + 1) {
    uVar2 = (uint)*(ushort *)(param_2 + 2 + (longlong)(local_54 + 1) * 4);
    iVar3 = local_68 + 1;
    if ((local_58 <= iVar3) || (local_60 != uVar2)) {
      if (iVar3 < local_5c) {
        do {
          local_68 = iVar3;
          uVar4 = (uint)*(ushort *)(param_1 + 0xa97 + (longlong)(int)local_60 * 4);
          if ((int)(0x10 - uVar4) < *(int *)(param_1 + 0x16f0)) {
            uVar1 = *(ushort *)(param_1 + 0xa95 + (longlong)(int)local_60 * 4);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(uint *)(param_1 + 0x16f0) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 *(short *)(param_1 + 0xa95 + (longlong)(int)local_60 * 4) <<
                 ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar4;
          }
          iVar3 = local_68 + -1;
        } while (local_68 + -1 != 0);
      }
      else if (local_60 == 0) {
        if (iVar3 < 0xb) {
          uVar4 = (uint)*(ushort *)(param_1 + 0xadb);
          if ((int)(0x10 - uVar4) < *(int *)(param_1 + 0x16f0)) {
            uVar1 = *(ushort *)(param_1 + 0xad9);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(uint *)(param_1 + 0x16f0) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 *(short *)(param_1 + 0xad9) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar4;
          }
          if (*(int *)(param_1 + 0x16f0) < 0xe) {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 (ushort)((local_68 - 2U & 0xffff) <<
                         ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 3;
          }
          else {
            local_28 = (short)(local_68 - 2U);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_28 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(local_68 - 2U & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xd;
          }
        }
        else {
          uVar4 = (uint)*(ushort *)(param_1 + 0xadf);
          if ((int)(0x10 - uVar4) < *(int *)(param_1 + 0x16f0)) {
            uVar1 = *(ushort *)(param_1 + 0xadd);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(uint *)(param_1 + 0x16f0) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 *(short *)(param_1 + 0xadd) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar4;
          }
          if (*(int *)(param_1 + 0x16f0) < 10) {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 (ushort)((local_68 - 10U & 0xffff) <<
                         ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 7;
          }
          else {
            local_18 = (short)(local_68 - 10U);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 local_18 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(local_68 - 10U & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -9;
          }
        }
      }
      else {
        if (local_60 != local_10) {
          uVar4 = (uint)*(ushort *)(param_1 + 0xa97 + (longlong)(int)local_60 * 4);
          iVar3 = local_68;
          if ((int)(0x10 - uVar4) < *(int *)(param_1 + 0x16f0)) {
            uVar1 = *(ushort *)(param_1 + 0xa95 + (longlong)(int)local_60 * 4);
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)*(undefined2 *)(param_1 + 0x16ee);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            *(short *)(param_1 + 0x16ee) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
            *(uint *)(param_1 + 0x16f0) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16f0);
          }
          else {
            *(ushort *)(param_1 + 0x16ee) =
                 *(ushort *)(param_1 + 0x16ee) |
                 *(short *)(param_1 + 0xa95 + (longlong)(int)local_60 * 4) <<
                 ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
            *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar4;
          }
        }
        local_68 = iVar3;
        uVar4 = (uint)*(ushort *)(param_1 + 0xad7);
        if ((int)(0x10 - uVar4) < *(int *)(param_1 + 0x16f0)) {
          uVar1 = *(ushort *)(param_1 + 0xad5);
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)*(undefined2 *)(param_1 + 0x16ee);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(short *)(param_1 + 0x16ee) =
               (short)((int)(uint)uVar1 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16f0) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16f0);
        }
        else {
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               *(short *)(param_1 + 0xad5) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(uint *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + uVar4;
        }
        if (*(int *)(param_1 + 0x16f0) < 0xf) {
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               (ushort)((local_68 - 3U & 0xffff) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f)
                       );
          *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 2;
        }
        else {
          local_14 = (short)(local_68 - 3U);
          *(ushort *)(param_1 + 0x16ee) =
               *(ushort *)(param_1 + 0x16ee) |
               local_14 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)*(undefined2 *)(param_1 + 0x16ee);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(short *)(param_1 + 0x16ee) =
               (short)((int)(local_68 - 3U & 0xffff) >>
                      (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
          *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xe;
        }
      }
      local_68 = 0;
      local_10 = local_60;
      iVar3 = local_68;
      if (uVar2 == 0) {
        local_58 = 0x8a;
        local_5c = 3;
      }
      else if (local_60 == uVar2) {
        local_58 = 6;
        local_5c = 3;
      }
      else {
        local_58 = 7;
        local_5c = 4;
      }
    }
    local_68 = iVar3;
    local_60 = uVar2;
  }
  return;
}

