/* Ghidra address: 00659110 */
/* Ghidra symbol: FUN_00659110 */


undefined4 FUN_00659110(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x338) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x338) + 0x10);
  }
  return uVar1;
}

