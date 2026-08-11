/* Ghidra address: 014e4d30 */
/* Ghidra symbol: FUN_014e4d30 */


longlong FUN_014e4d30(longlong param_1,char param_2,byte *param_3,byte *param_4,byte *param_5,
                     byte *param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong local_res8;
  undefined1 auStack_458 [40];
  undefined1 *local_430;
  byte local_428 [256];
  byte local_328 [256];
  byte local_228 [256];
  byte local_128 [264];
  
  local_430 = auStack_458;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_4 + 1;
  pbVar4 = local_228;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_4;
    param_4 = param_4 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_5 + 1;
  pbVar4 = local_328;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_5;
    param_5 = param_5 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_6 + 1;
  pbVar4 = local_428;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_6;
    param_6 = param_6 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_458;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_430;
  }
  local_430 = puVar1;
  uVar2 = FUN_00b95c80(local_128);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_00b95c80(local_228);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00b95c80(local_328);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_00b95c80(local_428);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  *(undefined1 *)(local_res8 + 0x30) = param_7;
  *(undefined1 *)(local_res8 + 0x31) = param_8;
  *(undefined1 *)(local_res8 + 0x32) = param_9;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

