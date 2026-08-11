/* Ghidra address: 013c1c50 */
/* Ghidra symbol: FUN_013c1c50 */


longlong FUN_013c1c50(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 0x30) = 0;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  FUN_00414480(local_res8 + 0x20);
  *(undefined4 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

