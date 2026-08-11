/* Ghidra address: 017b54e0 */
/* Ghidra symbol: FUN_017b54e0 */


undefined8 * FUN_017b54e0(undefined8 *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_017b58f0(local_res8,0);
  local_38 = FUN_00498310(param_3,param_4);
  (**(code **)*local_res8)(local_res8,&local_38);
  local_58 = 10;
  FUN_00498350(&local_48,0,0,0x28);
  local_res8[8] = local_48;
  local_res8[9] = uStack_40;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

