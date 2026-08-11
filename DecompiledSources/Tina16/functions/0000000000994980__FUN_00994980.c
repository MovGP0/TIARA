/* Ghidra address: 00994980 */
/* Ghidra symbol: FUN_00994980 */


undefined8 FUN_00994980(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x88);
  }
  return uVar1;
}

