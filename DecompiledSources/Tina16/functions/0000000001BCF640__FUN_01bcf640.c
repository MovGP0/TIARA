/* Ghidra address: 01bcf640 */
/* Ghidra symbol: FUN_01bcf640 */


void FUN_01bcf640(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x8c)) {
    uVar1 = FUN_00635840(param_2,0x13);
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    uVar1 = FUN_00635840(param_2,10);
    *(undefined4 *)(param_1 + 0xac) = uVar1;
  }
  FUN_01bff3a0(param_1,param_2);
  return;
}

