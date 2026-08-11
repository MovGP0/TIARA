/* Ghidra address: 00b693f0 */
/* Ghidra symbol: FUN_00b693f0 */


int FUN_00b693f0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = param_3 / 3;
  if (0 < iVar2) {
    do {
      *(undefined *)(param_2 + iVar3) = (&DAT_01e89178)[*(byte *)(param_1 + iVar1) >> 2];
      *(undefined *)(param_2 + (iVar3 + 1)) =
           (&DAT_01e89178)
           [(uint)(*(byte *)(param_1 + iVar1) & 3) * 0x10 +
            (uint)(*(byte *)(param_1 + (iVar1 + 1)) >> 4)];
      *(undefined *)(param_2 + (iVar3 + 2)) =
           (&DAT_01e89178)
           [(uint)(*(byte *)(param_1 + (iVar1 + 1)) & 0xf) * 4 +
            (uint)(*(byte *)(param_1 + (iVar1 + 2)) >> 6)];
      *(undefined *)(param_2 + (iVar3 + 3)) =
           (&DAT_01e89178)[*(byte *)(param_1 + (iVar1 + 2)) & 0x3f];
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_3 % 3 == 1) {
    *(undefined *)(param_2 + iVar3) = (&DAT_01e89178)[*(byte *)(param_1 + iVar1) >> 2];
    *(undefined *)(param_2 + (iVar3 + 1)) =
         (&DAT_01e89178)[(ulonglong)(*(byte *)(param_1 + iVar1) & 3) * 0x10];
    *(undefined1 *)(param_2 + (iVar3 + 2)) = 0x3d;
    *(undefined1 *)(param_2 + (iVar3 + 3)) = 0x3d;
  }
  else if (param_3 % 3 == 2) {
    *(undefined *)(param_2 + iVar3) = (&DAT_01e89178)[*(byte *)(param_1 + iVar1) >> 2];
    *(undefined *)(param_2 + (iVar3 + 1)) =
         (&DAT_01e89178)
         [(uint)(*(byte *)(param_1 + iVar1) & 3) * 0x10 +
          (uint)(*(byte *)(param_1 + (iVar1 + 1)) >> 4)];
    *(undefined *)(param_2 + (iVar3 + 2)) =
         (&DAT_01e89178)[(uint)(*(byte *)(param_1 + (iVar1 + 1)) & 0xf) * 4];
    *(undefined1 *)(param_2 + (iVar3 + 3)) = 0x3d;
  }
  return ((param_3 + 2) / 3) * 4;
}

