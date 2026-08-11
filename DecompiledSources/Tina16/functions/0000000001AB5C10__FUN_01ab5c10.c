/* Ghidra address: 01ab5c10 */
/* Ghidra symbol: FUN_01ab5c10 */


longlong FUN_01ab5c10(longlong param_1,char param_2)

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
  FUN_01ab2610(local_res8,0);
  *(undefined4 *)(local_res8 + 0x110) = 1;
  *(undefined4 *)(local_res8 + 0x118) = 0xffffd8f0;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x138) = local_40;
  *(undefined8 *)(local_res8 + 0x140) = uStack_38;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

