/* Ghidra address: 015a4270 */
/* Ghidra symbol: FUN_015a4270 */


void FUN_015a4270(longlong param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int local_38;
  short local_24;
  short local_20;
  short local_1c;
  
  if (*(int *)(param_1 + 0x16f0) < 0xc) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         (ushort)((param_2 - 0x101U & 0xffff) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 5;
  }
  else {
    local_24 = (short)(param_2 - 0x101U);
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         local_24 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(short *)(param_1 + 0x16ee) =
         (short)((int)(param_2 - 0x101U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xb;
  }
  if (*(int *)(param_1 + 0x16f0) < 0xc) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         (ushort)((param_3 - 1U & 0xffff) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 5;
  }
  else {
    local_1c = (short)(param_3 - 1U);
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
         (short)((int)(param_3 - 1U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xb;
  }
  if (*(int *)(param_1 + 0x16f0) < 0xd) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) |
         (ushort)((param_4 - 4U & 0xffff) << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 4;
  }
  else {
    local_20 = (short)(param_4 - 4U);
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
         (short)((int)(param_4 - 4U & 0xffff) >>
                (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xc;
  }
  for (local_38 = 0; local_38 < param_4; local_38 = local_38 + 1) {
    if (*(int *)(param_1 + 0x16f0) < 0xe) {
      *(ushort *)(param_1 + 0x16ee) =
           *(ushort *)(param_1 + 0x16ee) |
           *(short *)(param_1 + 0xa97 + (ulonglong)(byte)(&DAT_01f69640)[local_38] * 4) <<
           ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f);
      *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 3;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0xa97 + (ulonglong)(byte)(&DAT_01f69640)[local_38] * 4);
      *(ushort *)(param_1 + 0x16ee) =
           *(ushort *)(param_1 + 0x16ee) | uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f)
      ;
      *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
           (char)*(undefined2 *)(param_1 + 0x16ee);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
           (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(short *)(param_1 + 0x16ee) =
           (short)((int)(uint)uVar1 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
      *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xd;
    }
  }
  FUN_015a3480(param_1,param_1 + 0xad,param_2 + -1);
  FUN_015a3480(param_1,param_1 + 0x9a1,param_3 + -1);
  return;
}

