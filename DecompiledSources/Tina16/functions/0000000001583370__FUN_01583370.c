/* Ghidra address: 01583370 */
/* Ghidra symbol: FUN_01583370 */


undefined8 FUN_01583370(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_40 [24];
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  FUN_00417580(local_40,&DAT_01577a50);
  local_28 = FUN_01587090(&PTR_FUN_0158ce38,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_40);
    FUN_01587400(local_28,local_40);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_015880c0(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_40,&DAT_01577a50);
  return param_2;
}

