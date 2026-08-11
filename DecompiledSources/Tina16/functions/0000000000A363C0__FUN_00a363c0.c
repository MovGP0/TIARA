/* Ghidra address: 00a363c0 */
/* Ghidra symbol: FUN_00a363c0 */


void FUN_00a363c0(longlong param_1,byte param_2,undefined1 *param_3,longlong param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (&DAT_01e71708)[param_2];
  puVar2 = (undefined1 *)(param_4 + iVar1);
  do {
    *puVar2 = *param_3;
    *param_6 = param_3[1];
    param_6 = param_6 + 1;
    param_3 = param_3 + 2;
    puVar2 = puVar2 + (longlong)((&DAT_01e71740)[param_2] + -1) + 1;
    iVar1 = iVar1 + (&DAT_01e71740)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x30));
  return;
}

