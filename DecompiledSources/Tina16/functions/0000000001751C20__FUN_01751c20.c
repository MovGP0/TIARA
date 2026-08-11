/* Ghidra address: 01751c20 */
/* Ghidra symbol: FUN_01751c20 */


void FUN_01751c20(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0xa0));
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2,0,param_3);
  return;
}

