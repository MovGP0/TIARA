/* Ghidra address: 014a0880 */
/* Ghidra symbol: FUN_014a0880 */


undefined8 FUN_014a0880(longlong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

