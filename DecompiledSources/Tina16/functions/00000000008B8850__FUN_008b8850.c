/* Ghidra address: 008b8850 */
/* Ghidra symbol: FUN_008b8850 */


void FUN_008b8850(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  if ((cVar1 != '\0') || (param_2 == param_1)) {
    (**(code **)(*param_1 + 200))(param_1,&PTR_FUN_008b3d68);
  }
  return;
}

