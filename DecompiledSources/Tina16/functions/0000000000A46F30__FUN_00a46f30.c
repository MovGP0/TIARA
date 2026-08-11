/* Ghidra address: 00a46f30 */
/* Ghidra symbol: FUN_00a46f30 */


void FUN_00a46f30(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x20) = param_2;
  if (param_2 < 0xff00) {
    uVar1 = FUN_004095c0((longlong)param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
    uVar1 = thunk_FUN_0412a7bb(*(undefined2 *)PTR_DAT_02004bb0,(longlong)param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_0044d440();
    }
    uVar1 = thunk_FUN_0416a623(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

