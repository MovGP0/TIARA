/* Ghidra address: 00a028c0 */
/* Ghidra symbol: FUN_00a028c0 */


undefined4 FUN_00a028c0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}

