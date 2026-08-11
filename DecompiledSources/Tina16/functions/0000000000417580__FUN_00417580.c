/* Ghidra address: 00417580 */
/* Ghidra symbol: FUN_00417580 */


void FUN_00417580(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  param_2 = param_2 + (ulonglong)*(byte *)(param_2 + 1);
  if (*(int *)(param_2 + 6) != 0) {
    uVar2 = *(int *)(param_2 + 6) - 1;
    do {
      uVar1 = (ulonglong)uVar2;
      if (*(longlong *)(param_2 + 10 + uVar1 * 0x10) != 0) {
        FUN_00417600(param_1 + (ulonglong)*(uint *)(param_2 + 0x12 + uVar1 * 0x10),
                     **(undefined8 **)(param_2 + 10 + uVar1 * 0x10),1);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  return;
}

