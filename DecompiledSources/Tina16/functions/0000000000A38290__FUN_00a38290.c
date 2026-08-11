/* Ghidra address: 00a38290 */
/* Ghidra symbol: FUN_00a38290 */


void FUN_00a38290(longlong param_1,byte param_2,longlong param_3,byte *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040d200(param_4,*(undefined4 *)(param_1 + 0x38),0);
  iVar4 = (&DAT_01e71708)[param_2];
  lVar1 = *(longlong *)(param_1 + 0x28);
  do {
    iVar3 = *(int *)(&DAT_01e717bc + (ulonglong)*(ushort *)(lVar1 + 0x52) * 4);
    do {
      iVar2 = (uint)*(ushort *)(lVar1 + 0x52) * iVar4;
      *param_4 = *param_4 |
                 (byte)(((uint)(*(byte *)(param_3 + iVar2 / 8) >>
                               ((char)*(undefined4 *)
                                       (&DAT_01e717bc +
                                       (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x490) *
                                       4) - (char)(iVar2 % 8) & 0x1fU)) &
                        *(uint *)(&DAT_01e7179c + (ulonglong)*(ushort *)(lVar1 + 0x52) * 4)) <<
                       ((byte)iVar3 & 0x1f));
      iVar4 = iVar4 + (&DAT_01e71740)[param_2];
      iVar3 = iVar3 - (uint)*(ushort *)(lVar1 + 0x52);
    } while (-1 < iVar3);
    param_4 = param_4 + 1;
  } while (iVar4 < *(int *)(param_1 + 0x30));
  return;
}

