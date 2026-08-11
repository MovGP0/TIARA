/* Ghidra address: 0040ef90 */
/* Ghidra symbol: FUN_0040ef90 */


undefined8 FUN_0040ef90(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_004154b0(&local_120,local_118,0);
  uVar1 = FUN_0040f100(param_1,local_120,param_3);
  FUN_004144d0(&local_120);
  return uVar1;
}

