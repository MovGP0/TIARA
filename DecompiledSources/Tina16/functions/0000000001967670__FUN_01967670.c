/* Ghidra address: 01967670 */
/* Ghidra symbol: FUN_01967670 */


undefined8 FUN_01967670(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x18);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if (cVar2 == '\0') goto LAB_0196769b;
    }
    uVar3 = 1;
  }
  else {
LAB_0196769b:
    uVar3 = 0;
  }
  return uVar3;
}

