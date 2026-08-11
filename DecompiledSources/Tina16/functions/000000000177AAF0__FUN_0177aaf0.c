/* Ghidra address: 0177aaf0 */
/* Ghidra symbol: FUN_0177aaf0 */


longlong * FUN_0177aaf0(undefined8 *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (undefined *)0x0;
  FUN_00419260(param_2,&DAT_01766748,1,(longlong)param_3);
  local_res18 = 0;
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,&local_28);
    FUN_00414bf0(*param_2 + (longlong)local_res18 * 8,local_28);
    local_res18 = local_res18 + 1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_004144d0(&local_28);
  return param_2;
}

