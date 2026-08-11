/* Ghidra address: 004d3e30 */
/* Ghidra symbol: FUN_004d3e30 */


undefined4 FUN_004d3e30(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10);
  }
  return uVar1;
}

