/* Ghidra address: 00622430 */
/* Ghidra symbol: FUN_00622430 */


void FUN_00622430(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(int *)(param_1 + 0x60) != -1) {
    thunk_FUN_04156968(*(int *)(param_1 + 0x60));
  }
  uVar1 = FUN_006261a0();
  FUN_006215f0(uVar1,param_1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

