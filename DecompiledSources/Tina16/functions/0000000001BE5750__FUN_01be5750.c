/* Ghidra address: 01be5750 */
/* Ghidra symbol: FUN_01be5750 */


longlong * FUN_01be5750(longlong *param_1,char param_2,longlong param_3)

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
  FUN_01be1570(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x400;
  FUN_0064dbe0(local_res8,0);
  FUN_0064c650(local_res8,0);
  (**(code **)(*local_res8 + 0x328))(local_res8,2);
  FUN_0065bb50(local_res8,0);
  FUN_0069fa90(local_res8,0xf);
  FUN_0069fac0(local_res8,1);
  FUN_0069fae0(local_res8,1);
  FUN_01c02860(local_res8,0);
  FUN_01c02820(local_res8,0);
  (**(code **)(*local_res8 + 0x118))(local_res8,1);
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_01bf3cc0);
  if (cVar2 != '\0') {
    FUN_01c02120(local_res8,*(undefined8 *)(param_3 + 0x4a0));
  }
  FUN_01be7180(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

