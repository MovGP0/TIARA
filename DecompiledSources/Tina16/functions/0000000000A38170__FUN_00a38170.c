/* Ghidra address: 00a38170 */
/* Ghidra symbol: FUN_00a38170 */


void FUN_00a38170(longlong param_1,byte param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (&DAT_01e71708)[param_2];
  pbVar2 = (byte *)(param_3 + iVar1 * 3);
  do {
    *param_4 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar2[2]);
    param_4[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar2[1]);
    param_4[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)*pbVar2);
    param_4 = param_4 + 3;
    pbVar2 = pbVar2 + (&DAT_01e71740)[param_2] * 3;
    iVar1 = iVar1 + (&DAT_01e71740)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x30));
  return;
}

