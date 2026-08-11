/* Ghidra address: 00724300 */
/* Ghidra symbol: FUN_00724300 */


undefined4 FUN_00724300(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xe8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xec);
  }
  return uVar1;
}

