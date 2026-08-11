/* Ghidra address: 016a4be0 */
/* Ghidra symbol: FUN_016a4be0 */


longlong FUN_016a4be0(longlong param_1,char param_2,byte *param_3,undefined8 param_4,
                     longlong param_5)

{
  longlong lVar1;
  byte *pbVar2;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  byte local_128 [264];
  
  local_130 = auStack_158;
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  local_res20 = param_4;
  FUN_00414630(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_016a49b0(local_res8,0,local_128);
  FUN_00414bf0(local_res8 + 0x10,local_res20);
  FUN_00414bf0(local_res8 + 0x18,*(undefined8 *)(local_res8 + 0x10));
  if (param_5 == 0) {
    *(undefined4 *)(local_res8 + 0x20) = 0;
  }
  else {
    *(int *)(local_res8 + 0x20) = *(int *)(param_5 + 0x244) - *(int *)(param_5 + 0x240);
  }
  FUN_004144d0(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

