/* Ghidra address: 00d2b3b0 */
/* Ghidra symbol: FUN_00d2b3b0 */


undefined8 FUN_00d2b3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00d2a9d0();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,1,0xffffffff);
  return param_2;
}

