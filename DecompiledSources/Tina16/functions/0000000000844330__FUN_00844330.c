/* Ghidra address: 00844330 */
/* Ghidra symbol: FUN_00844330 */


undefined4 FUN_00844330(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
  }
  return uVar1;
}

