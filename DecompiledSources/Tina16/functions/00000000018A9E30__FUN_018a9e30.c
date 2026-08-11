/* Ghidra address: 018a9e30 */
/* Ghidra symbol: FUN_018a9e30 */


bool FUN_018a9e30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x568));
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  return 1 < iVar1;
}

