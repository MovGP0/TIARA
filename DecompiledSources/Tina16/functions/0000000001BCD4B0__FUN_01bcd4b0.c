/* Ghidra address: 01bcd4b0 */
/* Ghidra symbol: FUN_01bcd4b0 */


void FUN_01bcd4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_10);
  uVar1 = (**(code **)(*local_10 + 0x108))(local_10,param_2,param_3);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_10);
  return;
}

