/* Ghidra address: 0136cf80 */
/* Ghidra symbol: FUN_0136cf80 */


longlong FUN_0136cf80(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01364e80(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 0x24) = 0;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x28) = local_40;
  *(undefined8 *)(local_res8 + 0x30) = uStack_38;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

