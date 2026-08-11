/* Ghidra address: 00b4f9e0 */
/* Ghidra symbol: FUN_00b4f9e0 */


void FUN_00b4f9e0(undefined8 param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  FUN_00415d10(param_4,4,0);
  puVar1 = (undefined1 *)FUN_00414df0(param_4);
  *puVar1 = (char)param_2;
  lVar2 = FUN_00414df0(param_4);
  *(char *)(lVar2 + 1) = (char)((uint)param_2 >> 8);
  lVar2 = FUN_00414df0(param_4);
  *(char *)(lVar2 + 2) = (char)(param_3 & 0xffffffff);
  lVar2 = FUN_00414df0(param_4);
  *(char *)(lVar2 + 3) = (char)((param_3 & 0xffffffff) >> 8);
  return;
}

