/* Ghidra address: 00d7efd0 */
/* Ghidra symbol: FUN_00d7efd0 */


void FUN_00d7efd0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8 + (param_2 & 0xff) * 8);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  return;
}

