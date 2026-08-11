/* Ghidra address: 004baae0 */
/* Ghidra symbol: FUN_004baae0 */


undefined8
FUN_004baae0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_00416740(param_4);
  local_38 = 0;
  FUN_004bad70(local_res8,param_3,uVar2,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

