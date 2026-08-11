/* Ghidra address: 00d962b0 */
/* Ghidra symbol: FUN_00d962b0 */


undefined8 FUN_00d962b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007810f0();
  (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3);
  return param_2;
}

