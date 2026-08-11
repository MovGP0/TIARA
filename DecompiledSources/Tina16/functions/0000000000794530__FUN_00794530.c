/* Ghidra address: 00794530 */
/* Ghidra symbol: FUN_00794530 */


undefined8 FUN_00794530(undefined8 param_1,char param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong *local_20;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_007942a0(local_res8,0,0,param_4);
  local_20 = (longlong *)(**(code **)*param_3)(param_3);
  while( true ) {
    cVar2 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar2 == '\0') break;
    (**(code **)*local_20)(local_20,&local_40);
    FUN_00794a10(local_res8,local_40,local_38);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

