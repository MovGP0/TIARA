/* Ghidra address: 0078f240 */
/* Ghidra symbol: FUN_0078f240 */


undefined8 FUN_0078f240(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(local_38,&DAT_00767418);
  local_28 = FUN_007a1820(&PTR_FUN_007b9140,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_38);
    FUN_007a1b90(local_28,local_38);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_007a2840(local_28,param_2);
  FUN_00410f20(local_28);
  FUN_00417740(local_38,&DAT_00767418);
  return param_2;
}

