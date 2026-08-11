/* Ghidra address: 00c8be50 */
/* Ghidra symbol: FUN_00c8be50 */


undefined1 FUN_00c8be50(longlong param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2);
  if (param_2 < 0) {
    FUN_00c8b3f0(param_1,1);
  }
  return uVar1;
}

