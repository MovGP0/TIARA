/* Ghidra address: 00bc7140 */
/* Ghidra symbol: FUN_00bc7140 */


void FUN_00bc7140(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_00bc70f0(param_1,*(undefined2 *)(param_2 + -2 + (longlong)iVar1 * 2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

