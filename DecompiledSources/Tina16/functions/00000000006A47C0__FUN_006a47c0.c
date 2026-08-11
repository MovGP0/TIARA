/* Ghidra address: 006a47c0 */
/* Ghidra symbol: FUN_006a47c0 */


void FUN_006a47c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_00645ff0);
  if (cVar2 != '\0') {
    (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
  }
  return;
}

