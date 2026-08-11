/* Ghidra address: 00461c90 */
/* Ghidra symbol: FUN_00461c90 */


void FUN_00461c90(undefined2 *param_1,short *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x100) {
    uVar1 = FUN_004186c0(*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar1 = FUN_00418700(*(undefined8 *)(param_2 + 4));
  }
  FUN_00460b80(param_1);
  *param_1 = 8;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}

