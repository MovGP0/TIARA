/* Ghidra address: 00a0b5b0 */
/* Ghidra symbol: FUN_00a0b5b0 */


undefined8 FUN_00a0b5b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if (cVar2 == '\0') goto LAB_00a0b5d5;
    }
    uVar3 = 1;
  }
  else {
LAB_00a0b5d5:
    uVar3 = 0;
  }
  return uVar3;
}

