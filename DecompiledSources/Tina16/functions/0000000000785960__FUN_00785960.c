/* Ghidra address: 00785960 */
/* Ghidra symbol: FUN_00785960 */


undefined8 FUN_00785960(void)

{
  undefined8 uVar1;
  char in_R9B;
  char in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  uVar1 = 1;
  if (in_R9B == '\x02') {
    if (in_stack_00000028 == '\t') {
      *in_stack_00000030 = 0x1fffffff;
    }
    else if (in_stack_00000028 == '\n') {
      *in_stack_00000030 = 0x1fffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

