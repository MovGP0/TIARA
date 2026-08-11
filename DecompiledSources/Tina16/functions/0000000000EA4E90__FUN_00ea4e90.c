/* Ghidra address: 00ea4e90 */
/* Ghidra symbol: FUN_00ea4e90 */


void FUN_00ea4e90(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_00414ad0();
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (*(char *)(param_1 + 0x528) == '\0') {
    *(undefined4 *)(param_1 + 0x504) = 0;
  }
  return;
}

