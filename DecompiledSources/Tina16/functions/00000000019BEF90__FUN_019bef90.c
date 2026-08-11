/* Ghidra address: 019bef90 */
/* Ghidra symbol: FUN_019bef90 */


longlong FUN_019bef90(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5,undefined1 param_6)

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
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  *(longlong *)(local_res8 + 0x18) = param_5;
  *(bool *)(local_res8 + 0x20) = param_5 != 0;
  *(undefined1 *)(local_res8 + 0x21) = param_6;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined8 *)(local_res8 + 0x38) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

