/* Ghidra address: 016bdf20 */
/* Ghidra symbol: FUN_016bdf20 */


void FUN_016bdf20(undefined8 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 local_124 [4];
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
  FUN_016bdcc0(param_1,param_3,param_4,&local_120,local_124);
  FUN_016bdb60(param_1,local_118,local_124,local_120,2);
  FUN_004144d0(&local_120);
  return;
}

