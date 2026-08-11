/* Ghidra address: 016a6370 */
/* Ghidra symbol: FUN_016a6370 */


longlong FUN_016a6370(longlong param_1,char param_2,byte *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong local_res8;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  byte local_128 [264];
  
  local_130 = auStack_158;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_158;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_130;
  }
  local_130 = puVar1;
  uVar2 = FUN_00b95c80(local_128);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

