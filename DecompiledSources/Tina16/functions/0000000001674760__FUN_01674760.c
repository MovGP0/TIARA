/* Ghidra address: 01674760 */
/* Ghidra symbol: FUN_01674760 */


void FUN_01674760(double param_1,undefined8 param_2,double param_3,double *param_4)

{
  double dVar1;
  int *in_stack_00000040;
  
  *(double *)(in_stack_00000040 + 0x38) =
       (double)*in_stack_00000040 * *(double *)(in_stack_00000040 + 0x32);
  param_3 = param_3 - *(double *)(in_stack_00000040 + 0x38);
  if (0.0 < param_3) {
    dVar1 = *(double *)(in_stack_00000040 + 0x4c) *
            (*(double *)(in_stack_00000040 + 0x4e) * param_1 + 1.0);
    if (param_1 < param_3) {
      *param_4 = dVar1 * param_1 * (param_3 - param_1 * 0.5);
      *(double *)(in_stack_00000040 + 0x22) = dVar1 * param_1;
      *(double *)(in_stack_00000040 + 0x24) =
           dVar1 * (param_3 - param_1) +
           *(double *)(in_stack_00000040 + 0x4e) * *(double *)(in_stack_00000040 + 0x4c) * param_1 *
           (param_3 - param_1 * 0.5);
      *(double *)(in_stack_00000040 + 0x26) = *(double *)(in_stack_00000040 + 0x22) * 0.0;
    }
    else {
      *param_4 = dVar1 * param_3 * param_3 * 0.5;
      *(double *)(in_stack_00000040 + 0x22) = dVar1 * param_3;
      *(double *)(in_stack_00000040 + 0x24) =
           *(double *)(in_stack_00000040 + 0x4e) * *(double *)(in_stack_00000040 + 0x4c) * param_3 *
           param_3 * 0.5;
      *(double *)(in_stack_00000040 + 0x26) = *(double *)(in_stack_00000040 + 0x22) * 0.0;
    }
  }
  else {
    *param_4 = 0.0;
    in_stack_00000040[0x22] = 0;
    in_stack_00000040[0x23] = 0;
    in_stack_00000040[0x24] = 0;
    in_stack_00000040[0x25] = 0;
    in_stack_00000040[0x26] = 0;
    in_stack_00000040[0x27] = 0;
  }
  return;
}

