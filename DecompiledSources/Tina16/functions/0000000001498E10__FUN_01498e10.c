/* Ghidra address: 01498e10 */
/* Ghidra symbol: FUN_01498e10 */


void FUN_01498e10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0xbc8);
  FUN_0177dd40(plVar1,&PTR_DAT_01498ef4);
  FUN_00414ad0(plVar1 + 0x1c,L"Python file|*.py");
  cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar3 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0xbc8),&local_20);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x8c0) + 0x4e8);
    (**(code **)(*plVar2 + 0x100))(plVar2,local_20);
  }
  FUN_0177dd40(plVar1,&DAT_01498f38);
  FUN_00414ad0(plVar1 + 0x1c,L"Interpreter file (*.IPR)|*.IPR");
  FUN_00414480(&local_20);
  return;
}

