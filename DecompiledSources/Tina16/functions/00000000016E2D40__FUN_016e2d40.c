/* Ghidra address: 016e2d40 */
/* Ghidra symbol: FUN_016e2d40 */


longlong FUN_016e2d40(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

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
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined1 *)(local_res8 + 0x44) = param_5;
  *(undefined2 *)(local_res8 + 0x38) = 0;
  *(undefined2 *)(local_res8 + 0x3a) = 0;
  *(undefined4 *)(local_res8 + 0x3c) = 0xfffffff6;
  *(undefined8 *)(local_res8 + 0x48) = param_3;
  *(undefined8 *)(local_res8 + 0x58) = param_4;
  *(undefined8 *)(local_res8 + 0x50) = param_6;
  *(undefined4 *)(local_res8 + 0x40) = param_7;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

