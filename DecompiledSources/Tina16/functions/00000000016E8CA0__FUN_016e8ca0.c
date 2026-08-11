/* Ghidra address: 016e8ca0 */
/* Ghidra symbol: FUN_016e8ca0 */


void FUN_016e8ca0(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  char in_stack_00000028;
  
  if (in_stack_00000028 == '\x06') {
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x58) + 0x390) +
            *(double *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if (dVar1 < *(double *)(param_1 + 0x68) || dVar1 == *(double *)(param_1 + 0x68)) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      uVar2 = FUN_00409eb0();
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 8);
      *(double *)(param_1 + 0x68) =
           *(double *)(*(longlong *)(param_1 + 0x58) + 0x390) +
           *(double *)(*(longlong *)(param_1 + 0x58) + 0x10);
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

