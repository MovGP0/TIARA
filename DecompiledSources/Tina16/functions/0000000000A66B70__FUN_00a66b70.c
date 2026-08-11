/* Ghidra address: 00a66b70 */
/* Ghidra symbol: FUN_00a66b70 */


undefined2 FUN_00a66b70(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x50) + -2 + (longlong)*(int *)(param_1 + 0x2c) * 2);
  }
  return uVar1;
}

