/* Ghidra address: 004d4cf0 */
/* Ghidra symbol: FUN_004d4cf0 */


undefined4 FUN_004d4cf0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x10);
  }
  return uVar1;
}

