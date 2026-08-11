/* Ghidra address: 004169a0 */
/* Ghidra symbol: FUN_004169a0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004169a0(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00414840(param_1,local_118 + 1,local_118[0],_DAT_02006a28);
  return;
}

