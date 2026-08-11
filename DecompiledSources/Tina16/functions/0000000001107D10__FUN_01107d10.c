/* Ghidra address: 01107d10 */
/* Ghidra symbol: FUN_01107d10 */


longlong FUN_01107d10(longlong param_1,char param_2,byte *param_3,undefined1 param_4,byte *param_5)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong local_res8;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined1 local_5c;
  byte local_5b [10];
  undefined1 local_51;
  byte local_50 [48];
  
  local_70 = auStack_98;
  uVar2 = (ulonglong)*param_3;
  if (0x27 < uVar2) {
    uVar2 = 0x28;
  }
  local_51 = (undefined1)uVar2;
  pbVar3 = local_50;
  for (; param_3 = param_3 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_3;
    pbVar3 = pbVar3 + 1;
  }
  uVar2 = (ulonglong)*param_5;
  if (9 < uVar2) {
    uVar2 = 10;
  }
  local_5c = (undefined1)uVar2;
  pbVar3 = local_5b;
  for (; param_5 = param_5 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_5;
    pbVar3 = pbVar3 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  FUN_00415020(local_res8 + 8,&local_51,0x28);
  *(undefined1 *)(local_res8 + 0x31) = param_4;
  FUN_00415020(local_res8 + 0x32,&local_5c,10);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

