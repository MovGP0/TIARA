/* Ghidra address: 00bc5d80 */
/* Ghidra symbol: FUN_00bc5d80 */


void FUN_00bc5d80(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (param_2 != param_1 + 0x15cU) {
    do {
      uVar1 = param_2;
      param_2 = FUN_00bc8990(param_1,uVar1);
    } while (param_2 != 0);
    if (param_3 < uVar1) {
      *(int *)(uVar1 + 2) = -(int)((longlong)(uVar1 - param_3) / 2);
    }
    else {
      *(int *)(uVar1 + 2) = (int)((longlong)(param_3 - uVar1) / 2);
    }
  }
  return;
}

