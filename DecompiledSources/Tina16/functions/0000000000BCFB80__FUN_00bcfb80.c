/* Ghidra address: 00bcfb80 */
/* Ghidra symbol: FUN_00bcfb80 */


undefined8 FUN_00bcfb80(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x40) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)param_2 * 0x28);
  }
  return uVar1;
}

