/* Ghidra address: 004ed390 */
/* Ghidra symbol: FUN_004ed390 */


undefined8 FUN_004ed390(undefined8 param_1,char param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined4 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(&local_30,&DAT_004a5608);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_004ed270(local_res8,0,0,0);
  local_20 = (longlong *)(**(code **)*param_3)(param_3);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,&local_30);
    FUN_004ed9d0(local_res8,local_30,local_28);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00417740(&local_30,&DAT_004a5608);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

