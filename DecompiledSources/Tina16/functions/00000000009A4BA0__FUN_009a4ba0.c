/* Ghidra address: 009a4ba0 */
/* Ghidra symbol: FUN_009a4ba0 */


longlong FUN_009a4ba0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_009a4ae0(local_res8,0);
  local_20 = (longlong *)(**(code **)*param_3)(param_3);
  while( true ) {
    cVar2 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar2 == '\0') break;
    local_30 = (**(code **)*local_20)(local_20);
    local_28 = local_30;
    FUN_0059ba60(local_res8 + 8,&local_30);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

