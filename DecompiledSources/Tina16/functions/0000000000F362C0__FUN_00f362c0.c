/* Ghidra address: 00f362c0 */
/* Ghidra symbol: FUN_00f362c0 */


longlong * FUN_00f362c0(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  FUN_00419260(param_2,&DAT_00420fd8,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    local_24 = (**(code **)*local_20)(local_20);
    *(undefined4 *)(*param_2 + (longlong)local_res18 * 4) = local_24;
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return param_2;
}

