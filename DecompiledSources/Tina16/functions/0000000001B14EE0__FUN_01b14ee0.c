/* Ghidra address: 01b14ee0 */
/* Ghidra symbol: FUN_01b14ee0 */


undefined8 FUN_01b14ee0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_40 [24];
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  FUN_00417580(local_40,&DAT_01b008e8);
  local_28 = FUN_01143ea0(&PTR_FUN_01147758,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_40);
    FUN_01144210(local_28,local_40);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_01144ed0(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_40,&DAT_01b008e8);
  return param_2;
}

