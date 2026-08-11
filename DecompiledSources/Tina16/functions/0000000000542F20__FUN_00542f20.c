/* Ghidra address: 00542f20 */
/* Ghidra symbol: FUN_00542f20 */


undefined8 FUN_00542f20(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0053c4f0(param_1 + 0x2d8);
  FUN_004147f0(param_2,*(undefined8 *)(param_1 + 0x2d8),uVar1 & 0xffff,0xfde9);
  *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_1 + 0x2d8) + (longlong)(int)(uVar1 & 0xffff);
  *(int *)(param_1 + 0x2e0) = (*(int *)(param_1 + 0x2e0) - (uVar1 & 0xffff)) + -2;
  return param_2;
}

