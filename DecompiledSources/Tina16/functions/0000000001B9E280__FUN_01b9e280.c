/* Ghidra address: 01b9e280 */
/* Ghidra symbol: FUN_01b9e280 */


void FUN_01b9e280(longlong param_1,byte *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = FUN_01d347d0(param_1,*(int *)(param_1 + 0x10) + -1);
  uVar1 = FUN_01b9e160(&DAT_01b9d2b0,1,local_128,param_3);
  (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x50))(*(longlong **)(lVar2 + 0x10),uVar1);
  return;
}

