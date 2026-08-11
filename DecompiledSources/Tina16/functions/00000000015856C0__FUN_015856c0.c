/* Ghidra address: 015856c0 */
/* Ghidra symbol: FUN_015856c0 */


undefined8 FUN_015856c0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 local_6a [66];
  undefined8 local_28;
  longlong *local_20;
  
  local_80 = auStack_a8;
  FUN_00417580(local_6a,&DAT_015764a8);
  local_28 = FUN_01585b30(&PTR_FUN_0157b5f0,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_6a);
    FUN_01585ea0(local_28,local_6a);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_01586b90(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_6a,&DAT_015764a8);
  return param_2;
}

