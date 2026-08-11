/* Ghidra address: 00cce5d0 */
/* Ghidra symbol: FUN_00cce5d0 */


void FUN_00cce5d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_00410f20(uVar1);
  FUN_00cc2bf0(param_1);
  return;
}

