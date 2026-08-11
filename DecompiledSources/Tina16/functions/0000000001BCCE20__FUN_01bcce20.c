/* Ghidra address: 01bcce20 */
/* Ghidra symbol: FUN_01bcce20 */


void FUN_01bcce20(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_10);
  uVar1 = (**(code **)(*local_10 + 0x50))(local_10);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_10);
  return;
}

