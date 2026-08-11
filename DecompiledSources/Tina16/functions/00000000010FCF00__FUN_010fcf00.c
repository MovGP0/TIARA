/* Ghidra address: 010fcf00 */
/* Ghidra symbol: FUN_010fcf00 */


undefined1 FUN_010fcf00(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if ((param_2 < iVar1) && (*(longlong *)(param_1 + 0x10) != 0)) {
      uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2);
    }
  }
  return uVar2;
}

