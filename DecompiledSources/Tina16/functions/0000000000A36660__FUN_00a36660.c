/* Ghidra address: 00a36660 */
/* Ghidra symbol: FUN_00a36660 */


void FUN_00a36660(longlong param_1,byte param_2,undefined1 *param_3,longlong param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (&DAT_01e71708)[param_2];
  puVar3 = (undefined1 *)(param_4 + iVar2);
  param_5 = (undefined1 *)((longlong)param_5 + (longlong)iVar2);
  do {
    *param_6 = param_3[1];
    param_6 = param_6 + 1;
    *puVar3 = *param_3;
    *param_5 = param_3[2];
    param_3 = param_3 + 4;
    iVar1 = (&DAT_01e71740)[param_2];
    puVar3 = puVar3 + iVar1;
    param_5 = param_5 + iVar1;
    iVar2 = iVar2 + iVar1;
  } while (iVar2 < *(int *)(param_1 + 0x30));
  return;
}

