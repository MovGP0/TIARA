/* Ghidra address: 016a5170 */
/* Ghidra symbol: FUN_016a5170 */


longlong FUN_016a5170(longlong param_1,char param_2,byte *param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  byte *pbVar2;
  longlong local_res8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_130;
  byte local_128 [264];
  
  local_130 = auStack_168;
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_00414630(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_148 = param_6;
  FUN_016a4be0(local_res8,0,local_128,param_5);
  *(undefined4 *)(local_res8 + 0x28) = param_4;
  FUN_004144d0(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

