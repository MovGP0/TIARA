/* Ghidra address: 00468950 */
/* Ghidra symbol: FUN_00468950 */


void FUN_00468950(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_004154b0(&local_120,local_118,0);
  FUN_00468910(param_1,local_120);
  FUN_004144d0(&local_120);
  return;
}

