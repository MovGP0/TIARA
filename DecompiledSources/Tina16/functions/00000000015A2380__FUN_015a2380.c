/* Ghidra address: 015a2380 */
/* Ghidra symbol: FUN_015a2380 */


void FUN_015a2380(longlong param_1,undefined8 param_2,undefined4 param_3,ushort param_4)

{
  if (*(int *)(param_1 + 0x16f0) < 0xe) {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) | param_4 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f)
    ;
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16ee) =
         *(ushort *)(param_1 + 0x16ee) | param_4 << ((byte)*(undefined4 *)(param_1 + 0x16f0) & 0x1f)
    ;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)*(undefined2 *)(param_1 + 0x16ee);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16ee) >> 8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    *(short *)(param_1 + 0x16ee) =
         (short)((int)(uint)param_4 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16f0) & 0x1f));
    *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + -0xd;
  }
  FUN_015a55e0(param_1,param_2,param_3,1);
  return;
}

