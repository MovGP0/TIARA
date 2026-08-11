/* Ghidra address: 01d2d140 */
/* Ghidra symbol: FUN_01d2d140 */


void FUN_01d2d140(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),(longlong)(*(int *)(param_1 + 0x58) << 4));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x32;
  uVar1 = FUN_004095c0(800);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}

