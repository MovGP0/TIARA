/* Ghidra address: 017892f0 */
/* Ghidra symbol: FUN_017892f0 */


undefined8 FUN_017892f0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = FUN_017896c0(&PTR_FUN_01786f60,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    local_2c = (**(code **)*local_20)(local_20);
    FUN_01789a30(local_28,local_2c);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_0178a3e0(local_28,param_2);
  FUN_00410f20(local_28);
  return param_2;
}

