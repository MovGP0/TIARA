/* Ghidra address: 00c8ac30 */
/* Ghidra symbol: FUN_00c8ac30 */


void FUN_00c8ac30(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_00419430(param_1 + 8,&DAT_0086e978);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

