/* Ghidra address: 005607a0 */
/* Ghidra symbol: FUN_005607a0 */


undefined8 FUN_005607a0(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_00417740(param_1,&DAT_00527bf8);
  FUN_00538080(local_118,&DAT_00401290,uVar1);
  return param_1;
}

