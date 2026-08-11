/* Ghidra address: 00b52c00 */
/* Ghidra symbol: FUN_00b52c00 */


void FUN_00b52c00(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  FUN_00415d10(param_3,2,0);
  puVar1 = (undefined1 *)FUN_00414df0(param_3);
  *puVar1 = (char)param_2;
  lVar2 = FUN_00414df0(param_3);
  *(char *)(lVar2 + 1) = (char)((uint)param_2 >> 8);
  return;
}

