/* Ghidra address: 015a9480 */
/* Ghidra symbol: FUN_015a9480 */


undefined4 FUN_015a9480(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 local_c;
  
  cVar1 = FUN_015ab240(param_1,&PTR_FUN_015a7bf8);
  if (cVar1 == '\0') {
    local_c = 0;
  }
  else {
    if (param_1 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(param_1 + 0x10);
    }
    local_c = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return local_c;
}

