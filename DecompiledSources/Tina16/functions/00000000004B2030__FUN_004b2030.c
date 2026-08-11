/* Ghidra address: 004b2030 */
/* Ghidra symbol: FUN_004b2030 */


undefined8 FUN_004b2030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_004b2070(param_1,param_4);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return param_2;
}

