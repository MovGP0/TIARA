/* Ghidra address: 01bcd990 */
/* Ghidra symbol: FUN_01bcd990 */


void FUN_01bcd990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_10);
  uVar1 = (**(code **)(*local_10 + 0x1a0))(local_10,param_2,param_3,param_4,param_5,param_6);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_10);
  return;
}

