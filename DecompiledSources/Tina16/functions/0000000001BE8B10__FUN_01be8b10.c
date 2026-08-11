/* Ghidra address: 01be8b10 */
/* Ghidra symbol: FUN_01be8b10 */


void FUN_01be8b10(longlong *param_1)

{
  char cVar1;
  
  FUN_01bffb30(param_1);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  FUN_01be8ae0(param_1,cVar1 == '\0');
  return;
}

