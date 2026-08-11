/* Ghidra address: 016a4e90 */
/* Ghidra symbol: FUN_016a4e90 */


longlong FUN_016a4e90(longlong param_1,char param_2,byte *param_3,byte *param_4,undefined8 param_5,
                     undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong local_res8;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined1 *local_230;
  byte local_228 [256];
  byte local_128 [264];
  
  local_230 = auStack_268;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar3 = local_228;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_4;
    param_4 = param_4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00414630(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_248 = param_6;
  FUN_016a4be0(local_res8,0,local_128,param_5);
  uVar1 = FUN_00b95c80(local_228);
  *(undefined8 *)(local_res8 + 0x28) = uVar1;
  FUN_004144d0(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

