/* Ghidra address: 018cfad0 */
/* Ghidra symbol: FUN_018cfad0 */


void FUN_018cfad0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 400) != 0)) {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 400));
    if (-1 < iVar1) {
      FUN_00410f20(*(undefined8 *)(param_2 + 400));
      *(undefined8 *)(param_2 + 400) = 0;
      FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar1);
    }
  }
  return;
}

