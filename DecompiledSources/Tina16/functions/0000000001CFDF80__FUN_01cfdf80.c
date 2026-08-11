/* Ghidra address: 01cfdf80 */
/* Ghidra symbol: FUN_01cfdf80 */


undefined1 FUN_01cfdf80(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 200) != 0) && (iVar1 = FUN_01cfd2d0(param_1), param_2 < iVar1)) {
    return *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_2);
  }
  return 0;
}

