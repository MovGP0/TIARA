/* Ghidra address: 00a38490 */
/* Ghidra symbol: FUN_00a38490 */


void FUN_00a38490(longlong param_1,byte param_2,longlong param_3,ushort *param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (&DAT_01e71708)[param_2];
  pbVar3 = (byte *)(param_3 + iVar2 * 3);
  param_5 = (byte *)((longlong)param_5 + (longlong)iVar2);
  do {
    *param_4 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar3[2]);
    param_4[1] = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar3[1]);
    param_4[2] = (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)*pbVar3);
    param_4[3] = (ushort)*param_5;
    param_4 = param_4 + 4;
    iVar1 = (&DAT_01e71740)[param_2];
    pbVar3 = pbVar3 + iVar1 * 3;
    param_5 = param_5 + iVar1;
    iVar2 = iVar2 + iVar1;
  } while (iVar2 < *(int *)(param_1 + 0x30));
  return;
}

