/* Ghidra address: 00852c70 */
/* Ghidra symbol: FUN_00852c70 */


longlong * FUN_00852c70(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_30 [16];
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(local_30,&DAT_00850be8);
  FUN_00419260(param_2,&DAT_00850cd0,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_30);
    FUN_00417c40(*param_2 + (longlong)local_res18 * 0x10,local_30,&DAT_00850be8);
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00417740(local_30,&DAT_00850be8);
  return param_2;
}

