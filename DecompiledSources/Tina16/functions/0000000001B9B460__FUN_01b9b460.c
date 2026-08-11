/* Ghidra address: 01b9b460 */
/* Ghidra symbol: FUN_01b9b460 */


longlong FUN_01b9b460(longlong param_1,char param_2,byte *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong local_res8;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  byte local_128 [264];
  
  local_130 = auStack_158;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_158;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_130;
  }
  local_130 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00414ff0(local_res8 + 8,local_128);
  *(undefined8 *)(local_res8 + 0x108) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

