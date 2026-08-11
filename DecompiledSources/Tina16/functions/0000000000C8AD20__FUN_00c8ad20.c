/* Ghidra address: 00c8ad20 */
/* Ghidra symbol: FUN_00c8ad20 */


longlong FUN_00c8ad20(longlong param_1,char param_2,undefined8 *param_3)

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
  FUN_00c8bac0(local_res8,0);
  *(undefined8 *)(local_res8 + 0x20) = local_38;
  *(undefined8 *)(local_res8 + 0x28) = uStack_30;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

