/* Ghidra address: 00a36010 */
/* Ghidra symbol: FUN_00a36010 */


void FUN_00a36010(longlong param_1,byte param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (&DAT_01e71708)[param_2];
  puVar2 = (undefined1 *)(param_4 + iVar1 * 3);
  do {
    *puVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[2]);
    puVar2[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_3[1]);
    puVar2[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)*param_3);
    param_3 = param_3 + 3;
    puVar2 = puVar2 + (longlong)((&DAT_01e71740)[param_2] * 3 + -3) + 3;
    iVar1 = iVar1 + (&DAT_01e71740)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x30));
  return;
}

