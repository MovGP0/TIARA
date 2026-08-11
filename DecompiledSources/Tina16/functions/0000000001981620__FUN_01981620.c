/* Ghidra address: 01981620 */
/* Ghidra symbol: FUN_01981620 */


undefined8 FUN_01981620(undefined8 param_1,longlong param_2,byte param_3)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (*(longlong *)(param_2 + 8) == 0)) ||
     (((*(byte *)(param_2 + 0x19) & 2) == 0 && ((param_3 & 4) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

