/* Ghidra address: 00cd57f0 */
/* Ghidra symbol: FUN_00cd57f0 */


undefined8 FUN_00cd57f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_00cd71e0(param_1,&PTR_FUN_00cd3fc8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (param_1 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(param_1 + 0x10);
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uVar3;
}

