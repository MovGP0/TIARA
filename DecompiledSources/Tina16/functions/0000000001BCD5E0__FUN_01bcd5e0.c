/* Ghidra address: 01bcd5e0 */
/* Ghidra symbol: FUN_01bcd5e0 */


undefined8 FUN_01bcd5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_01bccc20(param_1,&local_10);
  FUN_00460ba0(param_2);
  uVar1 = (**(code **)(*local_10 + 0x118))(local_10,param_3,param_2);
  FUN_0041d630(uVar1);
  FUN_0041b800(&local_10);
  return param_2;
}

