/* Ghidra address: 012dc4a0 */
/* Ghidra symbol: FUN_012dc4a0 */


longlong FUN_012dc4a0(longlong param_1,char param_2)

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
  FUN_00414480(local_res8 + 8);
  FUN_00414480(local_res8 + 0x10);
  FUN_00414480(local_res8 + 0x18);
  FUN_00419260(local_res8 + 0x20,&DAT_012db3b8,1,1);
  FUN_00419260(local_res8 + 0x28,&DAT_012db3b8,1,1);
  FUN_00419260(local_res8 + 0x30,&DAT_012db3b8,1,1);
  **(undefined8 **)(local_res8 + 0x20) = 0;
  **(undefined8 **)(local_res8 + 0x28) = 0;
  **(undefined8 **)(local_res8 + 0x30) = 0;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  *(undefined1 *)(local_res8 + 0x39) = 0;
  *(undefined1 *)(local_res8 + 0x3a) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

