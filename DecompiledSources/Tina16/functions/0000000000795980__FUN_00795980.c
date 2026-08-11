/* Ghidra address: 00795980 */
/* Ghidra symbol: FUN_00795980 */


longlong * FUN_00795980(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_38 [24];
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(local_38,&DAT_0076f818);
  FUN_00419260(param_2,&DAT_0076f908,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_38);
    FUN_00417c40(*param_2 + (longlong)local_res18 * 0x18,local_38,&DAT_0076f818);
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00417740(local_38,&DAT_0076f818);
  return param_2;
}

