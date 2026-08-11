/* Ghidra address: 00bcfb20 */
/* Ghidra symbol: FUN_00bcfb20 */


undefined8 FUN_00bcfb20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x40))) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)param_2 * 0x28) & 0x10) == 0) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x20 + (longlong)param_2 * 0x28) & 8) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}

