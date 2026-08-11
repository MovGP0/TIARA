/* Ghidra address: 00801dc0 */
/* Ghidra symbol: FUN_00801dc0 */


void FUN_00801dc0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x698) == 0) {
    FUN_00656f10(param_1,param_2);
  }
  else if (*param_2 == 5) {
    uVar1 = FUN_0065b870(param_1);
    uVar1 = thunk_FUN_03e425c0(uVar1,*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    uVar1 = thunk_FUN_03c6bf73(uVar1,*(undefined8 *)(param_1 + 0x698),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  return;
}

