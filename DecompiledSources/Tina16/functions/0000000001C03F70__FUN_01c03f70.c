/* Ghidra address: 01c03f70 */
/* Ghidra symbol: FUN_01c03f70 */


longlong FUN_01c03f70(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 4;
  FUN_0064cc50(local_res8,0x16);
  FUN_0064cbf0(local_res8,0x16);
  *(undefined1 *)(local_res8 + 0x329) = 0;
  FUN_0064dfe0(local_res8,1);
  local_58 = 4;
  FUN_004238d0(&local_40,4,4,4);
  *(undefined8 *)(local_res8 + 0x334) = local_40;
  *(undefined8 *)(local_res8 + 0x33c) = uStack_38;
  *(undefined1 *)(local_res8 + 0x35c) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

