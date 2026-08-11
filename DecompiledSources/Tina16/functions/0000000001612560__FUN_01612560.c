/* Ghidra address: 01612560 */
/* Ghidra symbol: FUN_01612560 */


longlong FUN_01612560(longlong param_1,char param_2)

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
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 10) = 0;
  *(undefined4 *)(local_res8 + 0xc) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x20) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

