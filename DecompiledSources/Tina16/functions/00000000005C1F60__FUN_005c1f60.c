/* Ghidra address: 005c1f60 */
/* Ghidra symbol: FUN_005c1f60 */


undefined8 FUN_005c1f60(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined1 local_60 [56];
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_98;
  FUN_00417580(local_60,&DAT_005bc868);
  local_28 = FUN_005c4770(&PTR_FUN_005c9d08,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_60);
    FUN_005c4ae0(local_28,local_60);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_005c57b0(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_60,&DAT_005bc868);
  return param_2;
}

