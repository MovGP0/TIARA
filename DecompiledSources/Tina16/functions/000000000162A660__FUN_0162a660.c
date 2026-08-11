/* Ghidra address: 0162a660 */
/* Ghidra symbol: FUN_0162a660 */


longlong FUN_0162a660(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4)

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
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 0x19) = 0;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x1c) = param_3;
  *(undefined4 *)(local_res8 + 0x20) = param_4;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar2;
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(int *)(local_res8 + 0x4c) = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10) + -1;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0xb8) = 0;
  *(undefined4 *)(local_res8 + 0x5c) = 0;
  *(undefined4 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined4 *)(local_res8 + 100) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x1a) = 1;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  *(undefined4 *)(local_res8 + 0x24) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x58) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x54) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x88) = 0;
  *(undefined8 *)(local_res8 + 8) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

