/* Ghidra address: 007263e0 */
/* Ghidra symbol: FUN_007263e0 */


longlong FUN_007263e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00722380(local_res8,0,param_3);
  *(undefined2 *)(local_res8 + 0xd0) = 1;
  *(undefined4 *)(local_res8 + 0xd4) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xd8) = 0xffffffff;
  local_20 = (undefined4 *)(local_res8 + 0x110);
  *local_20 = 0x50;
  uVar2 = FUN_00721cc0();
  *(undefined8 *)(local_20 + 2) = uVar2;
  *(undefined **)(local_20 + 4) = PTR_IMAGE_DOS_HEADER_0200c280;
  *(longlong *)(local_20 + 8) = local_res8 + 0x160;
  *(undefined2 *)(local_20 + 0xc) = 0x200;
  *(longlong *)(local_20 + 10) = local_res8 + 0x360;
  *(undefined2 *)((longlong)local_20 + 0x32) = 0x200;
  *(longlong *)(local_20 + 0xe) = local_res8;
  *(code **)(local_20 + 0x10) = FUN_00726310;
  *(undefined **)(local_res8 + 0x100) = &DAT_0069b800;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

