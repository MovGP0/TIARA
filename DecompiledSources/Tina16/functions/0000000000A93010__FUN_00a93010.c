/* Ghidra address: 00a93010 */
/* Ghidra symbol: FUN_00a93010 */


longlong FUN_00a93010(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00a77f10(local_res8,0,*(undefined8 *)(param_4 + 8));
  *(longlong *)(local_res8 + 0x28) = param_3;
  *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(local_res8 + 0x18) = *(undefined8 *)(*(longlong *)(local_res8 + 0x28) + 0x20);
  *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(param_4 + 0x38);
  *(undefined1 *)(local_res8 + 0x61) = *(undefined1 *)(param_4 + 0x61);
  *(undefined1 *)(local_res8 + 0x40) = *(undefined1 *)(param_4 + 0x40);
  *(undefined1 *)(local_res8 + 0x4c) = *(undefined1 *)(param_4 + 0x4c);
  *(undefined8 *)(local_res8 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined8 *)(local_res8 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined1 *)(local_res8 + 0x60) = *(undefined1 *)(param_4 + 0x60);
  *(undefined4 *)(local_res8 + 100) = *(undefined4 *)(param_4 + 100);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

