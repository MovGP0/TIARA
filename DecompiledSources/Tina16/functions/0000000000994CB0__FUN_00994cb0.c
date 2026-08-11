/* Ghidra address: 00994cb0 */
/* Ghidra symbol: FUN_00994cb0 */


undefined8 FUN_00994cb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  }
  return uVar2;
}

