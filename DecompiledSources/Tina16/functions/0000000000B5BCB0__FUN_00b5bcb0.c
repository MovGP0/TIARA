/* Ghidra address: 00b5bcb0 */
/* Ghidra symbol: FUN_00b5bcb0 */


longlong FUN_00b5bcb0(longlong param_1,char param_2,longlong param_3)

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
  *(longlong *)(local_res8 + 8) = param_3;
  *(undefined8 *)(local_res8 + 0x18) = *(undefined8 *)(param_3 + 8);
  uVar2 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  *(undefined8 *)(local_res8 + 0x98) = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x58);
  *(undefined8 *)(local_res8 + 0x88) = 0;
  uVar2 = FUN_00b41d60(&DAT_00b40980,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  *(undefined1 *)(local_res8 + 0x3c) = 0;
  *(undefined4 *)(local_res8 + 0x40) = 0;
  *(undefined1 *)(local_res8 + 0x44) = 0;
  *(undefined1 *)(local_res8 + 0x46) = 0;
  *(undefined1 *)(local_res8 + 0x47) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x50) = 0xffffffff;
  FUN_00414520(local_res8 + 0x58);
  *(undefined4 *)(local_res8 + 0x60) = 0xffffffff;
  FUN_004144d0(local_res8 + 0x68);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

