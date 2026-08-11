/* Ghidra address: 01563730 */
/* Ghidra symbol: FUN_01563730 */


undefined8 FUN_01563730(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x528) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_01d013a0(param_2);
  }
  return uVar1;
}

