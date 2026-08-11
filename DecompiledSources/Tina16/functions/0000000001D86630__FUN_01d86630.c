/* Ghidra address: 01d86630 */
/* Ghidra symbol: FUN_01d86630 */


undefined8 FUN_01d86630(longlong param_1)

{
  undefined2 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_01138d40(*(undefined8 *)(param_1 + 0x60));
    *in_stack_00000028 = local_c;
    if (local_d == '\0') {
      *in_stack_00000030 = 0;
    }
    else {
      *in_stack_00000030 = 1;
    }
    if (local_e == '\0') {
      *in_stack_00000038 = 0;
    }
    else {
      *in_stack_00000038 = 1;
    }
    if (local_f == '\0') {
      *in_stack_00000040 = 0;
    }
    else {
      *in_stack_00000040 = 1;
    }
  }
  return 0;
}

