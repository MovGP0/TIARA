/* Ghidra address: 005a1e90 */
/* Ghidra symbol: FUN_005a1e90 */


undefined8 FUN_005a1e90(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_48 [32];
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  FUN_00417580(local_48,&DAT_0059bd38);
  local_28 = FUN_005a22c0(&PTR_FUN_0059d090,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_48);
    FUN_005a2630(local_28,local_48);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_005a32f0(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_48,&DAT_0059bd38);
  return param_2;
}

