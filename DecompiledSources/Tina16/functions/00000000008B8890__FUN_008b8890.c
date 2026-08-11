/* Ghidra address: 008b8890 */
/* Ghidra symbol: FUN_008b8890 */


void FUN_008b8890(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 200))(param_1,&PTR_FUN_008b3eb8);
  }
  return;
}

