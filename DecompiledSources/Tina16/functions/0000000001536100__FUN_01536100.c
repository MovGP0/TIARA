/* Ghidra address: 01536100 */
/* Ghidra symbol: FUN_01536100 */


void FUN_01536100(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01b07880(param_1);
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x13a8) = uVar1;
  uVar1 = FUN_01b077e0(param_1);
  *(undefined8 *)(param_1 + 0x13b0) = uVar1;
  return;
}

