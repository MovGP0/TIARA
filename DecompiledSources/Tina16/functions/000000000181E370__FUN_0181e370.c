/* Ghidra address: 0181e370 */
/* Ghidra symbol: FUN_0181e370 */


void FUN_0181e370(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    while (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
      uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),0);
      FUN_00410f20(uVar1);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

