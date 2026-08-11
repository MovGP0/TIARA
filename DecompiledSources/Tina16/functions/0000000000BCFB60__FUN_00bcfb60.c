/* Ghidra address: 00bcfb60 */
/* Ghidra symbol: FUN_00bcfb60 */


undefined8 FUN_00bcfb60(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_2 * 0x28);
  }
  return uVar1;
}

