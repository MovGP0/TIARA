/* Ghidra address: 010aecc0 */
/* Ghidra symbol: FUN_010aecc0 */


void FUN_010aecc0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),param_2);
  FUN_004ae870(*(undefined8 *)(param_1 + 0x40),param_2);
  FUN_00410f20(uVar1);
  return;
}

