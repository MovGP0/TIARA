/* Ghidra address: 008101e0 */
/* Ghidra symbol: FUN_008101e0 */


longlong FUN_008101e0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00786930(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x24) = 1;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0x72) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

