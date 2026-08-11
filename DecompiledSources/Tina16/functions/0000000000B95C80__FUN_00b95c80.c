/* Ghidra address: 00b95c80 */
/* Ghidra symbol: FUN_00b95c80 */


undefined8 FUN_00b95c80(byte *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if (local_128[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00409570(local_128[0] + 1);
    FUN_00414ff0(uVar1,local_128);
  }
  return uVar1;
}

