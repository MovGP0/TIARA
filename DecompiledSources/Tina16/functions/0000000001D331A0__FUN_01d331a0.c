/* Ghidra address: 01d331a0 */
/* Ghidra symbol: FUN_01d331a0 */


longlong * FUN_01d331a0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_20 [2];
  undefined2 local_1e;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)*local_res8)(local_res8,0);
  iVar2 = FUN_01d31a40(param_3);
  if (iVar2 == 0) {
    FUN_01d30e90(param_3,local_20);
    (**(code **)(*local_res8 + 0x30))(local_res8,param_3,local_1e);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

