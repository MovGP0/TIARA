/* Ghidra address: 01bcdc30 */
/* Ghidra symbol: FUN_01bcdc30 */


void FUN_01bcdc30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_10);
  uVar1 = (**(code **)(*local_10 + 0x1b0))(local_10,param_2,param_3,param_4,param_5);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_10);
  return;
}

