/* Ghidra address: 014c47f0 */
/* Ghidra symbol: FUN_014c47f0 */


void FUN_014c47f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_004d1f00(*(longlong *)(param_1 + 0x38));
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

