/* Ghidra address: 00a952f0 */
/* Ghidra symbol: FUN_00a952f0 */


longlong FUN_00a952f0(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

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
  FUN_00ac2700(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x1ac) = *(undefined4 *)(param_4 + 0x1ac);
  *(undefined4 *)(local_res8 + 0x1b0) = *(undefined4 *)(param_4 + 0x1b0);
  *(undefined1 *)(local_res8 + 0x1a9) = *(undefined1 *)(param_4 + 0x1a9);
  *(undefined1 *)(local_res8 + 0x1aa) = *(undefined1 *)(param_4 + 0x1aa);
  *(undefined8 *)(local_res8 + 0x198) = *(undefined8 *)(param_4 + 0x198);
  FUN_00414ad0(local_res8 + 400,*(undefined8 *)(param_4 + 400));
  *(undefined1 *)(local_res8 + 0x1bc) = *(undefined1 *)(param_4 + 0x1bc);
  FUN_00414ad0(local_res8 + 0x1c0,*(undefined8 *)(param_4 + 0x1c0));
  *(undefined1 *)(local_res8 + 0x1d1) = *(undefined1 *)(param_4 + 0x1d1);
  *(undefined4 *)(local_res8 + 0x1b4) = *(undefined4 *)(param_4 + 0x1b4);
  *(undefined4 *)(local_res8 + 0x1b8) = *(undefined4 *)(param_4 + 0x1b8);
  *(undefined8 *)(local_res8 + 0x1a0) = *(undefined8 *)(param_4 + 0x1a0);
  *(undefined1 *)(local_res8 + 0x1d0) = *(undefined1 *)(param_4 + 0x1d0);
  *(undefined1 *)(local_res8 + 0x1a8) = *(undefined1 *)(param_4 + 0x1a8);
  *(undefined1 *)(local_res8 + 0x1bd) = *(undefined1 *)(param_4 + 0x1bd);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

