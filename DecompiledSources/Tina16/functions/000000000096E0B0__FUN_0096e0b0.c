/* Ghidra address: 0096e0b0 */
/* Ghidra symbol: FUN_0096e0b0 */


longlong FUN_0096e0b0(longlong param_1,char param_2,undefined1 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16
                     ,undefined8 param_17,undefined8 param_18)

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
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 0x50) = param_3;
  *(undefined8 *)(local_res8 + 0x60) = param_4;
  *(undefined8 *)(local_res8 + 0x68) = param_5;
  *(undefined8 *)(local_res8 + 0x70) = param_6;
  *(undefined8 *)(local_res8 + 0x78) = param_7;
  *(undefined8 *)(local_res8 + 0x80) = param_8;
  *(undefined8 *)(local_res8 + 0x20) = param_9;
  *(undefined8 *)(local_res8 + 0x28) = param_10;
  *(undefined8 *)(local_res8 + 0x30) = param_11;
  *(undefined8 *)(local_res8 + 0x38) = param_12;
  *(undefined8 *)(local_res8 + 0x40) = param_13;
  FUN_00414b90(local_res8 + 0x88,param_14);
  *(undefined8 *)(local_res8 + 0x48) = param_15;
  *(undefined8 *)(local_res8 + 0x58) = param_16;
  FUN_00414b90(local_res8 + 0x18,param_17);
  FUN_00414b90(local_res8 + 0x10,param_18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

