/* Ghidra address: 005b3320 */
/* Ghidra symbol: FUN_005b3320 */


undefined8 FUN_005b3320(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x108);
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1), 0 < iVar2)) {
    return 1;
  }
  return 0;
}

