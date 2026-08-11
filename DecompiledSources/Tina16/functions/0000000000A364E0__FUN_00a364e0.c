/* Ghidra address: 00a364e0 */
/* Ghidra symbol: FUN_00a364e0 */


void FUN_00a364e0(longlong param_1,byte param_2,byte *param_3,longlong param_4,byte *param_5,
                 undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (&DAT_01e71708)[param_2];
  puVar3 = (undefined1 *)(param_4 + iVar2 * 3);
  param_5 = (byte *)((longlong)param_5 + (longlong)iVar2);
  do {
    *param_5 = param_3[6];
    *puVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[4]);
    puVar3[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[2]);
    puVar3[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)*param_3);
    *param_6 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[5]);
    param_6[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[3]);
    param_6[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[1]);
    param_6 = param_6 + 3;
    param_3 = param_3 + 8;
    iVar1 = (&DAT_01e71740)[param_2];
    puVar3 = puVar3 + (longlong)(iVar1 * 3 + -3) + 3;
    param_5 = param_5 + iVar1;
    iVar2 = iVar2 + iVar1;
  } while (iVar2 < *(int *)(param_1 + 0x30));
  return;
}

