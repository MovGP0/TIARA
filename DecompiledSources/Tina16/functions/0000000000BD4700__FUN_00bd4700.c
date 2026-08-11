/* Ghidra address: 00bd4700 */
/* Ghidra symbol: FUN_00bd4700 */


void FUN_00bd4700(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[3];
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  param_1[7] = plVar1[5];
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

