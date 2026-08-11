/* Ghidra address: 008e7690 */
/* Ghidra symbol: FUN_008e7690 */


undefined8 FUN_008e7690(void)

{
  undefined8 uVar1;
  undefined2 *in_stack_00000028;
  uint local_c;
  
  uVar1 = FUN_008e7510();
  if (local_c < 0x10000) {
    *in_stack_00000028 = (undefined2)local_c;
  }
  else {
    uVar1 = 4;
    *in_stack_00000028 = 0;
  }
  return uVar1;
}

