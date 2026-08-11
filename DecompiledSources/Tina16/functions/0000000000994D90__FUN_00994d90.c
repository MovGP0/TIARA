/* Ghidra address: 00994d90 */
/* Ghidra symbol: FUN_00994d90 */


undefined8 FUN_00994d90(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x118))(plVar1);
  }
  return uVar2;
}

