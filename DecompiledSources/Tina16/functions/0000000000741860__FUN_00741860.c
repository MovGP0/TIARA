/* Ghidra address: 00741860 */
/* Ghidra symbol: FUN_00741860 */


undefined8 FUN_00741860(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x318) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return uVar2;
}

