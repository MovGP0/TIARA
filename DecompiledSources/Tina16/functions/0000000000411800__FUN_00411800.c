/* Ghidra address: 00411800 */
/* Ghidra symbol: FUN_00411800 */


undefined8 FUN_00411800(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_128 [264];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_0041dd20(param_1,local_128);
  return param_1;
}

