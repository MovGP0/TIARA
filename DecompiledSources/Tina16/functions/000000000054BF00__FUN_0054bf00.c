/* Ghidra address: 0054bf00 */
/* Ghidra symbol: FUN_0054bf00 */


undefined8
FUN_0054bf00(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  uVar2 = FUN_0054bfe0(local_res8);
  uVar2 = FUN_005883a0(uVar2);
  *param_5 = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

