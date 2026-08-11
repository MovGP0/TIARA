/* Ghidra address: 01803a10 */
/* Ghidra symbol: FUN_01803a10 */


undefined4 FUN_01803a10(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x10);
  }
  return uVar1;
}

