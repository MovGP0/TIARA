/* Ghidra address: 00706350 */
/* Ghidra symbol: FUN_00706350 */


longlong * FUN_00706350(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  FUN_00682fc0(local_res8,0);
  lVar2 = (**(code **)(*local_res8 + 0x130))(local_res8);
  uVar3 = (**(code **)(*local_res8 + 0x138))(local_res8);
  lVar2 = (**(code **)(lVar2 + 0x58))(lVar2,1,param_3,uVar3);
  local_res8[8] = lVar2;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

