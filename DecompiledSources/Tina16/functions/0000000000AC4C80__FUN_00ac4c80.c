/* Ghidra address: 00ac4c80 */
/* Ghidra symbol: FUN_00ac4c80 */


longlong FUN_00ac4c80(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

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
  local_38 = param_5;
  local_30 = param_6;
  FUN_00ac53c0(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x68) = param_4;
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

