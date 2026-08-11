/* Ghidra address: 006a4420 */
/* Ghidra symbol: FUN_006a4420 */


void FUN_006a4420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x188));
  (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
  return;
}

