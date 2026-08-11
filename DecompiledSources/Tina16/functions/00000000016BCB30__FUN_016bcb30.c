/* Ghidra address: 016bcb30 */
/* Ghidra symbol: FUN_016bcb30 */


longlong FUN_016bcb30(longlong param_1,char param_2,byte *param_3)

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
  FUN_016bc650(local_res8,0,local_128);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

