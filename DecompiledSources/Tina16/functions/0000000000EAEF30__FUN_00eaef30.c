/* Ghidra address: 00eaef30 */
/* Ghidra symbol: FUN_00eaef30 */


undefined8 FUN_00eaef30(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(local_38,&DAT_00eab588);
  local_28 = FUN_00eb0fe0(&PTR_FUN_00eb46e8,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_38);
    FUN_00eb1350(local_28,local_38);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00eb2000(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_38,&DAT_00eab588);
  return param_2;
}

