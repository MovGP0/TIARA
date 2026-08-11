/* Ghidra address: 00aa5de0 */
/* Ghidra symbol: FUN_00aa5de0 */


longlong FUN_00aa5de0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined1 *)(local_res8 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
  *(undefined1 *)(local_res8 + 0xb1) = *(undefined1 *)(param_3 + 0xb1);
  *(undefined8 *)(local_res8 + 0x2a8) = *(undefined8 *)(param_3 + 0x2a8);
  *(undefined8 *)(local_res8 + 0x2d0) = *(undefined8 *)(param_3 + 0x2d0);
  *(undefined1 *)(local_res8 + 700) = 1;
  local_20 = local_res8 + 0x168;
  local_28 = local_res8 + 0x91;
  FUN_00409a70(param_3 + 0x91,local_res8 + 0x91,(longlong)(((int)local_20 - (int)local_28) + 4));
  FUN_00414ad0(local_res8 + 0x170,*(undefined8 *)(param_3 + 0x170));
  uVar2 = FUN_00610ca0(&PTR_FUN_00a87c80,1);
  *(undefined8 *)(local_res8 + 0x1b8) = uVar2;
  uVar2 = FUN_00610d40(&LAB_00a42ac8,1,0);
  *(undefined8 *)(local_res8 + 0x1c0) = uVar2;
  uVar2 = FUN_00610ca0(&PTR_FUN_00a6a700,1);
  *(undefined8 *)(local_res8 + 0x220) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x240) = uVar2;
  uVar2 = FUN_00610d40(&PTR_FUN_00a828a0,1,0);
  *(undefined8 *)(local_res8 + 0x238) = uVar2;
  uVar2 = FUN_00610ca0(&LAB_00a83fc8,1);
  *(undefined8 *)(local_res8 + 0x288) = uVar2;
  *(longlong *)(local_res8 + 0x20) = local_res8;
  FUN_00abeeb0(local_res8,0,0,param_3);
  *(undefined4 *)(local_res8 + 0x300) = 0x3f800000;
  *(undefined4 *)(local_res8 + 0x304) = 0x3f800000;
  *(undefined1 *)(local_res8 + 0x60) = *(undefined1 *)(param_3 + 0x60);
  FUN_00aa6130(local_res8,*(undefined1 *)(param_3 + 0x90));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

