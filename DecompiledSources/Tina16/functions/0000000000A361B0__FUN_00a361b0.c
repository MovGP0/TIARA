/* Ghidra address: 00a361b0 */
/* Ghidra symbol: FUN_00a361b0 */


void FUN_00a361b0(longlong param_1,uint param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (&DAT_01e71708)[(ulonglong)param_2 & 0xff];
  do {
    iVar4 = *(int *)(&DAT_01e71778 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x490) * 4
                    );
    do {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x490);
      pbVar1 = (byte *)(param_4 + (int)((uint)bVar2 * iVar3) / 8);
      *pbVar1 = *pbVar1 | (byte)(((uint)(*param_3 >> ((byte)iVar4 & 0x1f)) &
                                 *(uint *)(&DAT_01e71758 + (ulonglong)bVar2 * 4)) <<
                                ((char)*(undefined4 *)(&DAT_01e71778 + (ulonglong)bVar2 * 4) -
                                 (char)((int)(iVar3 * (uint)bVar2) % 8) & 0x1fU));
      iVar3 = iVar3 + (&DAT_01e71740)[(ulonglong)param_2 & 0xff];
      iVar4 = iVar4 - (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x490);
    } while (-1 < iVar4);
    param_3 = param_3 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x30));
  return;
}

