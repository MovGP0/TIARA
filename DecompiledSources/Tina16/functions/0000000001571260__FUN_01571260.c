/* Ghidra address: 01571260 */
/* Ghidra symbol: FUN_01571260 */


longlong FUN_01571260(longlong param_1,char param_2,longlong param_3)

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
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(local_res8 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(local_res8 + 0x48) = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(local_res8 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(local_res8 + 0x50) = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(local_res8 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(local_res8 + 0x58) = *(undefined4 *)(param_3 + 0x58);
  FUN_00414ad0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(local_res8 + 0x5c) = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(local_res8 + 0x68) = *(undefined4 *)(param_3 + 0x68);
  *(undefined8 *)(local_res8 + 8) = *(undefined8 *)(param_3 + 8);
  FUN_00414ad0(local_res8 + 0x28,*(undefined8 *)(param_3 + 0x28));
  *(undefined1 *)(local_res8 + 0x98) = *(undefined1 *)(param_3 + 0x98);
  *(undefined8 *)(local_res8 + 0x70) = *(undefined8 *)(param_3 + 0x70);
  *(undefined4 *)(local_res8 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  *(undefined8 *)(local_res8 + 0x90) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

