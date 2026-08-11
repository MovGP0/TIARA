/* Ghidra address: 017c43f0 */
/* Ghidra symbol: FUN_017c43f0 */


undefined8 FUN_017c43f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) && (*(longlong *)(param_1 + 0x3e0) != 0)) ||
     ((param_2 == 1 && (*(longlong *)(param_1 + 1000) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

