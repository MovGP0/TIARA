/* Ghidra address: 00593d20 */
/* Ghidra symbol: FUN_00593d20 */


void FUN_00593d20(undefined8 param_1,byte *param_2)

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
  FUN_00525420(local_118 + 1,local_118[0],0);
  return;
}

