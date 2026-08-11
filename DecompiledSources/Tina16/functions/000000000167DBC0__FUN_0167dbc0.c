/* Ghidra address: 0167dbc0 */
/* Ghidra symbol: FUN_0167dbc0 */


undefined8 FUN_0167dbc0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_40 [24];
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_28 = FUN_0167dfb0(&PTR_FUN_0166b3d8,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_40);
    FUN_0167e320(local_28,local_40);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_0167edd0(local_28,param_2);
  FUN_00410f20(local_28);
  return param_2;
}

