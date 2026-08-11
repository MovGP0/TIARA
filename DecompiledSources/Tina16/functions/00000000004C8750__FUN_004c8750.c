/* Ghidra address: 004c8750 */
/* Ghidra symbol: FUN_004c8750 */


undefined8 FUN_004c8750(undefined8 param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = auStack_78;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_58 = &local_38;
  FUN_004c8850(local_res8,0,param_3,PTR_DAT_02004830);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

