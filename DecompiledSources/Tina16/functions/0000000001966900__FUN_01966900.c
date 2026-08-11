/* Ghidra address: 01966900 */
/* Ghidra symbol: FUN_01966900 */


undefined4 FUN_01966900(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  plVar2 = (longlong *)FUN_019667e0();
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  return uVar1;
}

