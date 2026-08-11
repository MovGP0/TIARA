/* Ghidra address: 00d96280 */
/* Ghidra symbol: FUN_00d96280 */


undefined8 FUN_00d96280(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007810f0();
  (**(code **)(*plVar1 + 0x220))(plVar1,param_2,param_3);
  return param_2;
}

