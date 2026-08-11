/* Ghidra address: 006d6600 */
/* Ghidra symbol: FUN_006d6600 */


undefined8 FUN_006d6600(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x498) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x528),param_1);
  }
  return uVar1;
}

