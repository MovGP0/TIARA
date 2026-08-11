/* Ghidra address: 00562190 */
/* Ghidra symbol: FUN_00562190 */


longlong * FUN_00562190(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  FUN_00419260(param_2,&DAT_0053d8c0,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    local_28 = (**(code **)*local_20)(local_20);
    *(undefined8 *)(*param_2 + (longlong)local_res18 * 8) = local_28;
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return param_2;
}

