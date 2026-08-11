/* Ghidra address: 01bccc50 */
/* Ghidra symbol: FUN_01bccc50 */


undefined8 FUN_01bccc50(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_18);
  uVar1 = (**(code **)(*local_18 + 0x128))(local_18,&local_10);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_18);
  return local_10;
}

