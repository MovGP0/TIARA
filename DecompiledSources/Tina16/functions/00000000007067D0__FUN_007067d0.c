/* Ghidra address: 007067d0 */
/* Ghidra symbol: FUN_007067d0 */


void FUN_007067d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
  return;
}

