/* Ghidra address: 00c28640 */
/* Ghidra symbol: FUN_00c28640 */


longlong FUN_00c28640(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00c1a6d0(local_res8,0,param_3);
  uVar2 = FUN_00c282a0(&LAB_00c13e08,1,local_res8);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar2 = FUN_00c249e0(&LAB_00c24800,1,local_res8);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined1 *)(local_res8 + 0x48) = 0x2c;
  *(undefined2 *)(local_res8 + 0x49) = 0;
  *(undefined2 *)(local_res8 + 0x4b) = 0;
  *(undefined2 *)(local_res8 + 0x4d) = 0;
  *(undefined2 *)(local_res8 + 0x4f) = 0;
  *(undefined1 *)(local_res8 + 0x51) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 1;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  FUN_00c1aa20(*(undefined8 *)(*(longlong *)(local_res8 + 8) + 0x50),local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

