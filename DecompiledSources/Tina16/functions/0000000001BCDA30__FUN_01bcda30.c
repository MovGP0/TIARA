/* Ghidra address: 01bcda30 */
/* Ghidra symbol: FUN_01bcda30 */


undefined4 FUN_01bcda30(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *local_18;
  undefined4 local_10 [2];
  
  local_18 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_18);
  uVar1 = (**(code **)(*local_18 + 0x1a8))(local_18,param_2,local_10);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_18);
  return local_10[0];
}

