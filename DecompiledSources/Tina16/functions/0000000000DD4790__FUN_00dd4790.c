/* Ghidra address: 00dd4790 */
/* Ghidra symbol: FUN_00dd4790 */


void FUN_00dd4790(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10);
  if ((*(char *)(param_1 + 200) == '\x06') &&
     (dVar1 = (*(double *)(*(longlong *)(param_1 + 0x68) + 8) +
              *(double *)(*(longlong *)(param_1 + 0xa0) + 0x2c8)) -
              *(double *)(*(longlong *)(param_1 + 0x68) + 8) * 1e-06,
     *(double *)(param_1 + 0x38) <= dVar1 && dVar1 != *(double *)(param_1 + 0x38))) {
    dVar1 = *(double *)(param_1 + 0x40) /
            ((*(double *)(*(longlong *)(param_1 + 0x68) + 8) +
             *(double *)(*(longlong *)(param_1 + 0xa0) + 0x2c8)) - *(double *)(param_1 + 0x30)) -
            0.5;
    uVar2 = FUN_0040af80(*(double *)(*(longlong *)(param_1 + 0xa0) + 0x2d0) +
                         *(double *)(*(longlong *)(param_1 + 0xa0) + 0x2d8) * dVar1);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = FUN_0040af80(*(double *)(*(longlong *)(param_1 + 0xa0) + 0x2e0) +
                         *(double *)(*(longlong *)(param_1 + 0xa0) + 0x2e8) * dVar1);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  return;
}

