/* Ghidra address: 006eda50 */
/* Ghidra symbol: FUN_006eda50 */


longlong * FUN_006eda50(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = (**(code **)(*local_res8 + 0x50))(local_res8);
  FUN_004b1b60(local_res8,0,uVar2);
  local_res8[5] = param_3;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

