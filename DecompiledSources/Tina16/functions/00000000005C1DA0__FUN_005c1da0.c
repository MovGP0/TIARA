/* Ghidra address: 005c1da0 */
/* Ghidra symbol: FUN_005c1da0 */


longlong * FUN_005c1da0(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 local_58 [56];
  longlong *local_20;
  
  local_60 = auStack_88;
  FUN_00417580(local_58,&DAT_005bc868);
  FUN_00419260(param_2,&DAT_005bc960,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_58);
    FUN_00417c40(*param_2 + (longlong)local_res18 * 0x38,local_58,&DAT_005bc868);
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00417740(local_58,&DAT_005bc868);
  return param_2;
}

