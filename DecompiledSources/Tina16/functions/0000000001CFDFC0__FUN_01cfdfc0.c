/* Ghidra address: 01cfdfc0 */
/* Ghidra symbol: FUN_01cfdfc0 */


void FUN_01cfdfc0(longlong param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar1 = FUN_01cfd2d0(param_1);
    if (param_2 < iVar1) {
      *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_2) = param_3;
    }
  }
  return;
}

