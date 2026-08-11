/* Ghidra address: 01b36c80 */
/* Ghidra symbol: FUN_01b36c80 */


undefined8 FUN_01b36c80(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x618);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return uVar2;
}

