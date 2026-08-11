/* Ghidra address: 01602290 */
/* Ghidra symbol: FUN_01602290 */


undefined8 FUN_01602290(undefined8 param_1,byte *param_2,undefined1 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  byte local_128 [272];
  
  local_130 = auStack_158;
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  uVar3 = FUN_016020d0(param_1,local_128,param_3);
  return uVar3;
}

