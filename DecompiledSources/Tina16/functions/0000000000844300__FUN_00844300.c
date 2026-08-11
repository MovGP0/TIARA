/* Ghidra address: 00844300 */
/* Ghidra symbol: FUN_00844300 */


undefined4 FUN_00844300(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x4bc);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x4c0);
  }
  return uVar1;
}

