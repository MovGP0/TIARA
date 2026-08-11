/* Ghidra address: 01768a10 */
/* Ghidra symbol: FUN_01768a10 */


longlong FUN_01768a10(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(undefined8 *)(local_res8 + 8) = 0;
  FUN_00414480(local_res8 + 0x40);
  FUN_00414480(local_res8 + 0x48);
  *(undefined1 *)(local_res8 + 99) = 1;
  *(undefined1 *)(local_res8 + 0x61) = 0;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  uVar2 = FUN_00448ed0();
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  uVar2 = FUN_00448ed0();
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  FUN_00414480(local_res8 + 0x30);
  *(undefined4 *)(local_res8 + 0x98) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x9c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xa0) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

