/* Ghidra address: 0061d2c0 */
/* Ghidra symbol: FUN_0061d2c0 */


undefined8 FUN_0061d2c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xd0);
  }
  return uVar1;
}

