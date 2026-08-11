/* Ghidra address: 00b505b0 */
/* Ghidra symbol: FUN_00b505b0 */


longlong FUN_00b505b0(longlong param_1,char param_2,undefined8 param_3,undefined2 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00b4d010(local_res8,0,param_3,param_5);
  *(undefined2 *)(local_res8 + 0x3e) = param_4;
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(undefined1 *)(local_res8 + 0x3c) = 0;
  *(undefined1 *)(local_res8 + 0x40) = 0;
  *(undefined1 *)(local_res8 + 0x41) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

