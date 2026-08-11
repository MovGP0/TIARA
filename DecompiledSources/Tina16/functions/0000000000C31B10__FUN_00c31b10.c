/* Ghidra address: 00c31b10 */
/* Ghidra symbol: FUN_00c31b10 */


void FUN_00c31b10(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c36110(param_1[2]);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 9) = 1;
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

