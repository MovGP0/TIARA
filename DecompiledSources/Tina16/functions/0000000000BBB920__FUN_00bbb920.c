/* Ghidra address: 00bbb920 */
/* Ghidra symbol: FUN_00bbb920 */


undefined8 FUN_00bbb920(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))(*(longlong **)(param_1 + 0x18));
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))(*(longlong **)(param_1 + 0x18));
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
    }
  }
  return uVar3;
}

