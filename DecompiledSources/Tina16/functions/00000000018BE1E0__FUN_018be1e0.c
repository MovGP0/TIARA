/* Ghidra address: 018be1e0 */
/* Ghidra symbol: FUN_018be1e0 */


void FUN_018be1e0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000030;
  int *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined1 auStack_38 [32];
  
  *in_stack_00000040 = 0;
  FUN_018be110(auStack_38);
  iVar1 = *in_stack_00000030;
  iVar2 = *in_stack_00000038;
  FUN_018be110(auStack_38);
  if (*in_stack_00000030 * *in_stack_00000038 < iVar1 * iVar2) {
    *in_stack_00000040 = 1;
  }
  else {
    *in_stack_00000030 = iVar1;
    *in_stack_00000038 = iVar2;
  }
  return;
}

