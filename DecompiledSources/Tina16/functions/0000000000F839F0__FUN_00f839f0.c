/* Ghidra address: 00f839f0 */
/* Ghidra symbol: FUN_00f839f0 */


void FUN_00f839f0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) && (*(char *)(param_1 + 0x8e) == '\0')) {
    if (*param_2 == 0x7e9) {
      FUN_00f82b80(param_1,param_2);
    }
    else {
      uVar1 = thunk_FUN_03e425c0(*(longlong *)(param_1 + 0x78),*param_2,*(undefined8 *)(param_2 + 2)
                                 ,*(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar1;
    }
  }
  return;
}

