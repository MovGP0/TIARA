/* Ghidra address: 00be74b0 */
/* Ghidra symbol: FUN_00be74b0 */


void FUN_00be74b0(longlong param_1)

{
  short sVar1;
  
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(*(longlong *)(param_1 + 0x38) + 0x4d0);
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x4d0) -
          (short)(*(int *)(*(longlong *)(param_1 + 0x38) + 0x4d0) / 3);
  *(short *)(param_1 + 0x40) = sVar1;
  if (sVar1 == 0) {
    *(undefined2 *)(param_1 + 0x40) = 1;
  }
  FUN_00be7bd0();
  return;
}

