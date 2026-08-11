/* Ghidra address: 01be6e90 */
/* Ghidra symbol: FUN_01be6e90 */


void FUN_01be6e90(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)param_1[1];
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_01bdee40);
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02005950 + 0xd0);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*param_1 + 0x98))(param_1);
    }
    else {
      (**(code **)(*plVar1 + 0x98))(plVar1);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return;
}

