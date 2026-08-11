/* Ghidra address: 006527b0 */
/* Ghidra symbol: FUN_006527b0 */


undefined8 FUN_006527b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1);
  }
  return uVar2;
}

