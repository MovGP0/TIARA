/* Ghidra address: 005c3ee0 */
/* Ghidra symbol: FUN_005c3ee0 */


undefined8 FUN_005c3ee0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 local_58 [48];
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_88;
  FUN_00417580(local_58,&DAT_005bc4e0);
  local_28 = FUN_005c6eb0(&PTR_FUN_005cca68,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_58);
    FUN_005c7220(local_28,local_58);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_005c7ee0(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_58,&DAT_005bc4e0);
  return param_2;
}

