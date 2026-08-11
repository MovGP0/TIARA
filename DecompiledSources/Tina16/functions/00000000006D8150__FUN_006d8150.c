/* Ghidra address: 006d8150 */
/* Ghidra symbol: FUN_006d8150 */


undefined8 FUN_006d8150(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x530) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_006d6600(*(longlong *)(param_1 + 0x530));
  }
  return uVar1;
}

