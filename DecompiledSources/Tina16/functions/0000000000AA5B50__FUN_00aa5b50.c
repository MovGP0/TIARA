/* Ghidra address: 00aa5b50 */
/* Ghidra symbol: FUN_00aa5b50 */


longlong FUN_00aa5b50(longlong param_1,char param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  *(longlong *)(local_res8 + 0x20) = local_res8;
  FUN_00abedf0(local_res8,0,0);
  *(undefined1 *)(local_res8 + 0x90) = *(undefined1 *)(param_3 + 0x2c8);
  uVar2 = FUN_00610ca0(&PTR_FUN_00a90138,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  *(longlong *)(local_res8 + 0xb8) = param_3;
  *(undefined8 *)(local_res8 + 0xc0) = param_4;
  uVar2 = FUN_00a75020(&PTR_FUN_00a6c1d8,1);
  *(undefined8 *)(local_res8 + 0x298) = uVar2;
  uVar2 = FUN_00610ca0(&PTR_FUN_00a87c80,1);
  *(undefined8 *)(local_res8 + 0x1b8) = uVar2;
  uVar2 = FUN_00610d40(&LAB_00a42ac8,1,0);
  *(undefined8 *)(local_res8 + 0x1c0) = uVar2;
  uVar2 = FUN_00610ca0(&PTR_FUN_00a6a700,1);
  *(undefined8 *)(local_res8 + 0x220) = uVar2;
  uVar2 = FUN_00610d40(&LAB_00a88c98,1,0);
  *(undefined8 *)(local_res8 + 0x230) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x240) = uVar2;
  FUN_004b67b0(uVar2,0);
  uVar2 = FUN_00a94be0(&PTR_FUN_00a7dea8,1);
  *(undefined8 *)(local_res8 + 600) = uVar2;
  uVar2 = FUN_00610d40(&PTR_FUN_00a828a0,1,0);
  *(undefined8 *)(local_res8 + 0x238) = uVar2;
  uVar2 = FUN_00ac0ba0(&PTR_FUN_00a8fe40,1,local_res8);
  *(undefined8 *)(local_res8 + 0x280) = uVar2;
  uVar2 = FUN_00610ca0(&LAB_00a83fc8,1);
  *(undefined8 *)(local_res8 + 0x288) = uVar2;
  uVar2 = FUN_00610d40(&PTR_FUN_00a7f480,1,0);
  *(undefined8 *)(local_res8 + 0x2a0) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x2c0) = uVar2;
  FUN_004b67b0(uVar2,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0x2c0) + 0x49) = 1;
  uVar2 = FUN_00aa8c30(&PTR_FUN_00a93ad0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x2d0) = uVar2;
  *(undefined4 *)(local_res8 + 0x300) = 0x3f800000;
  *(undefined4 *)(local_res8 + 0x304) = 0x3f800000;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

