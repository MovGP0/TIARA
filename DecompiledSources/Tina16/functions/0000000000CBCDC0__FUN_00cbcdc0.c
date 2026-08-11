/* Ghidra address: 00cbcdc0 */
/* Ghidra symbol: FUN_00cbcdc0 */


undefined8 FUN_00cbcdc0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x110);
  }
  return uVar1;
}

