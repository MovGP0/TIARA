/* Ghidra address: 016c4aa0 */
/* Ghidra symbol: FUN_016c4aa0 */


void FUN_016c4aa0(longlong param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_328 [256];
  byte local_228 [256];
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_228;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar3 = local_328;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00414630(param_5);
  uVar1 = FUN_016c4880(&PTR_FUN_016b4318,1,local_128,local_228,local_328,param_5,param_6,
                       *(undefined8 *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x50))(*(longlong **)(param_1 + 0xa10),uVar1);
  FUN_004144d0(&param_5);
  return;
}

