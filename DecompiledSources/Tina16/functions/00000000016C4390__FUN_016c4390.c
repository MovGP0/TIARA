/* Ghidra address: 016c4390 */
/* Ghidra symbol: FUN_016c4390 */


void FUN_016c4390(longlong param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,byte *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_528 [256];
  byte local_428 [256];
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
  lVar2 = (ulonglong)*param_5 + 1;
  pbVar3 = local_428;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_5;
    param_5 = param_5 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_9 + 1;
  pbVar3 = local_528;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_9;
    param_9 = param_9 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_014e4d30(&DAT_014db3c8,1,local_128,local_228,local_328,local_428,param_6,param_7,
                       param_8);
  (**(code **)(**(longlong **)(param_1 + 0xa08) + 0x50))(*(longlong **)(param_1 + 0xa08),uVar1);
  if (local_528[0] != 0) {
    uVar1 = FUN_00b95c80(local_528);
    lVar2 = FUN_01d34b90(*(undefined8 *)(param_1 + 0xa08));
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
  }
  return;
}

