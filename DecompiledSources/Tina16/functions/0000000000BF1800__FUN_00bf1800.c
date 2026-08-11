/* Ghidra address: 00bf1800 */
/* Ghidra symbol: FUN_00bf1800 */


longlong FUN_00bf1800(longlong param_1,char param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = auStack_68;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = local_38;
  *(undefined8 *)(local_res8 + 0x10) = uStack_30;
  *(undefined8 *)(local_res8 + 0x18) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

