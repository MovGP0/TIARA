/* Ghidra address: 005bbe00 */
/* Ghidra symbol: FUN_005bbe00 */


void FUN_005bbe00(void)

{
  char cVar1;
  undefined4 in_R9D;
  undefined2 in_stack_00000028;
  undefined2 in_stack_00000030;
  undefined2 in_stack_00000038;
  double *in_stack_00000040;
  double local_20 [2];
  
  cVar1 = FUN_00448b70();
  if (cVar1 != '\0') {
    cVar1 = FUN_00448a10(in_R9D,in_stack_00000028,in_stack_00000030,in_stack_00000038,local_20);
    if (cVar1 != '\0') {
      if (*in_stack_00000040 < 0.0) {
        *in_stack_00000040 = *in_stack_00000040 - local_20[0];
      }
      else {
        *in_stack_00000040 = *in_stack_00000040 + local_20[0];
      }
    }
  }
  return;
}

