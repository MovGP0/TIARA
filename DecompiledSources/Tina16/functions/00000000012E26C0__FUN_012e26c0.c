/* Ghidra address: 012e26c0 */
/* Ghidra symbol: FUN_012e26c0 */


undefined4 FUN_012e26c0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  return uVar1;
}

