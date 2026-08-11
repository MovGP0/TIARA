/* Ghidra address: 00a72500 */
/* Ghidra symbol: FUN_00a72500 */


longlong FUN_00a72500(longlong param_1,char param_2,longlong param_3)

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
  *(undefined1 *)(local_res8 + 8) = *(undefined1 *)(param_3 + 8);
  FUN_00414ad0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(local_res8 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  FUN_00414ad0(local_res8 + 0x28,*(undefined8 *)(param_3 + 0x28));
  *(undefined4 *)(local_res8 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

