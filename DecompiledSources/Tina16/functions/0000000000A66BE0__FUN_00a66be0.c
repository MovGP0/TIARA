/* Ghidra address: 00a66be0 */
/* Ghidra symbol: FUN_00a66be0 */


void FUN_00a66be0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) {
    uVar1 = FUN_00a521c0(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) {
    *(undefined2 *)(param_1 + 0x26) =
         *(undefined2 *)
          (*(longlong *)(param_1 + 0x50) + -2 + (longlong)*(int *)(param_1 + 0x2c) * 2);
  }
  else {
    *(undefined2 *)(param_1 + 0x26) = 0;
  }
  return;
}

