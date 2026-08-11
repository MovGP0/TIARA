/* Ghidra address: 00c60740 */
/* Ghidra symbol: FUN_00c60740 */


longlong FUN_00c60740(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00c5ef40(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x2c) = 0;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x30) = local_40;
  *(undefined8 *)(local_res8 + 0x38) = uStack_38;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

