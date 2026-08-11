/* Ghidra address: 008b88d0 */
/* Ghidra symbol: FUN_008b88d0 */


void FUN_008b88d0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x90))(param_2);
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x90))(param_2);
    cVar1 = (**(code **)(*plVar3 + 0xa0))(plVar3);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 200))(param_1,&PTR_FUN_008b3eb8);
    }
  }
  return;
}

