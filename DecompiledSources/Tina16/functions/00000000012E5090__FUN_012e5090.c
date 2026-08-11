/* Ghidra address: 012e5090 */
/* Ghidra symbol: FUN_012e5090 */


longlong FUN_012e5090(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  *(undefined1 *)(local_res8 + 8) = param_3;
  *(undefined1 *)(local_res8 + 9) = param_4;
  *(undefined1 *)(local_res8 + 10) = param_5;
  *(undefined4 *)(local_res8 + 0xc) = param_6;
  *(undefined4 *)(local_res8 + 0x10) = param_7;
  *(undefined8 *)(local_res8 + 0x18) = param_8;
  *(undefined8 *)(local_res8 + 0x20) = param_9;
  *(undefined8 *)(local_res8 + 0x28) = param_10;
  *(undefined8 *)(local_res8 + 0x30) = param_11;
  *(undefined8 *)(local_res8 + 0x38) = param_12;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

