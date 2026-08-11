/* Ghidra address: 01d34d40 */
/* Ghidra symbol: FUN_01d34d40 */


void FUN_01d34d40(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[2];
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_1[1] + (longlong)iVar1 * 8));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

