/* Ghidra address: 0112c9e0 */
/* Ghidra symbol: FUN_0112c9e0 */


longlong FUN_0112c9e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_0112c250(&local_48,param_3);
  *(undefined8 *)(local_res8 + 8) = local_48;
  *(undefined8 *)(local_res8 + 0x10) = uStack_40;
  *(undefined4 *)(local_res8 + 0x18) = uStack_38;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

