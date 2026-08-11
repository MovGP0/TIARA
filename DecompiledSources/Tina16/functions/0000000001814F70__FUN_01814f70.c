/* Ghidra address: 01814f70 */
/* Ghidra symbol: FUN_01814f70 */


longlong * FUN_01814f70(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
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
  cVar2 = (**(code **)(*local_res8 + 0x58))(local_res8);
  if (cVar2 != '\0') {
    FUN_01815030(local_res8,param_3);
  }
  FUN_004b1710(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

