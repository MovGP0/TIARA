/* Ghidra address: 01bff440 */
/* Ghidra symbol: FUN_01bff440 */


void FUN_01bff440(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) != param_2) {
    *(int *)(param_1 + 0x9c) = param_2;
    if (*(int *)(param_1 + 0x94) == 0x20000000) {
      uVar1 = FUN_00635930(*(undefined4 *)(param_1 + 0x8c),0xffffffce);
      *(undefined4 *)(param_1 + 0x94) = uVar1;
    }
    if (*(int *)(param_1 + 0x98) == 0x20000000) {
      uVar1 = FUN_00635840(*(undefined4 *)(param_1 + 0x8c),0x13);
      *(undefined4 *)(param_1 + 0x98) = uVar1;
    }
    FUN_01bff4d0(param_1,FUN_01bff0c0,param_2);
  }
  return;
}

