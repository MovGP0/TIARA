/* Ghidra address: 00ac4d70 */
/* Ghidra symbol: FUN_00ac4d70 */


longlong FUN_00ac4d70(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00ac54b0(local_res8,0,param_3,param_4);
  local_20 = local_res8 + 0xbd;
  local_28 = local_res8 + 0xa8;
  FUN_00409a70(param_4 + 0xa8,local_res8 + 0xa8,(longlong)(((int)local_20 - (int)local_28) + 1));
  *(undefined4 *)(local_res8 + 0xc4) = *(undefined4 *)(param_4 + 0xc4);
  *(undefined4 *)(local_res8 + 0xc0) = *(undefined4 *)(param_4 + 0xc0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

