/* Ghidra address: 01d0f3b0 */
/* Ghidra symbol: FUN_01d0f3b0 */


undefined8 FUN_01d0f3b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8);
  }
  return uVar1;
}

