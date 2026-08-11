/* Ghidra address: 0094ab40 */
/* Ghidra symbol: FUN_0094ab40 */


undefined8 FUN_0094ab40(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)param_2 * 8);
  }
  return uVar1;
}

