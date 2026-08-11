/* Ghidra address: 00a44d00 */
/* Ghidra symbol: FUN_00a44d00 */


undefined8 * FUN_00a44d00(undefined8 *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[1] = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[2] = uVar2;
  (**(code **)*local_res8)(local_res8);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

