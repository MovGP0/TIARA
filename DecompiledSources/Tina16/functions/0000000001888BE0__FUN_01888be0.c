/* Ghidra address: 01888be0 */
/* Ghidra symbol: FUN_01888be0 */


longlong FUN_01888be0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined1 param_5,undefined8 param_6)

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
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  *(undefined4 *)(local_res8 + 0x30) = param_4;
  *(undefined1 *)(local_res8 + 0x34) = param_5;
  *(undefined8 *)(local_res8 + 0x38) = param_6;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

