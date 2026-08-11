/* Ghidra address: 007848b0 */
/* Ghidra symbol: FUN_007848b0 */


undefined8 FUN_007848b0(void)

{
  undefined8 uVar1;
  char in_stack_00000028;
  char in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 local_10;
  
  uVar1 = 0;
  if ((in_stack_00000038 == '\x01') && ((byte)(in_stack_00000028 - 8U) < 2)) {
    FUN_00423c20(&local_10,9,9);
    *in_stack_00000040 = local_10;
    uVar1 = 1;
  }
  return uVar1;
}

