/* Ghidra address: 0197be20 */
/* Ghidra symbol: FUN_0197be20 */


longlong FUN_0197be20(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

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
  *(undefined8 *)(local_res8 + 0x18) = param_4;
  *(undefined8 *)(local_res8 + 0x30) = param_3;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined4 *)(local_res8 + 0x54) = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

