/* Ghidra address: 00a48680 */
/* Ghidra symbol: FUN_00a48680 */


undefined8 FUN_00a48680(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return uVar2;
}

