/* Ghidra address: 00994ce0 */
/* Ghidra symbol: FUN_00994ce0 */


undefined8 FUN_00994ce0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xfff8000000000000;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x100))(plVar1);
  }
  return uVar2;
}

