/* Ghidra address: 00a360b0 */
/* Ghidra symbol: FUN_00a360b0 */


void FUN_00a360b0(longlong param_1,byte param_2,byte *param_3,longlong param_4,undefined8 param_5,
                 undefined1 *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (&DAT_01e71708)[param_2];
  puVar2 = (undefined1 *)(param_4 + iVar1 * 3);
  do {
    *puVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[4]);
    puVar2[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[2]);
    puVar2[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)*param_3);
    *param_6 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[5]);
    param_6[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[3]);
    param_6[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[1]);
    param_6 = param_6 + 3;
    param_3 = param_3 + 6;
    puVar2 = puVar2 + (longlong)((&DAT_01e71740)[param_2] * 3 + -3) + 3;
    iVar1 = iVar1 + (&DAT_01e71740)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x30));
  return;
}

