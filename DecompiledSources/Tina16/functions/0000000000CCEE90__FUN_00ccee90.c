/* Ghidra address: 00ccee90 */
/* Ghidra symbol: FUN_00ccee90 */


void FUN_00ccee90(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_00410f20(uVar1);
  if (*(char *)(param_1 + 0x1b1) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00cb9590(param_1);
  return;
}

