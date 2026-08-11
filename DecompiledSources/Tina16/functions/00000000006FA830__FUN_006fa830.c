/* Ghidra address: 006fa830 */
/* Ghidra symbol: FUN_006fa830 */


undefined8 FUN_006fa830(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x340) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 0x4b0),param_1);
  }
  return uVar1;
}

