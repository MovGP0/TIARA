/* Ghidra address: 006216c0 */
/* Ghidra symbol: FUN_006216c0 */


undefined8 * FUN_006216c0(undefined8 *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined1 *)(local_res8 + 3) = 1;
  local_28 = FUN_006261a0();
  local_20 = *local_res8;
  uVar2 = FUN_00621420(local_28,local_20);
  FUN_00621860(local_res8,0,uVar2,0);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

