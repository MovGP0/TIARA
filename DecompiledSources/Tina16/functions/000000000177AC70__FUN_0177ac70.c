/* Ghidra address: 0177ac70 */
/* Ghidra symbol: FUN_0177ac70 */


undefined8 FUN_0177ac70(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_28 = FUN_00eedaf0(&PTR_FUN_00ef1690,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,&local_30);
    FUN_00eede60(local_28,local_30);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00eeea50(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_004144d0(&local_30);
  return param_2;
}

