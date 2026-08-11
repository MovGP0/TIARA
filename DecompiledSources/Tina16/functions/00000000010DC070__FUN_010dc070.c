/* Ghidra address: 010dc070 */
/* Ghidra symbol: FUN_010dc070 */


longlong FUN_010dc070(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_010dbf40(local_res8,0,param_3,param_4);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20 = (longlong *)FUN_017bcd00(0,&PTR_FUN_017bca38,0xffffffff,0);
  *(longlong **)(local_res8 + 0x78) = local_20;
  (**(code **)(*local_20 + 0x208))(local_20,0,0,0);
  (**(code **)(*local_20 + 0x208))(local_20,1,1,0);
  *(undefined1 *)(local_res8 + 0x70) = 0;
  *(undefined1 *)(local_res8 + 0x71) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

