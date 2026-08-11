/* Ghidra address: 00c6a820 */
/* Ghidra symbol: FUN_00c6a820 */


void FUN_00c6a820(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined1 *in_stack_00000038;
  
  if ((param_2 != param_3) && (cVar1 = FUN_004113d0(param_3,&PTR_FUN_00c6a0e8), cVar1 != '\0')) {
    *in_stack_00000038 = 1;
    return;
  }
  *in_stack_00000038 = 0;
  return;
}

