/* Ghidra address: 00f6dfb0 */
/* Ghidra symbol: FUN_00f6dfb0 */


longlong FUN_00f6dfb0(longlong param_1,char param_2)

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
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x94) = 0;
  *(undefined1 *)(local_res8 + 0x71) = 0;
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0;
  *(undefined4 *)(local_res8 + 0x74) = 0;
  uVar2 = FUN_004095c0(0x50);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  uVar2 = FUN_004095c0(0x50);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

