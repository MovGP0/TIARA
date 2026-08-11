/* Ghidra address: 0074d4a0 */
/* Ghidra symbol: FUN_0074d4a0 */


void FUN_0074d4a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    uVar1 = FUN_0074cbb0(&PTR_FUN_0073de08,1,param_1);
    *(undefined8 *)(param_1 + 0x4d8) = uVar1;
    FUN_004d26c0(uVar1,param_1);
    FUN_0067fd90(*(undefined8 *)(param_1 + 0x4d8),param_1);
  }
  return;
}

