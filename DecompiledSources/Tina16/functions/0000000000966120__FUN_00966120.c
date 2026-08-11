/* Ghidra address: 00966120 */
/* Ghidra symbol: FUN_00966120 */


undefined8 FUN_00966120(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,iVar2 + -1);
  return param_2;
}

