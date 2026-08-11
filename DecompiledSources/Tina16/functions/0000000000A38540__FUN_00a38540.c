/* Ghidra address: 00a38540 */
/* Ghidra symbol: FUN_00a38540 */


void FUN_00a38540(longlong param_1,byte param_2,longlong param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (&DAT_01e71708)[param_2];
  puVar3 = (undefined1 *)(param_3 + iVar2);
  param_5 = (undefined1 *)((longlong)param_5 + (longlong)iVar2);
  do {
    *param_4 = *puVar3;
    param_4[1] = *param_5;
    param_4 = param_4 + 2;
    iVar1 = (&DAT_01e71740)[param_2];
    puVar3 = puVar3 + iVar1;
    param_5 = param_5 + iVar1;
    iVar2 = iVar2 + iVar1;
  } while (iVar2 < *(int *)(param_1 + 0x30));
  return;
}

