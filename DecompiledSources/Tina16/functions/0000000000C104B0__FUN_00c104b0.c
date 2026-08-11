/* Ghidra address: 00c104b0 */
/* Ghidra symbol: FUN_00c104b0 */


void FUN_00c104b0(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x498) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    FUN_00c104f0(param_1,0,iVar1 + -1);
  }
  return;
}

