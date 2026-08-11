/* Ghidra address: 00be2130 */
/* Ghidra symbol: FUN_00be2130 */


undefined8 FUN_00be2130(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_3c [20];
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_28 = FUN_00be2510(&PTR_FUN_00bdcb40,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_3c);
    FUN_00be2880(local_28,local_3c);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00be3330(local_28,param_2);
  FUN_00410f20(local_28);
  return param_2;
}

