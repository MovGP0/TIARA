/* Ghidra address: 009da9e0 */
/* Ghidra symbol: FUN_009da9e0 */


longlong FUN_009da9e0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5)

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
  *(undefined1 *)(local_res8 + 0x70) = param_5;
  *(undefined8 *)(local_res8 + 0x68) = param_3;
  *(undefined1 *)(local_res8 + 0xb1) = 1;
  *(undefined1 *)(local_res8 + 0xb0) = 1;
  FUN_009d4b10(local_res8,0,param_4,local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

