/* Ghidra address: 01d01370 */
/* Ghidra symbol: FUN_01d01370 */


undefined8 FUN_01d01370(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x5b);
  }
  return uVar1;
}

