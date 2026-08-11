/* Ghidra address: 016a5b60 */
/* Ghidra symbol: FUN_016a5b60 */


longlong FUN_016a5b60(longlong param_1,char param_2,byte *param_3,undefined8 param_4,byte *param_5,
                     undefined1 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong local_res8;
  undefined1 auStack_258 [40];
  undefined1 *local_230;
  byte local_228 [256];
  byte local_128 [264];
  
  local_230 = auStack_258;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_5 + 1;
  pbVar4 = local_228;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_5;
    param_5 = param_5 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_258;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_230;
  }
  local_230 = puVar1;
  FUN_016a56f0(local_res8,0,local_128,param_6);
  *(undefined8 *)(local_res8 + 0x18) = param_4;
  uVar2 = FUN_00b95c80(local_228);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

