/* Ghidra address: 00ac2e70 */
/* Ghidra symbol: FUN_00ac2e70 */


longlong FUN_00ac2e70(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = 0;
  local_30 = 0;
  FUN_00ac4c80(local_res8,0,param_3,0);
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  *(undefined1 *)(local_res8 + 0xf0) = 1;
  *(undefined4 *)(local_res8 + 0xf4) = 0;
  *(undefined4 *)(local_res8 + 0xe0) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xdc) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

