/* Ghidra address: 019f2df0 */
/* Ghidra symbol: FUN_019f2df0 */


undefined8 FUN_019f2df0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar2 = (uint)local_128[0];
  if (uVar2 != 0) {
    pbVar3 = local_128;
    do {
      pbVar3 = pbVar3 + 1;
      if (*pbVar3 == 0x21) {
        *pbVar3 = 0x5f;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_00414ff0(param_2,local_128);
  return param_2;
}

